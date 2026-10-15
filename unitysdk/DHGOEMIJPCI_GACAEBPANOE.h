#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define DHGOEMIJPCI_GACAEBPANOE_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD2EB0)

inline static constexpr unsigned int DHGOEMIJPCI_GACAEBPANOE_TypeDefinitionIndex = 73271;

	class DHGOEMIJPCI_GACAEBPANOE : public ::System::Object
	{
	public:
		::DEBEAKKOHLN* EGOMDGLJIGG; // 0x10
		::RPG::GameCore::GameEntity* KDIBGMJGPHG; // 0x18
		::UnityEngine::GameObject* NCHHLMEEMLC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOEMIJPCI_GACAEBPANOE_CTOR_OFFSET))(this);
		}

	};
