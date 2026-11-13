#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define DBBFCIGNGNO_AAJIIHIOEKN_OFFSET UNITYSDK_OFFSET(0x1B13DCD0)
#define DBBFCIGNGNO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B13E150)
#define DBBFCIGNGNO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B13E240)
#define DBBFCIGNGNO_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x1B13DA90)
#define DBBFCIGNGNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B13E310)
#define DBBFCIGNGNO_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x1B13E0C0)
#define DBBFCIGNGNO_IGDBGDMKKEE_OFFSET UNITYSDK_OFFSET(0x1B13DB80)
#define DBBFCIGNGNO_LCIKDIBHIBJ_OFFSET UNITYSDK_OFFSET(0x1B13DFF0)
#define DBBFCIGNGNO_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x1B13DEA0)
#define DBBFCIGNGNO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B13DD30)
#define DBBFCIGNGNO__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B13D980)
#define DBBFCIGNGNO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B13DAE0)

inline static constexpr unsigned int DBBFCIGNGNO_TypeDefinitionIndex = 73781;

	class DBBFCIGNGNO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		::UnityEngine::Transform* PCIMCDPONMO; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO__ONBIND_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DBBFCIGNGNO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void IGDBGDMKKEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_IGDBGDMKKEE_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO__INITVARONCE_OFFSET))(this);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void AAJIIHIOEKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_AAJIIHIOEKN_OFFSET))(this, a1);
		}

		::System::Void LCIKDIBHIBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_LCIKDIBHIBJ_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
