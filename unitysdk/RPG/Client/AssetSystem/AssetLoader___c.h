#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class AsyncOperation; }

#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4DA730)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DA760)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C___CTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1C4DA770)

namespace RPG::Client::AssetSystem
{
	class AssetLoader___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.AssetSystem", "<>c")->GetStaticField(0x157B0);
		}

		static ::System::Action** StaticGet___9__40_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.AssetSystem", "<>c")->GetStaticField(0x157B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__40_0(::RPG::Client::AssetSystem::AssetLoader* a1, ::UnityEngine::AsyncOperation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___C___CTOR_B__40_0_OFFSET))(this, a1, a2);
		}

	};
}
