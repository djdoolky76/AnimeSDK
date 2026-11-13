#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMoveControlType.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMovePathType.h"
#include "unitysdk/RPG/GameCore/EAdventureTriggerMoveRotateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFELGAIGHAP;
namespace RPG::Client { class CameraBlendCurve; }

#define MJEOAJOAKOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A6CB0)
#define MJEOAJOAKOD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1A3A6A80)

inline static constexpr unsigned int MJEOAJOAKOD_TypeDefinitionIndex = 58285;

	class MJEOAJOAKOD : public ::System::Object
	{
	public:
		::KFELGAIGHAP* PKMMBEABKFM; // 0x10
		::KFELGAIGHAP* MGJLINFADJK; // 0x18
		::KFELGAIGHAP* AIFBNMPDJOO; // 0x20
		::RPG::Client::CameraBlendCurve* KFCELIGJDAD; // 0x28
		::RPG::GameCore::EAdventureTriggerMovePathType JIMGLCPCDDL; // 0x30
		::System::Single MFOKFOOCHPA; // 0x34
		::RPG::GameCore::EAdventureTriggerMoveControlType LGIPANDLPFE; // 0x38
		::UnityEngine::Vector3 HMFELPGGPMI; // 0x3C
		::System::UInt32 DGIPOMANFEM; // 0x48
		::System::UInt32 IHKEHJCACDO; // 0x4C
		::System::UInt32 CDPKHFMJBPF; // 0x50
		::System::Single DGLGPLADDFB; // 0x54
		::RPG::GameCore::EAdventureTriggerMoveRotateType FFKGDIKMOBO; // 0x58
		::System::Boolean FKLBDDFFBMD; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEOAJOAKOD_PJPFIHFAHGO_OFFSET))(this);
		}

	};
