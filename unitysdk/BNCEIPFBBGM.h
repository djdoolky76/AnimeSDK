#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class FLLAGHIOFMD;
class GEDMHFPPBHN;
class MADHNHEMBOJ;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class ShowAttackTimeParam; }
namespace System { class Object; }

#define BNCEIPFBBGM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBDC4120)
#define BNCEIPFBBGM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBDC41F0)
#define BNCEIPFBBGM_CEIJFOAEKEO_OFFSET UNITYSDK_OFFSET(0xBDC3CB0)
#define BNCEIPFBBGM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC4290)
#define BNCEIPFBBGM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBDC3A20)
#define BNCEIPFBBGM_FOBOKELDJCP_OFFSET UNITYSDK_OFFSET(0xBDC3F30)
#define BNCEIPFBBGM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBDC3BD0)
#define BNCEIPFBBGM_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xBDC3FB0)
#define BNCEIPFBBGM_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0xBDC4060)
#define BNCEIPFBBGM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBDC3A90)
#define BNCEIPFBBGM__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDC39C0)
#define BNCEIPFBBGM__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xBDC42C0)

inline static constexpr unsigned int BNCEIPFBBGM_TypeDefinitionIndex = 71230;

	class BNCEIPFBBGM : public ::FMPCODLIOLG
	{
	public:
		::FLLAGHIOFMD* NDGOOLJNBAG; // 0x60
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x68
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x70
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x78
		::System::Boolean JOABOKENFCJ; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void CEIJFOAEKEO(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_CEIJFOAEKEO_OFFSET))(this, a1);
		}

		::System::Void FOBOKELDJCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_FOBOKELDJCP_OFFSET))(this);
		}

		::System::Void KMIEEJEHMIC(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void NDHIDNBEECG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_NDHIDNBEECG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _SetupView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCEIPFBBGM__SETUPVIEW_B__4_0_OFFSET))(this);
		}

	};
