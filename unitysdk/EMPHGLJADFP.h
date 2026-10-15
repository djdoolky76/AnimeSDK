#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace System { class String; }

#define EMPHGLJADFP_CTOR_OFFSET UNITYSDK_OFFSET(0x155A3C20)
#define EMPHGLJADFP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x155A3210)
#define EMPHGLJADFP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x155A3290)
#define EMPHGLJADFP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x155A3370)
#define EMPHGLJADFP_GEMNLGBLKKH_OFFSET UNITYSDK_OFFSET(0x155A38D0)
#define EMPHGLJADFP_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x155A35D0)
#define EMPHGLJADFP_IJMFPCLJGHO_OFFSET UNITYSDK_OFFSET(0x155A3630)
#define EMPHGLJADFP_IKHNDEDEPKD_OFFSET UNITYSDK_OFFSET(0x155A3740)
#define EMPHGLJADFP_KDCJNKBLNMM_OFFSET UNITYSDK_OFFSET(0x155A3980)
#define EMPHGLJADFP_LCFNCHEHDNC_OFFSET UNITYSDK_OFFSET(0x155A3480)
#define EMPHGLJADFP_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x155A39F0)
#define EMPHGLJADFP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x155A3520)
#define EMPHGLJADFP_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x155A33C0)
#define EMPHGLJADFP__ONBIND_OFFSET UNITYSDK_OFFSET(0x155A3170)

inline static constexpr unsigned int EMPHGLJADFP_TypeDefinitionIndex = 71420;

	class EMPHGLJADFP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* PIBMGGHHAKN; // 0x60
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x68
		::RPG::Client::UIStateCtrl* CDDEAIAHNIH; // 0x70
		::RPG::GameCore::StageInvasionMonsterUIData IGDNDNICIND; // 0x78
		::System::Boolean EINNACFPAEN; // 0x98
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		// static const ::System::String* NFDGOBHEBMI; // 0x0
		// static const ::System::String* INICEFGJCNA; // 0x0
		// static const ::System::Object EHGIBNPEHJJ; // 0x0
		// static const ::System::Object IBKAMEEDPKI; // 0x0
		// static const ::System::String* PECBECKJLJA; // 0x0
		// static const ::System::String* PNKIHIGMFON; // 0x0
		// static const ::System::String* BPGJMMEFHEH; // 0x0
		// static const ::System::String* HEACELFKFJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EMPHGLJADFP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LCFNCHEHDNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMPHGLJADFP_LCFNCHEHDNC_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + EMPHGLJADFP_NKPPGDENJAE_OFFSET))(this, a1);
		}

		static ::System::String* IAMCNOAAALI(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EMPHGLJADFP_IAMCNOAAALI_OFFSET))(a1);
		}

		::System::Void PACBDGILPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP_PACBDGILPHI_OFFSET))(this);
		}

		::System::Void IJMFPCLJGHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP_IJMFPCLJGHO_OFFSET))(this);
		}

		::System::Void IKHNDEDEPKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPHGLJADFP_IKHNDEDEPKD_OFFSET))(this);
		}

		::System::String* GEMNLGBLKKH(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMPHGLJADFP_GEMNLGBLKKH_OFFSET))(this, a1);
		}

		::System::String* KDCJNKBLNMM(::RPG::GameCore::StageInvasionMonsterState a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterState))((::PBYTE)hIl2Cpp + EMPHGLJADFP_KDCJNKBLNMM_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMPHGLJADFP_NEOFNEBLKKL_OFFSET))(this, a1);
		}

	};
