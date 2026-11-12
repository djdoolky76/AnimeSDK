#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FCGJHLGIMDP;
class PKIGJIJEJEG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }

#define NGKDIJMICHI_AIMEPPELHEF_OFFSET UNITYSDK_OFFSET(0xC486D20)
#define NGKDIJMICHI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC486FF0)
#define NGKDIJMICHI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC4871D0)
#define NGKDIJMICHI_BGAFGIPAKBA_OFFSET UNITYSDK_OFFSET(0xC486E70)
#define NGKDIJMICHI_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xC4867F0)
#define NGKDIJMICHI_CTOR_OFFSET UNITYSDK_OFFSET(0xC487380)
#define NGKDIJMICHI_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xC486DE0)
#define NGKDIJMICHI_FLIACHBMIKB_OFFSET UNITYSDK_OFFSET(0xC486B00)
#define NGKDIJMICHI_GCCGAALEGBE_OFFSET UNITYSDK_OFFSET(0xC486BB0)
#define NGKDIJMICHI_IMNJNCPGIEE_OFFSET UNITYSDK_OFFSET(0xC486F30)
#define NGKDIJMICHI_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xC486660)
#define NGKDIJMICHI_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xC486A40)
#define NGKDIJMICHI_MEFEHCGLDLJ_OFFSET UNITYSDK_OFFSET(0xC486920)
#define NGKDIJMICHI_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC4868C0)
#define NGKDIJMICHI_PJEKHBCLOBC_OFFSET UNITYSDK_OFFSET(0xC486C60)
#define NGKDIJMICHI__ONBIND_OFFSET UNITYSDK_OFFSET(0xC486570)
#define NGKDIJMICHI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC4864F0)
#define NGKDIJMICHI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC4865D0)

inline static constexpr unsigned int NGKDIJMICHI_TypeDefinitionIndex = 73575;

	class NGKDIJMICHI : public ::FMPCODLIOLG
	{
	public:
		::PKIGJIJEJEG* KPALHBEOCAI; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::FCGJHLGIMDP* FNMOMDBINFF; // 0x70
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NGKDIJMICHI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_JNJKGKLBCNI_OFFSET))(this, a1);
		}

		::System::Void MEFEHCGLDLJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_MEFEHCGLDLJ_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void FLIACHBMIKB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_FLIACHBMIKB_OFFSET))(this, a1);
		}

		::System::Void GCCGAALEGBE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_GCCGAALEGBE_OFFSET))(this, a1);
		}

		::System::Void PJEKHBCLOBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_PJEKHBCLOBC_OFFSET))(this, a1);
		}

		::System::Void AIMEPPELHEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_AIMEPPELHEF_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void BGAFGIPAKBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_BGAFGIPAKBA_OFFSET))(this, a1);
		}

		::System::Void IMNJNCPGIEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGKDIJMICHI_IMNJNCPGIEE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
