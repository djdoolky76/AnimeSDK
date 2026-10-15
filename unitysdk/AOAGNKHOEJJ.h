#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define AOAGNKHOEJJ_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x15899EE0)
#define AOAGNKHOEJJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1589A2C0)
#define AOAGNKHOEJJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1589A3E0)
#define AOAGNKHOEJJ_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x15899C10)
#define AOAGNKHOEJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1589A4D0)
#define AOAGNKHOEJJ_ELKJMAHMMPG_OFFSET UNITYSDK_OFFSET(0x15899C60)
#define AOAGNKHOEJJ_FJEEHFBCCLH_OFFSET UNITYSDK_OFFSET(0x1589A200)
#define AOAGNKHOEJJ_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0x15899BC0)
#define AOAGNKHOEJJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1589A130)
#define AOAGNKHOEJJ_KABMIIPEOBB_OFFSET UNITYSDK_OFFSET(0x1589A0F0)
#define AOAGNKHOEJJ_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x1589A140)
#define AOAGNKHOEJJ_LCFNCHEHDNC_OFFSET UNITYSDK_OFFSET(0x15899DC0)
#define AOAGNKHOEJJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15899B20)
#define AOAGNKHOEJJ_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0x1589A010)
#define AOAGNKHOEJJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x15899B80)

inline static constexpr unsigned int AOAGNKHOEJJ_TypeDefinitionIndex = 71418;

	class AOAGNKHOEJJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* JIOMPAPFCMJ; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::Action* LKMLFIPPEML; // 0x70
		::System::Boolean EINNACFPAEN; // 0x78
		::System::Byte _padding0[0x3];
		::System::Int32 _Priority_k__BackingField; // 0x7C
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAGNKHOEJJ_NIJJPBOIGBI_OFFSET))(this);
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
