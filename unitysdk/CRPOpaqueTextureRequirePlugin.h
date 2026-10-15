#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CRPOpaqueTextureRequirePlugin_CaptureType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRPOPAQUETEXTUREREQUIREPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCDEC00)
#define CRPOPAQUETEXTUREREQUIREPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDEBF0)
#define CRPOPAQUETEXTUREREQUIREPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDCDEA40)
#define CRPOPAQUETEXTUREREQUIREPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDCDE7A0)

	class CRPOpaqueTextureRequirePlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean CaptureAfterOpaque; // 0x18
		::System::Byte _padding0[0x3];
		::CRPOpaqueTextureRequirePlugin_CaptureType CapType; // 0x1C
		::System::Boolean FallBackToOpaque; // 0x20
		::System::Boolean MobileDisable; // 0x21
		static ::System::Int32* StaticGet_GCOHFDBEJMP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CRPOpaqueTextureRequirePlugin")->GetStaticField(0x135F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPOPAQUETEXTUREREQUIREPLUGIN_ONDISABLE_OFFSET))(this);
		}

	};
