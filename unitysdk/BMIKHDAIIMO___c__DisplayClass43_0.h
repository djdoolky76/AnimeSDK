#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMIKHDAIIMO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Object; }

#define BMIKHDAIIMO___C__DISPLAYCLASS43_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC73B2D0)
#define BMIKHDAIIMO___C__DISPLAYCLASS43_0___PERSISTENTASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xC73B2E0)

inline static constexpr unsigned int BMIKHDAIIMO___c__DisplayClass43_0_TypeDefinitionIndex = 76006;

	class BMIKHDAIIMO___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x10
		::BMIKHDAIIMO* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS43_0_CTOR_OFFSET))(this);
		}

		::System::Void __PersistentAsyncLoad_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS43_0___PERSISTENTASYNCLOAD_B__0_OFFSET))(this, a1);
		}

	};
