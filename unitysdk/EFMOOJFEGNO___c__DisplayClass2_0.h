#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NABBMLGAIBK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EFMOOJFEGNO;
class LPHINGPIEAJ;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EFMOOJFEGNO___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A348CF0)
#define EFMOOJFEGNO___C__DISPLAYCLASS2_0___TRYCREATECUSTOMER_B__0_OFFSET UNITYSDK_OFFSET(0x1A349DB0)
#define EFMOOJFEGNO___C__DISPLAYCLASS2_0___TRYCREATECUSTOMER_B__1_OFFSET UNITYSDK_OFFSET(0x1A349F00)

inline static constexpr unsigned int EFMOOJFEGNO___c__DisplayClass2_0_TypeDefinitionIndex = 79757;

	class EFMOOJFEGNO___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::String* servedTalkTextID; // 0x10
		::EFMOOJFEGNO* __4__this; // 0x18
		::RPG::GameCore::GameEntity* gameEntity; // 0x20
		::NABBMLGAIBK customer; // 0x28
		::LPHINGPIEAJ* entity; // 0xA0
		::UnityEngine::Quaternion spawnRotation; // 0xA8
		::UnityEngine::Vector3 spawnPosition; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMOOJFEGNO___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryCreateCustomer_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO___C__DISPLAYCLASS2_0___TRYCREATECUSTOMER_B__0_OFFSET))(this, a1);
		}

		::System::Void __TryCreateCustomer_b__1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFMOOJFEGNO___C__DISPLAYCLASS2_0___TRYCREATECUSTOMER_B__1_OFFSET))(this, a1);
		}

	};
