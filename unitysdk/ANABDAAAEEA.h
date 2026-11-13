#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANABDAAAEEA_DelayAnim.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ActionDelayIconState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class GEDMHFPPBHN;
class HHOBIBABNLM;
class MADHNHEMBOJ;
namespace RPG::Client { class UIParticleClippable; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define ANABDAAAEEA_AONFIDMIOFL_OFFSET UNITYSDK_OFFSET(0x1A81ADC0)
#define ANABDAAAEEA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A81C030)
#define ANABDAAAEEA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A81C210)
#define ANABDAAAEEA_BFECBFEKOFM_OFFSET UNITYSDK_OFFSET(0x1A81BC50)
#define ANABDAAAEEA_BGLHBIGIKMA_OFFSET UNITYSDK_OFFSET(0x1A81BAA0)
#define ANABDAAAEEA_BNFEMIPLKDA_OFFSET UNITYSDK_OFFSET(0x1A81A760)
#define ANABDAAAEEA_BOGHJPNAFOL_OFFSET UNITYSDK_OFFSET(0x1A81B010)
#define ANABDAAAEEA_CNBDJFOFALP_OFFSET UNITYSDK_OFFSET(0x1A81B190)
#define ANABDAAAEEA_CPHJLGLLPEI_OFFSET UNITYSDK_OFFSET(0x1A81B060)
#define ANABDAAAEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A81C3C0)
#define ANABDAAAEEA_DFCGIDKDLEM_OFFSET UNITYSDK_OFFSET(0x1A81AED0)
#define ANABDAAAEEA_DFLKHOPNBNA_OFFSET UNITYSDK_OFFSET(0x1A81BD10)
#define ANABDAAAEEA_DMCHDBKFOPN_OFFSET UNITYSDK_OFFSET(0x1A81BF40)
#define ANABDAAAEEA_EEPDCEKHALO_OFFSET UNITYSDK_OFFSET(0x1A81A7B0)
#define ANABDAAAEEA_GACLKMKDJPE_OFFSET UNITYSDK_OFFSET(0x1A81B4E0)
#define ANABDAAAEEA_GBODMCICNJP_OFFSET UNITYSDK_OFFSET(0x1A81AFC0)
#define ANABDAAAEEA_GEIBEGEDAOA_OFFSET UNITYSDK_OFFSET(0x1A81B240)
#define ANABDAAAEEA_HBOCGPDPBBP_OFFSET UNITYSDK_OFFSET(0x1A81A4A0)
#define ANABDAAAEEA_HHLPHBIPNFK_OFFSET UNITYSDK_OFFSET(0x1A81B3C0)
#define ANABDAAAEEA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1A81A5C0)
#define ANABDAAAEEA_KFDEHLLENMO_OFFSET UNITYSDK_OFFSET(0x1A81A920)
#define ANABDAAAEEA_KGOJAOHOLMN_OFFSET UNITYSDK_OFFSET(0x1A81B9B0)
#define ANABDAAAEEA_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x1A81B350)
#define ANABDAAAEEA_LHBEDPLIPPL_OFFSET UNITYSDK_OFFSET(0x1A81ABD0)
#define ANABDAAAEEA_NFDGCEEONAB_OFFSET UNITYSDK_OFFSET(0x1A81AF20)
#define ANABDAAAEEA_NGIPMANBOHH_OFFSET UNITYSDK_OFFSET(0x1A81BB90)
#define ANABDAAAEEA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A81A570)
#define ANABDAAAEEA_OFGHMHDKPKO_OFFSET UNITYSDK_OFFSET(0x1A81ACA0)
#define ANABDAAAEEA_PEBGLOOEIIE_OFFSET UNITYSDK_OFFSET(0x1A81B2D0)
#define ANABDAAAEEA_PMBIKNDECFA_OFFSET UNITYSDK_OFFSET(0x1A81BE40)
#define ANABDAAAEEA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A81A2D0)
#define ANABDAAAEEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A819E40)
#define ANABDAAAEEA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A81A520)
#define ANABDAAAEEA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A81A220)
#define ANABDAAAEEA__ONTICK_OFFSET UNITYSDK_OFFSET(0x1A81A3D0)
#define ANABDAAAEEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A81A340)

inline static constexpr unsigned int ANABDAAAEEA_TypeDefinitionIndex = 73228;

