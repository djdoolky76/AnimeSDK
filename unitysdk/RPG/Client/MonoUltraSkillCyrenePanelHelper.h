#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_CHECKCONFIGLEGAL_OFFSET UNITYSDK_OFFSET(0xD87F380)
#define RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0xD87F830)
#define RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_GETSPPOINTNODEBYINDEX_OFFSET UNITYSDK_OFFSET(0xD87F410)
#define RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_ISULTRASKILLSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xD87F630)
#define RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD87F7E0)

namespace RPG::Client
{
	class MonoUltraSkillCyrenePanelHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* NormalChargeOrder; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* SpecialInnerChargeOrder; // 0x20
		::Il2CppArray<::UnityEngine::Transform*>* SpecialOutterChargeOrder; // 0x28
		// static const ::System::Object _INNER_POINT_NUM; // 0x0
		// static const ::System::Object _OUTER_POINT_NUM; // 0x0
		// static const ::System::Object _POINT_NUM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_CTOR_OFFSET))(this);
		}

		::System::Boolean CheckConfigLegal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_CHECKCONFIGLEGAL_OFFSET))(this);
		}

		::UnityEngine::Transform* GetSPPointNodeByIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_GETSPPOINTNODEBYINDEX_OFFSET))(this, a1);
		}

		::System::Boolean IsUltraSkillSpecialState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_ISULTRASKILLSPECIALSTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOULTRASKILLCYRENEPANELHELPER_ONENABLE_OFFSET))(this);
		}

	};
}
