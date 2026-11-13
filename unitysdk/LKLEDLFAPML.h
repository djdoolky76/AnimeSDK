#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CKMNJCKACJB;
class IKJEBAMCKGB;
class KOAOAKKCCPK;
class LCJPDOOLBEC;
class ODCOIGDOFGH;
class OEENEGJBMCO;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define LKLEDLFAPML_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18CF73C0)
#define LKLEDLFAPML_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18CF7560)
#define LKLEDLFAPML_BCIMCCIDABD_OFFSET UNITYSDK_OFFSET(0x18CF65B0)
#define LKLEDLFAPML_BDLPFMMILJK_OFFSET UNITYSDK_OFFSET(0x18CF6A80)
#define LKLEDLFAPML_BNCHHCGENKE_OFFSET UNITYSDK_OFFSET(0x18CF6EB0)
#define LKLEDLFAPML_BPEPILKMJHE_OFFSET UNITYSDK_OFFSET(0x18CF6820)
#define LKLEDLFAPML_CEMLFKJFMPC_OFFSET UNITYSDK_OFFSET(0x18CF6980)
#define LKLEDLFAPML_CJBHFMNJCEK_OFFSET UNITYSDK_OFFSET(0x18CF6F30)
#define LKLEDLFAPML_CTOR_OFFSET UNITYSDK_OFFSET(0x18CF76D0)
#define LKLEDLFAPML_DCJCMCCFKEB_OFFSET UNITYSDK_OFFSET(0x18CF7020)
#define LKLEDLFAPML_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x18CF6700)
#define LKLEDLFAPML_EMGHAJAHCOE_OFFSET UNITYSDK_OFFSET(0x18CF6C20)
#define LKLEDLFAPML_EMIMADJNMBK_OFFSET UNITYSDK_OFFSET(0x18CF6E30)
#define LKLEDLFAPML_FGMCBIMFDFD_OFFSET UNITYSDK_OFFSET(0x18CF6D00)
#define LKLEDLFAPML_GGKFMIOMFKN_OFFSET UNITYSDK_OFFSET(0x18CF6AF0)
#define LKLEDLFAPML_HAEPMJAFDEO_OFFSET UNITYSDK_OFFSET(0x18CF6920)
#define LKLEDLFAPML_HKOAPBJEOMA_OFFSET UNITYSDK_OFFSET(0x18CF7250)
#define LKLEDLFAPML_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x18CF6880)
#define LKLEDLFAPML_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x18CF67D0)
#define LKLEDLFAPML_LDOPOAIHGNF_OFFSET UNITYSDK_OFFSET(0x18CF6D80)
#define LKLEDLFAPML_MHALANFCNLI_OFFSET UNITYSDK_OFFSET(0x18CF70E0)
#define LKLEDLFAPML_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x18CF6750)
#define LKLEDLFAPML_PFKDDJCDBGB_OFFSET UNITYSDK_OFFSET(0x18CF6DE0)
#define LKLEDLFAPML_PMCLCDGCNAM_OFFSET UNITYSDK_OFFSET(0x18CF6A00)
#define LKLEDLFAPML__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18CF6390)
#define LKLEDLFAPML__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18CF6320)
#define LKLEDLFAPML__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18CF6560)

inline static constexpr unsigned int LKLEDLFAPML_TypeDefinitionIndex = 74192;

	class LKLEDLFAPML : public ::FMPCODLIOLG
	{
	public:
		::LCJPDOOLBEC* MIGLENPAECA; // 0x60
		::System::Action* IDDFLLPLNDG; // 0x68
		::IKJEBAMCKGB* GOGLDOBLLAI; // 0x70
		::OEENEGJBMCO* IPKDEJMHHJG; // 0x78
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x80
		::ODCOIGDOFGH* FIMHKHJMCIB; // 0x88
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x90
		::System::Boolean FMNEEONAMNO; // 0x98
		::System::Boolean PFIFHHNEHBB; // 0x99
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LKLEDLFAPML__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LKLEDLFAPML_NJBDJBHEBAN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* IGNKKEBEGPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_IGNKKEBEGPJ_OFFSET))(this);
		}

		::System::Void CEMLFKJFMPC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_CEMLFKJFMPC_OFFSET))(this, a1);
		}

		::System::Boolean PMCLCDGCNAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_PMCLCDGCNAM_OFFSET))(this);
		}

		::System::Boolean BDLPFMMILJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_BDLPFMMILJK_OFFSET))(this);
		}

		::System::Void BPEPILKMJHE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LKLEDLFAPML_BPEPILKMJHE_OFFSET))(this, a1, a2);
		}

		::System::Void BCIMCCIDABD(::System::Boolean a1, ::CKMNJCKACJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_BCIMCCIDABD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HAEPMJAFDEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_HAEPMJAFDEO_OFFSET))(this);
		}

		::System::Boolean EMGHAJAHCOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_EMGHAJAHCOE_OFFSET))(this);
		}

		::System::Void GGKFMIOMFKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_GGKFMIOMFKN_OFFSET))(this);
		}

		::System::Void LDOPOAIHGNF(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_LDOPOAIHGNF_OFFSET))(this, a1);
		}

		::System::Void PFKDDJCDBGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_PFKDDJCDBGB_OFFSET))(this);
		}

		::System::Void EMIMADJNMBK(::RPG::GameCore::ElationPointUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationPointUIType))((::PBYTE)hIl2Cpp + LKLEDLFAPML_EMIMADJNMBK_OFFSET))(this, a1);
		}

		::System::Void BNCHHCGENKE(::RPG::GameCore::NihiluxElationUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NihiluxElationUIType))((::PBYTE)hIl2Cpp + LKLEDLFAPML_BNCHHCGENKE_OFFSET))(this, a1);
		}

		::System::Int32 FGMCBIMFDFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_FGMCBIMFDFD_OFFSET))(this);
		}

		::System::Void CJBHFMNJCEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_CJBHFMNJCEK_OFFSET))(this, a1);
		}

		::System::Void DCJCMCCFKEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_DCJCMCCFKEB_OFFSET))(this, a1);
		}

		::System::Void MHALANFCNLI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_MHALANFCNLI_OFFSET))(this, a1);
		}

		::System::Void HKOAPBJEOMA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKLEDLFAPML_HKOAPBJEOMA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEDLFAPML_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
