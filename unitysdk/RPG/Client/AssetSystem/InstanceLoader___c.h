#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::AssetSystem { class InstanceLoader; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class AsyncOperation; }

#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4DDDE0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DDE10)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C___CTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1C4DDE20)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int InstanceLoader___c_TypeDefinitionIndex = 41571;

	class InstanceLoader___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__46_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.AssetSystem", "<>c")->GetStaticField(0xC10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.AssetSystem", "<>c")->GetStaticField(0xC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__46_0(::RPG::Client::AssetSystem::InstanceLoader* a1, ::UnityEngine::AsyncOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::InstanceLoader*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___C___CTOR_B__46_0_OFFSET))(this, a1, a2);
		}

	};
}
