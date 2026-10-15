#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANCMHGEOJM;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Object; }

#define HANCMHGEOJM___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B98550)
#define HANCMHGEOJM___C__DISPLAYCLASS5_0___PERSISTENTASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x15B985E0)

	class HANCMHGEOJM___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::HANCMHGEOJM* __4__this; // 0x10
		::RPG::Client::OpenWorld::StreamingItemData* renderItem; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __PersistentAsyncLoad_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HANCMHGEOJM___C__DISPLAYCLASS5_0___PERSISTENTASYNCLOAD_B__0_OFFSET))(this, a1);
		}

	};
