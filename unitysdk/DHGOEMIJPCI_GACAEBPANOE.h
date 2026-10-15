#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define DHGOEMIJPCI_GACAEBPANOE_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD91C0)

	class DHGOEMIJPCI_GACAEBPANOE : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* NCHHLMEEMLC; // 0x10
		::DEBEAKKOHLN* EGOMDGLJIGG; // 0x18
		::RPG::GameCore::GameEntity* KDIBGMJGPHG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GACAEBPANOE_CTOR_OFFSET))(this);
		}

	};
