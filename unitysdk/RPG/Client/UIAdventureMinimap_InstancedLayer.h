#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MiniMapLayer; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0xE3761E0)

namespace RPG::Client
{
	class UIAdventureMinimap_InstancedLayer : public ::System::Object
	{
	public:
		::RPG::Client::MiniMapLayer* Layer; // 0x10
		::UnityEngine::RectTransform* LayerTransform; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* InstancedZoneIDs; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* InstancedZones; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_INSTANCEDLAYER_CTOR_OFFSET))(this);
		}

	};
}
