#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

#define MGJHLLCENKL_HJPKCLNEFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1605E1A0)

inline static constexpr unsigned int MGJHLLCENKL_HJPKCLNEFHI_TypeDefinitionIndex = 37419;

	class MGJHLLCENKL_HJPKCLNEFHI : public ::System::Object
	{
	public:
		::System::Boolean MACNNFMIMFG; // 0x10
		::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState ADCPPJNMGJP; // 0x11
		::System::UInt32 HJPBAJEPAGE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJHLLCENKL_HJPKCLNEFHI_CTOR_OFFSET))(this);
		}

	};
