#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

#define MGJHLLCENKL_HJPKCLNEFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74BA30)

inline static constexpr unsigned int MGJHLLCENKL_HJPKCLNEFHI_TypeDefinitionIndex = 36491;

	class MGJHLLCENKL_HJPKCLNEFHI : public ::System::Object
	{
	public:
		::System::UInt32 HJPBAJEPAGE; // 0x10
		::System::Boolean MACNNFMIMFG; // 0x14
		::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState ADCPPJNMGJP; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJHLLCENKL_HJPKCLNEFHI_CTOR_OFFSET))(this);
		}

	};
