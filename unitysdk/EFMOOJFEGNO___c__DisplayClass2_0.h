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

#define EFMOOJFEGNO___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14820800)
#define EFMOOJFEGNO___C__DISPLAYCLASS2_0___TRYCREATECUSTOMER_B__0_OFFSET UNITYSDK_OFFSET(0x148218C0)
#define EFMOOJFEGNO___C__DISPLAYCLASS2_0___TRYCREATECUSTOMER_B__1_OFFSET UNITYSDK_OFFSET(0x14821A10)

inline static constexpr unsigned int EFMOOJFEGNO___c__DisplayClass2_0_TypeDefinitionIndex = 79758;

	class EFMOOJFEGNO___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* gameEntity; // 0x10
		::NABBMLGAIBK customer; // 0x18
		::EFMOOJFEGNO* __4__this; // 0x90
		::System::String* servedTalkTextID; // 0x98
		::LPHINGPIEAJ* entity; // 0xA0
		::UnityEngine::Vector3 spawnPosition; // 0xA8
		::UnityEngine::Quaternion spawnRotation; // 0xB4
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
