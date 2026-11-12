#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMoveControlType.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMovePathType.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMoveRotateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFELGAIGHAP;
namespace RPG::Client { class CameraBlendCurve; }

#define MJEOAJOAKOD_CTOR_OFFSET UNITYSDK_OFFSET(0xC221AB0)
#define MJEOAJOAKOD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC221890)

inline static constexpr unsigned int MJEOAJOAKOD_TypeDefinitionIndex = 58285;

	class MJEOAJOAKOD : public ::System::Object
	{
	public:
		::KFELGAIGHAP* PKMMBEABKFM; // 0x10
		::RPG::Client::CameraBlendCurve* KFCELIGJDAD; // 0x18
		::KFELGAIGHAP* MGJLINFADJK; // 0x20
		::KFELGAIGHAP* AIFBNMPDJOO; // 0x28
		::RPG::GameCore::EAdventureTriggerMovePathType JIMGLCPCDDL; // 0x30
		::System::Single DGLGPLADDFB; // 0x34
		::UnityEngine::Vector3 HMFELPGGPMI; // 0x38
		::System::UInt32 CDPKHFMJBPF; // 0x44
		::RPG::GameCore::EAdventureTriggerMoveRotateType FFKGDIKMOBO; // 0x48
		::System::Boolean FKLBDDFFBMD; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt32 IHKEHJCACDO; // 0x50
		::System::Single MFOKFOOCHPA; // 0x54
		::RPG::GameCore::EAdventureTriggerMoveControlType LGIPANDLPFE; // 0x58
		::System::UInt32 DGIPOMANFEM; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_PJPFIHFAHGO_OFFSET))(this);
		}

	};
