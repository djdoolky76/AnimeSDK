#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABMDCOFHCG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPBKPGBDOMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA38F40)

	class MPBKPGBDOMF : public ::System::Object
	{
	public:
		::FABMDCOFHCG* LMJICKDGGJI; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* PLKDKOPLLNB; // 0x18
		::RPG::GameCore::GameEntity* FIDLMENLMNA; // 0x20
		::System::Boolean KMGIHDHMBJB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBKPGBDOMF_CTOR_OFFSET))(this);
		}

	};
