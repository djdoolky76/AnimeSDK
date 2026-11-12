#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define JKHIJPDPODG_AAJIIHIOEKN_OFFSET UNITYSDK_OFFSET(0xBA44A70)
#define JKHIJPDPODG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA44DD0)
#define JKHIJPDPODG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBA44EC0)
#define JKHIJPDPODG_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xBA446A0)
#define JKHIJPDPODG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA44F90)
#define JKHIJPDPODG_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xBA44D40)
#define JKHIJPDPODG_HPDGNMKIODD_OFFSET UNITYSDK_OFFSET(0xBA44BB0)
#define JKHIJPDPODG_LCIKDIBHIBJ_OFFSET UNITYSDK_OFFSET(0xBA44AE0)
#define JKHIJPDPODG_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xBA44900)
#define JKHIJPDPODG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBA44790)
#define JKHIJPDPODG__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA444F0)
#define JKHIJPDPODG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBA446F0)

inline static constexpr unsigned int JKHIJPDPODG_TypeDefinitionIndex = 73779;

	class JKHIJPDPODG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::String* BDACPPLKLGL; // 0x70
		::UnityEngine::Transform* DINDNKBMAEK; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::UnityEngine::Transform* FOAIJMNFJFP; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIJPDPODG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIJPDPODG__ONBIND_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JKHIJPDPODG_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JKHIJPDPODG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIJPDPODG__INITVARONCE_OFFSET))(this);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIJPDPODG_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void HPDGNMKIODD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKHIJPDPODG_HPDGNMKIODD_OFFSET))(this, a1);
		}

		::System::Void AAJIIHIOEKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKHIJPDPODG_AAJIIHIOEKN_OFFSET))(this, a1);
		}

		::System::Void LCIKDIBHIBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKHIJPDPODG_LCIKDIBHIBJ_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKHIJPDPODG_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIJPDPODG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHIJPDPODG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