	class ANABDAAAEEA : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIParticleClippable* NMJBEDJGAOH; // 0x60
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x68
		::UnityEngine::UI::Text* CEMNJHBGGFJ; // 0x70
		::UnityEngine::UI::Image* LEFBNCHKJIG; // 0x78
		::UnityEngine::UI::Text* OLHGGKPJGAD; // 0x80
		::RPG::Client::UIStateCtrl* ALFILLMEMIO; // 0x88
		::System::Action_1<::System::Boolean>* DHHAGDEHPCM; // 0x90
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x98
		::UnityEngine::Animation* LLLKMDHEDDL; // 0xA0
		::UnityEngine::Animation* EGLLKGDOIEP; // 0xA8
		::UnityEngine::Transform* FCDDMEAANPH; // 0xB0
		::RPG::GameCore::FixPoint GLBFMLFDCGE; // 0xB8
		::System::Boolean CHCCGHIOOOM; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single KNAJADOIEID; // 0xC4
		::System::Single BPELFOPIHFI; // 0xC8
		// static const ::System::String* EJEHGIDLMGI; // 0x0
		// static const ::System::String* MCFDCDONAPN; // 0x0
		// static const ::System::String* AMDJPCNPHMF; // 0x0
		// static const ::System::String* PBIJBPACNNH; // 0x0
		// static const ::System::String* ACLPHFEKHIE; // 0x0
		// static const ::System::String* LGFILHFIILB; // 0x0
		// static const ::System::String* MANCONBHJNG; // 0x0
		// static const ::System::String* FGIIBEBELIL; // 0x0
		// static const ::System::String* OINBFHICKOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ANABDAAAEEA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANABDAAAEEA__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void BNFEMIPLKDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_BNFEMIPLKDA_OFFSET))(this);
		}

		::System::Void LHBEDPLIPPL(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_LHBEDPLIPPL_OFFSET))(this, a1);
		}

		::System::Void DFCGIDKDLEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_DFCGIDKDLEM_OFFSET))(this);
		}

		::System::Void GBODMCICNJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_GBODMCICNJP_OFFSET))(this);
		}

		::System::Void BOGHJPNAFOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANABDAAAEEA_BOGHJPNAFOL_OFFSET))(this, a1);
		}

		::System::Void CNBDJFOFALP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANABDAAAEEA_CNBDJFOFALP_OFFSET))(this, a1);
		}

		::System::Void GEIBEGEDAOA(::HHOBIBABNLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHOBIBABNLM*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_GEIBEGEDAOA_OFFSET))(this, a1);
		}

		::System::Void KFDEHLLENMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_KFDEHLLENMO_OFFSET))(this);
		}

		static ::System::String* PEBGLOOEIIE(::RPG::GameCore::ActionDelayIconState a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::ActionDelayIconState))((::PBYTE)hIl2Cpp + ANABDAAAEEA_PEBGLOOEIIE_OFFSET))(a1);
		}

		::System::Void KANMCJHEFJJ(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void HBOCGPDPBBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_HBOCGPDPBBP_OFFSET))(this);
		}

		::System::Void NFDGCEEONAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_NFDGCEEONAB_OFFSET))(this);
		}

		::System::Void CPHJLGLLPEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANABDAAAEEA_CPHJLGLLPEI_OFFSET))(this, a1);
		}

		::System::Void EEPDCEKHALO(::ANABDAAAEEA_DelayAnim a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANABDAAAEEA_DelayAnim))((::PBYTE)hIl2Cpp + ANABDAAAEEA_EEPDCEKHALO_OFFSET))(this, a1);
		}

		::System::Void OFGHMHDKPKO(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_OFGHMHDKPKO_OFFSET))(this, a1);
		}

		::System::Void AONFIDMIOFL(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_AONFIDMIOFL_OFFSET))(this, a1);
		}

		::System::Void HHLPHBIPNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_HHLPHBIPNFK_OFFSET))(this);
		}

		::System::Void GACLKMKDJPE(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_GACLKMKDJPE_OFFSET))(this, a1);
		}

		::System::Void KGOJAOHOLMN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ANABDAAAEEA_KGOJAOHOLMN_OFFSET))(this, a1);
		}

		::System::Void BGLHBIGIKMA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ANABDAAAEEA_BGLHBIGIKMA_OFFSET))(this, a1);
		}

		::System::Void NGIPMANBOHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_NGIPMANBOHH_OFFSET))(this, a1);
		}

		::System::Void BFECBFEKOFM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_BFECBFEKOFM_OFFSET))(this, a1);
		}

		::System::Void DFLKHOPNBNA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_DFLKHOPNBNA_OFFSET))(this, a1);
		}

		::System::Void PMBIKNDECFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_PMBIKNDECFA_OFFSET))(this, a1);
		}

		::System::Void DMCHDBKFOPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANABDAAAEEA_DMCHDBKFOPN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANABDAAAEEA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
