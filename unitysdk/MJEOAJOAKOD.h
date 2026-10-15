#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFELGAIGHAP;
namespace RPG::Client { class CameraBlendCurve; }

#define MJEOAJOAKOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB969E90)
#define MJEOAJOAKOD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB969DB0)

	class MJEOAJOAKOD : public ::System::Object
	{
	public:
		::KFELGAIGHAP* MGJLINFADJK; // 0x10
		::RPG::Client::CameraBlendCurve* KFCELIGJDAD; // 0x18
		::System::UInt32 IHKEHJCACDO; // 0x20
		::System::Single MFOKFOOCHPA; // 0x24
		::System::UInt32 CDPKHFMJBPF; // 0x28
		::System::Single DGLGPLADDFB; // 0x2C
		::UnityEngine::Vector3 HMFELPGGPMI; // 0x30
		::System::Boolean FKLBDDFFBMD; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_PJPFIHFAHGO_OFFSET))(this);
		}

	};
