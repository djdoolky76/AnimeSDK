#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"
#include "unitysdk/System/Object.h"
class EAHCLJPMCIG;

#define LDEKKFJLNGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB61E860)

inline static constexpr unsigned int LDEKKFJLNGH_TypeDefinitionIndex = 80577;

	class LDEKKFJLNGH : public ::System::Object
	{
	public:
		::EAHCLJPMCIG* HNEOOKPBCNK; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FateRinBattleHudAreaType ANKBAKDHDJD; // 0x1C
		::System::Void _ctor(::EAHCLJPMCIG* a1, ::RPG::GameCore::FateRinBattleHudAreaType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*, ::RPG::GameCore::FateRinBattleHudAreaType, ::System::Boolean))((::PBYTE)hIl2Cpp + LDEKKFJLNGH_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
