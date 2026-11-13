#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FFHFKMBCACN;
class KCMGAIFFBPL;
class KLJLODIBPDF;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MKAMENDMKIM_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x1A3C1600)
#define MKAMENDMKIM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3C1920)
#define MKAMENDMKIM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3C19F0)
#define MKAMENDMKIM_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0x1A3C1860)
#define MKAMENDMKIM_CNOFDFELGKJ_OFFSET UNITYSDK_OFFSET(0x1A3C1740)
#define MKAMENDMKIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3C1A90)
#define MKAMENDMKIM_DBINAKJAFNB_OFFSET UNITYSDK_OFFSET(0x1A3C1590)
#define MKAMENDMKIM_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1A3C11C0)
#define MKAMENDMKIM_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x1A3C1670)
#define MKAMENDMKIM_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x1A3C12F0)
#define MKAMENDMKIM_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x1A3C1800)
#define MKAMENDMKIM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1A3C1460)
#define MKAMENDMKIM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A3C1500)
#define MKAMENDMKIM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A3C0EB0)
#define MKAMENDMKIM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A3C1140)
#define MKAMENDMKIM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A3C12A0)

inline static constexpr unsigned int MKAMENDMKIM_TypeDefinitionIndex = 73489;

	class MKAMENDMKIM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* HFNHNKHJGAC; // 0x60
		::FFHFKMBCACN* BEHLFAEJFEH; // 0x68
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x70
		::KLJLODIBPDF* EAGJDPFNCPF; // 0x78
		::UnityEngine::Transform* BCBPKMLGMEC; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::IGKFNIEJGLM PMECLILMEDH; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MKAMENDMKIM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMENDMKIM__SETUPVIEW_OFFSET))(this);
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

		::System::Void CNOFDFELGKJ(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + MKAMENDMKIM_CNOFDFELGKJ_OFFSET))(this, a1);
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
