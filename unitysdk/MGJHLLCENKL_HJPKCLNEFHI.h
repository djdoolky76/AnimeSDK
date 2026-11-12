#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

#define MGJHLLCENKL_HJPKCLNEFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CD390)

inline static constexpr unsigned int MGJHLLCENKL_HJPKCLNEFHI_TypeDefinitionIndex = 37419;

	class MGJHLLCENKL_HJPKCLNEFHI : public ::System::Object
	{
	public:
		::System::UInt32 HJPBAJEPAGE; // 0x10
		::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState ADCPPJNMGJP; // 0x14
		::System::Boolean MACNNFMIMFG; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJHLLCENKL_HJPKCLNEFHI_CTOR_OFFSET))(this);
		}

	};
