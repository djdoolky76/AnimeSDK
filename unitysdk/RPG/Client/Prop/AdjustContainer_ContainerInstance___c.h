#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC16990)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC169D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C___REGENERATENOREUSE_B__11_2_OFFSET UNITYSDK_OFFSET(0xDC169E0)

namespace RPG::Client::Prop
{
	class AdjustContainer_ContainerInstance___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x401A0);
		}

		static ::System::Action** StaticGet___9__11_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x401A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C_CTOR_OFFSET))(this);
		}

		::System::Void __ReGenerateNoReUse_b__11_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___C___REGENERATENOREUSE_B__11_2_OFFSET))(this, a1, a2);
		}

	};
}
