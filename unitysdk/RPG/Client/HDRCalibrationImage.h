#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRCALIBRATIONIMAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD1A580)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD1A570)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE_START_OFFSET UNITYSDK_OFFSET(0xDD1A380)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD1A450)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRCalibrationImage_TypeDefinitionIndex = 74883;

	class HDRCalibrationImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isBackground; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Image* KIODLMCBHLL; // 0x20
		static ::System::Int32* StaticGet_HLCMBIDIJPC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRCalibrationImage")->GetStaticField(0x4D10);
		}

		static ::System::Int32* StaticGet_CDNPLBFACFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRCalibrationImage")->GetStaticField(0x4D14);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_UPDATE_OFFSET))(this);
		}

	};
}
