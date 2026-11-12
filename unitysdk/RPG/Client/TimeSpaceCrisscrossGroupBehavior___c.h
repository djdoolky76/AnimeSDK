#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class GameObjectAudio; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xED02AC0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xED02B00)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_0_OFFSET UNITYSDK_OFFSET(0xED02C50)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_1_OFFSET UNITYSDK_OFFSET(0xED02C70)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_0_OFFSET UNITYSDK_OFFSET(0xED02BE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_1_OFFSET UNITYSDK_OFFSET(0xED02C00)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTRENDERERSTO_B__28_0_OFFSET UNITYSDK_OFFSET(0xED02B10)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___c_TypeDefinitionIndex = 72169;

	class TimeSpaceCrisscrossGroupBehavior___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Collider*>** StaticGet___9__31_0()
		{
			return (::System::Predicate_1<::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28580);
		}

		static ::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::Bounds>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::UnityEngine::Collider*, ::UnityEngine::Bounds>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28588);
		}

		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__28_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28590);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x28598);
		}

		static ::System::Predicate_1<::RPG::Client::GameObjectAudio*>** StaticGet___9__36_1()
		{
			return (::System::Predicate_1<::RPG::Client::GameObjectAudio*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x285A0);
		}

		static ::System::Predicate_1<::RPG::Client::GameObjectAudio*>** StaticGet___9__36_0()
		{
			return (::System::Predicate_1<::RPG::Client::GameObjectAudio*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x285A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectRenderersTo_b__28_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTRENDERERSTO_B__28_0_OFFSET))(this, a1);
		}

		::System::Boolean __CollectColliderTo_b__31_0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_0_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds __CollectColliderTo_b__31_1(::UnityEngine::Collider* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTCOLLIDERTO_B__31_1_OFFSET))(this, a1);
		}

		::System::Boolean __CollectAudios_b__36_0(::RPG::Client::GameObjectAudio* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_0_OFFSET))(this, a1);
		}

		::System::Boolean __CollectAudios_b__36_1(::RPG::Client::GameObjectAudio* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GameObjectAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___C___COLLECTAUDIOS_B__36_1_OFFSET))(this, a1);
		}

	};
}
