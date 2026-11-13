#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define LKFPICOFNDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63B3C0)

inline static constexpr unsigned int LKFPICOFNDF_TypeDefinitionIndex = 44808;

	class LKFPICOFNDF : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* HPBAMMEFDMK; // 0x10
		::RPG::GameCore::FixPoint AGFLHPDBFDJ; // 0x18
		::RPG::GameCore::FixPoint NLFIKMEADBH; // 0x20
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x28
		::RPG::GameCore::FixPoint KOMEOMHBCEC; // 0x30
		::System::Boolean PIPHKKAGDDC; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ChenLingBattleBuffType LMIODAHFGOA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFPICOFNDF_CTOR_OFFSET))(this);
		}

	};
