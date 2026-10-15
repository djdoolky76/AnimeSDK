#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::AI { class NavMeshModifier; }
namespace UnityEngine::AI { class NavMeshModifierVolume; }

#define UNITYENGINE_AI_NAVMESHSURFACE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3765C0)
#define UNITYENGINE_AI_NAVMESHSURFACE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C376600)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__76_0_OFFSET UNITYSDK_OFFSET(0x1C376610)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_0_OFFSET UNITYSDK_OFFSET(0x1C376630)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_1_OFFSET UNITYSDK_OFFSET(0x1C376650)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_2_OFFSET UNITYSDK_OFFSET(0x1C376710)

namespace UnityEngine::AI
{
	class NavMeshSurface___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>** StaticGet___9__77_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>**)UnitySDK::FromName("UnityEngine.AI", "<>c")->GetStaticField(0xBE0);
		}

		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__77_2()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)UnitySDK::FromName("UnityEngine.AI", "<>c")->GetStaticField(0xBE8);
		}

		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>** StaticGet___9__76_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>**)UnitySDK::FromName("UnityEngine.AI", "<>c")->GetStaticField(0xBF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.AI", "<>c")->GetStaticField(0xBF8);
		}

		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__77_1()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)UnitySDK::FromName("UnityEngine.AI", "<>c")->GetStaticField(0xC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _AppendModifierVolumes_b__76_0(::UnityEngine::AI::NavMeshModifierVolume* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifierVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__76_0_OFFSET))(this, a1);
		}

		::System::Boolean _CollectSources_b__77_0(::UnityEngine::AI::NavMeshModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifier*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_0_OFFSET))(this, a1);
		}

		::System::Boolean _CollectSources_b__77_1(::UnityEngine::AI::NavMeshBuildSource a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_1_OFFSET))(this, a1);
		}

		::System::Boolean _CollectSources_b__77_2(::UnityEngine::AI::NavMeshBuildSource a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__77_2_OFFSET))(this, a1);
		}

	};
}
