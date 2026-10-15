#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0xCA52DE0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCA53110)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCA530C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCA53070)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_OPENSHADOW_OFFSET UNITYSDK_OFFSET(0xCA52D80)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xCA52C90)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SHOWPOSM_OFFSET UNITYSDK_OFFSET(0xCA52E40)

namespace RPG::Client::ChenLingBattle
{
	class ChenLingPrepareModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DitherAlpha; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::BaseShaderPropertyTransition* _Transition; // 0x20
		::UnityEngine::MeshRenderer* _MeshRenderer; // 0x28
		::System::Boolean _EnabledPOSM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetDitherAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void OpenShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_OPENSHADOW_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_CLOSESHADOW_OFFSET))(this);
		}

		::System::Void ShowPOSM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_SHOWPOSM_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGPREPAREMODELVIEW_ONDESTROY_OFFSET))(this);
		}

	};
}
