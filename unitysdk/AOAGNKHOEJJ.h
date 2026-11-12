#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define AOAGNKHOEJJ_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x1671CA50)
#define AOAGNKHOEJJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1671CE30)
#define AOAGNKHOEJJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1671CF50)
#define AOAGNKHOEJJ_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x1671C780)
#define AOAGNKHOEJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1671D040)
#define AOAGNKHOEJJ_ELKJMAHMMPG_OFFSET UNITYSDK_OFFSET(0x1671C7D0)
#define AOAGNKHOEJJ_FJEEHFBCCLH_OFFSET UNITYSDK_OFFSET(0x1671CD70)
#define AOAGNKHOEJJ_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0x1671C730)
#define AOAGNKHOEJJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1671CCA0)
#define AOAGNKHOEJJ_KABMIIPEOBB_OFFSET UNITYSDK_OFFSET(0x1671CC60)
#define AOAGNKHOEJJ_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x1671CCB0)
#define AOAGNKHOEJJ_LCFNCHEHDNC_OFFSET UNITYSDK_OFFSET(0x1671C930)
#define AOAGNKHOEJJ_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0x1671CB80)
#define AOAGNKHOEJJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1671C690)
#define AOAGNKHOEJJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1671C6F0)

inline static constexpr unsigned int AOAGNKHOEJJ_TypeDefinitionIndex = 73401;

	class AOAGNKHOEJJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* JIOMPAPFCMJ; // 0x60
		::System::Action* LKMLFIPPEML; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::System::Boolean EINNACFPAEN; // 0x78
		::System::Byte _padding0[0x3];
		::System::Int32 _Priority_k__BackingField; // 0x7C
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ__ONBIND_OFFSET))(this);
		}

		::System::Void FKMDEFDJPAI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_FKMDEFDJPAI_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void LCFNCHEHDNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_LCFNCHEHDNC_OFFSET))(this, a1);
		}

		::System::Void ELKJMAHMMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_ELKJMAHMMPG_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void NLEKGFJGGCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_NLEKGFJGGCI_OFFSET))(this, a1);
		}

		::System::Boolean KABMIIPEOBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_KABMIIPEOBB_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void FJEEHFBCCLH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_FJEEHFBCCLH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
