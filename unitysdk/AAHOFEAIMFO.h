#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NewsTickerItem; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define AAHOFEAIMFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB0C71F0)
#define AAHOFEAIMFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C71E0)
#define AAHOFEAIMFO_ONRECYCLEDITEMREUSED_OFFSET UNITYSDK_OFFSET(0xB0C73B0)

	class AAHOFEAIMFO : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PGKENBMKDKA; // 0x10
		::UnityEngine::Transform* GDHDOCGMACL; // 0x18
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AAHOFEAIMFO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NewsTickerItem* Create()
		{
			return ((::RPG::Client::NewsTickerItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHOFEAIMFO_CREATE_OFFSET))(this);
		}

		::System::Void OnRecycledItemReused(::RPG::Client::NewsTickerItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*))((::PBYTE)hIl2Cpp + AAHOFEAIMFO_ONRECYCLEDITEMREUSED_OFFSET))(this, a1);
		}

	};
