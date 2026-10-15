#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FFHFKMBCACN;
class KCMGAIFFBPL;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarBaseClickConfig; }
namespace System { class Object; }

#define MKAMENDMKIM_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0xB982060)
#define MKAMENDMKIM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9823E0)
#define MKAMENDMKIM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB9824B0)
#define MKAMENDMKIM_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0xB982320)
#define MKAMENDMKIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB982550)
#define MKAMENDMKIM_DBINAKJAFNB_OFFSET UNITYSDK_OFFSET(0xB981FF0)
#define MKAMENDMKIM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB981BB0)
#define MKAMENDMKIM_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB981C20)
#define MKAMENDMKIM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB981D00)
#define MKAMENDMKIM_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xB9820D0)
#define MKAMENDMKIM_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0xB981D50)
#define MKAMENDMKIM_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0xB982190)
#define MKAMENDMKIM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB981EC0)
#define MKAMENDMKIM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB981F60)
#define MKAMENDMKIM__ONBIND_OFFSET UNITYSDK_OFFSET(0xB981A60)

inline static constexpr unsigned int MKAMENDMKIM_TypeDefinitionIndex = 71505;

	class MKAMENDMKIM : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::FFHFKMBCACN* BEHLFAEJFEH; // 0x70
		::RPG::GameCore::MonsterEnergyBarBaseClickConfig* KECOCEHEBKM; // 0x78
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MKAMENDMKIM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKAMENDMKIM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_ONRETURN_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_MIIHAJHPKAF_OFFSET))(this);
		}

		::KCMGAIFFBPL* AHMLHFNPFGJ()
		{
			return ((::KCMGAIFFBPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + MKAMENDMKIM_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKAMENDMKIM_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void DBINAKJAFNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_DBINAKJAFNB_OFFSET))(this);
		}

		::System::Void CKAKLDIKNDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKAMENDMKIM_CKAKLDIKNDH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
