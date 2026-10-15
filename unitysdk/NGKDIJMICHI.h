#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FCGJHLGIMDP;
class PKIGJIJEJEG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }

#define NGKDIJMICHI_AIMEPPELHEF_OFFSET UNITYSDK_OFFSET(0xBBA52A0)
#define NGKDIJMICHI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBA5570)
#define NGKDIJMICHI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBBA5750)
#define NGKDIJMICHI_BGAFGIPAKBA_OFFSET UNITYSDK_OFFSET(0xBBA53F0)
#define NGKDIJMICHI_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xBBA4D70)
#define NGKDIJMICHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA5900)
#define NGKDIJMICHI_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xBBA5360)
#define NGKDIJMICHI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBBA4A70)
#define NGKDIJMICHI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBBA4B50)
#define NGKDIJMICHI_FLIACHBMIKB_OFFSET UNITYSDK_OFFSET(0xBBA5080)
#define NGKDIJMICHI_GCCGAALEGBE_OFFSET UNITYSDK_OFFSET(0xBBA5130)
#define NGKDIJMICHI_IMNJNCPGIEE_OFFSET UNITYSDK_OFFSET(0xBBA54B0)
#define NGKDIJMICHI_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xBBA4BE0)
#define NGKDIJMICHI_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xBBA4FC0)
#define NGKDIJMICHI_MEFEHCGLDLJ_OFFSET UNITYSDK_OFFSET(0xBBA4EA0)
#define NGKDIJMICHI_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xBBA4E40)
#define NGKDIJMICHI_PJEKHBCLOBC_OFFSET UNITYSDK_OFFSET(0xBBA51E0)
#define NGKDIJMICHI__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBA4AF0)

inline static constexpr unsigned int NGKDIJMICHI_TypeDefinitionIndex = 71587;

	class NGKDIJMICHI : public ::FMPCODLIOLG
	{
	public:
		::FCGJHLGIMDP* FNMOMDBINFF; // 0x60
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x68
		::PKIGJIJEJEG* KPALHBEOCAI; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NGKDIJMICHI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKDIJMICHI_EKGCGIDIFJJ_OFFSET))(this);
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
