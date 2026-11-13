#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJNABDPANBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A63DB80)

inline static constexpr unsigned int BJNABDPANBL_TypeDefinitionIndex = 57446;

	class BJNABDPANBL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* BJAKFBKHNKF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNABDPANBL_CTOR_OFFSET))(this);
		}

	};
