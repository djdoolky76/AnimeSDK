#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMIKHDAIIMO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class GameObject; }

#define BMIKHDAIIMO___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBDB2D30)
#define BMIKHDAIIMO___C__DISPLAYCLASS39_0___INITINSTOBJ_B__0_OFFSET UNITYSDK_OFFSET(0xBDB88F0)

inline static constexpr unsigned int BMIKHDAIIMO___c__DisplayClass39_0_TypeDefinitionIndex = 73878;

	class BMIKHDAIIMO___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* instObject; // 0x10
		::BMIKHDAIIMO* __4__this; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x20
		::System::Boolean isLoadedBySync; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Void __InitInstObj_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS39_0___INITINSTOBJ_B__0_OFFSET))(this);
		}

	};
