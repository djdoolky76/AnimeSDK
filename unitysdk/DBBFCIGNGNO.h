#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define DBBFCIGNGNO_AAJIIHIOEKN_OFFSET UNITYSDK_OFFSET(0xDFD6220)
#define DBBFCIGNGNO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDFD66A0)
#define DBBFCIGNGNO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDFD6790)
#define DBBFCIGNGNO_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xDFD5FE0)
#define DBBFCIGNGNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD6860)
#define DBBFCIGNGNO_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xDFD6610)
#define DBBFCIGNGNO_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xDFD6030)
#define DBBFCIGNGNO_IGDBGDMKKEE_OFFSET UNITYSDK_OFFSET(0xDFD60D0)
#define DBBFCIGNGNO_LCIKDIBHIBJ_OFFSET UNITYSDK_OFFSET(0xDFD6540)
#define DBBFCIGNGNO_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xDFD63F0)
#define DBBFCIGNGNO_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xDFD6280)
#define DBBFCIGNGNO__ONBIND_OFFSET UNITYSDK_OFFSET(0xDFD5F30)

inline static constexpr unsigned int DBBFCIGNGNO_TypeDefinitionIndex = 71774;

	class DBBFCIGNGNO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PCIMCDPONMO; // 0x60
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void IGDBGDMKKEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_IGDBGDMKKEE_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFCIGNGNO_NIJJPBOIGBI_OFFSET))(this);
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
