#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFELGAIGHAP;
namespace RPG::Client { class CameraBlendCurve; }

#define MJEOAJOAKOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB963DF0)
#define MJEOAJOAKOD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB963D10)

inline static constexpr unsigned int MJEOAJOAKOD_TypeDefinitionIndex = 57058;

	class MJEOAJOAKOD : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* KFCELIGJDAD; // 0x10
		::KFELGAIGHAP* MGJLINFADJK; // 0x18
		::System::Single DGLGPLADDFB; // 0x20
		::System::UInt32 CDPKHFMJBPF; // 0x24
		::System::Boolean FKLBDDFFBMD; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single MFOKFOOCHPA; // 0x2C
		::UnityEngine::Vector3 HMFELPGGPMI; // 0x30
		::System::UInt32 IHKEHJCACDO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_PJPFIHFAHGO_OFFSET))(this);
		}

	};
