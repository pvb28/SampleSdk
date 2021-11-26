Pod::Spec.new do |spec|
    spec.name          = 'SampleSdk'
    spec.version       = '0.1'
    spec.license       = { :type => 'MIT' }
    spec.homepage      = 'https://github.com/pvb28/SampleSdk'
    spec.authors       = { 'Veera' => 'veerabrahmampydimarri28@gmail.com' }
    spec.summary       = 'It is a SampleSdk contains a single func customPrint'
    spec.source        = { :git => 'https://github.com/pvb28/SampleSdk.git', :tag => spec.version }
    spec.module_name   = 'SampleSdk'
    spec.swift_version = '4.0'
    spec.vendored_frameworks = 'SampleSdk.xcframework'

    spec.ios.deployment_target  = '9.0'
    spec.osx.deployment_target  = '10.10'
  
  end