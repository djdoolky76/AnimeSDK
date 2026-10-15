#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshModifier; }

#define UNITYENGINE_AI_NAVMESHMODIFIER_AFFECTSAGENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C372DC0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C372ED0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C372E60)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_ACTIVEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1C372B80)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_AREA_OFFSET UNITYSDK_OFFSET(0x1C372B40)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0x1C372B60)
#define UNITYENGINE_AI_NAVMESHMODIFIER_GET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1C372B20)
#define UNITYENGINE_AI_NAVMESHMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C372D30)
#define UNITYENGINE_AI_NAVMESHMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C372BE0)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_AREA_OFFSET UNITYSDK_OFFSET(0x1C372B50)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_IGNOREFROMBUILD_OFFSET UNITYSDK_OFFSET(0x1C372B70)
#define UNITYENGINE_AI_NAVMESHMODIFIER_SET_OVERRIDEAREA_OFFSET UNITYSDK_OFFSET(0x1C372B30)

namespace UnityEngine::AI
{
	class NavMeshModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean m_OverrideArea; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 m_Area; // 0x1C
		::System::Boolean m_IgnoreFromBuild; // 0x20
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* m_AffectedAgents; // 0x28
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>** StaticGet_s_NavMeshModifiers()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>**)UnitySDK::FromName("UnityEngine.AI", "NavMeshModifier")->GetStaticField(0xBA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_CCTOR_OFFSET))();
		}

		::System::Boolean get_overrideArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_OVERRIDEAREA_OFFSET))(this);
		}

		::System::Void set_overrideArea(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_OVERRIDEAREA_OFFSET))(this, a1);
		}

		::System::Int32 get_area()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_AREA_OFFSET))(this);
		}

		::System::Void set_area(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_AREA_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreFromBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_IGNOREFROMBUILD_OFFSET))(this);
		}

		::System::Void set_ignoreFromBuild(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_SET_IGNOREFROMBUILD_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>* get_activeModifiers()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshModifier*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_GET_ACTIVEMODIFIERS_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean AffectsAgentType(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIER_AFFECTSAGENTTYPE_OFFSET))(this, a1);
		}

	};
}
