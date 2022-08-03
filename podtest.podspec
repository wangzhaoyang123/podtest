#
# Be sure to run `pod lib lint podtest.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'podtest'
  s.version          = '0.6.0'
  s.summary          = 'A test pod.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/wangzhaoyang123/podtest'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wangzhaoyang123' => 'wangzhaoyang@lexue.com' }
  s.source           = { :git => 'https://github.com/wangzhaoyang123/podtest.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.1'

  s.source_files = 'podtest/Classes/**/*'
  

  #s.vendored_frameworks = 'podtest/ThirdPart/Podtest.framework'

    s.vendored_frameworks = [
      'podtest/ThirdPart/Podtest.framework',
      'podtest/ThirdPart/SampleFramework.framework']

  
  # s.resource_bundles = {  podtest/ThirdPart/Podtest.framework
  #   'podtest' => ['podtest/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  #s.subspec 'podtest' do |pt|
   #   pt.vendored_frameworks = 'podtest/ThirdPart/testpod.framework'
   # end
   #s.subspec 'QZCameraKit' do |qz|
   #    qz.vendored_frameworks = 'podtest/ThirdPart/QZCameraKit.framework'
   #  end
end
