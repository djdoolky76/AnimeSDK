#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CKMNJCKACJB;
class FBEONBAOLAA;
class HOJPODMLIGP;
class JPKECMHCCFH;
class KOAOAKKCCPK;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define IKJEBAMCKGB_BDLPFMMILJK_OFFSET UNITYSDK_OFFSET(0x1807FA40)
#define IKJEBAMCKGB_BHMALFHBGBD_OFFSET UNITYSDK_OFFSET(0x18080200)
#define IKJEBAMCKGB_CEMLFKJFMPC_OFFSET UNITYSDK_OFFSET(0x1807F8E0)
#define IKJEBAMCKGB_CLACADDAFMH_OFFSET UNITYSDK_OFFSET(0x1807F990)
#define IKJEBAMCKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x18080420)
#define IKJEBAMCKGB_DHLIAOJAKDO_OFFSET UNITYSDK_OFFSET(0x180803E0)
#define IKJEBAMCKGB_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1807F680)
#define IKJEBAMCKGB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1807F4B0)
#define IKJEBAMCKGB_ENPCMALIEIE_OFFSET UNITYSDK_OFFSET(0x1807FFE0)
#define IKJEBAMCKGB_FDKGLAHIOLB_OFFSET UNITYSDK_OFFSET(0x1807FC90)
#define IKJEBAMCKGB_FEOKEDMEGDH_OFFSET UNITYSDK_OFFSET(0x1807FBD0)
#define IKJEBAMCKGB_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0x1807FD40)
#define IKJEBAMCKGB_IGKDFAGCKOD_OFFSET UNITYSDK_OFFSET(0x18080270)
#define IKJEBAMCKGB_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0x1807F840)
#define IKJEBAMCKGB_JJACKGPNLEI_OFFSET UNITYSDK_OFFSET(0x1807FB70)
#define IKJEBAMCKGB_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1807F760)
#define IKJEBAMCKGB_LELILHEOLDP_OFFSET UNITYSDK_OFFSET(0x18080160)
#define IKJEBAMCKGB_MNENGFILHMO_OFFSET UNITYSDK_OFFSET(0x18080110)
#define IKJEBAMCKGB_NEOBLFDMJFN_OFFSET UNITYSDK_OFFSET(0x1807FA80)
#define IKJEBAMCKGB_PMCLCDGCNAM_OFFSET UNITYSDK_OFFSET(0x1807F930)
#define IKJEBAMCKGB_POPBDCGFCPE_OFFSET UNITYSDK_OFFSET(0x1807FE10)
#define IKJEBAMCKGB__HIDE_B__12_0_OFFSET UNITYSDK_OFFSET(0x180805A0)
#define IKJEBAMCKGB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1807F200)
#define IKJEBAMCKGB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1807F620)
#define IKJEBAMCKGB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1807F3C0)
#define IKJEBAMCKGB__ONTICK_OFFSET UNITYSDK_OFFSET(0x1807FC30)
#define IKJEBAMCKGB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1807F590)
#define IKJEBAMCKGB__SHOW_B__11_0_OFFSET UNITYSDK_OFFSET(0x18080560)
#define IKJEBAMCKGB___SETUPVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x180804A0)

inline static constexpr unsigned int IKJEBAMCKGB_TypeDefinitionIndex = 74189;

	class IKJEBAMCKGB : public ::FMPCODLIOLG
	{
	public:
		::HOJPODMLIGP* CNEEFOMPGBC; // 0x60
		::RPG::Client::AnimatorButton* NIDPJAFEHNM; // 0x68
		::FBEONBAOLAA* MPPGCAECEFO; // 0x70
		::JPKECMHCCFH* BMOCBDAAAAG; // 0x78
		::UnityEngine::Animation* PMOJILOJEPE; // 0x80
		::System::Collections::Generic::Queue_1<::CKMNJCKACJB*>* AJLOGPEKGHK; // 0x88
		::System::Action* IDDFLLPLNDG; // 0x90
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x98
		::System::Boolean HAECKDHIFMM; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Single LLDJDOPCDFM; // 0xA4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object COLGIBCKANG; // 0x0
		// static const ::System::String* PPKMJCFGHOH; // 0x0
		// static const ::System::String* JJJIFEPDDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_KGJAMKFPOAB_OFFSET))(this);
		}

		::UnityEngine::GameObject* IGNKKEBEGPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_IGNKKEBEGPJ_OFFSET))(this);
		}

		::System::Void CEMLFKJFMPC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CEMLFKJFMPC_OFFSET))(this, a1);
		}

		::System::Boolean PMCLCDGCNAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_PMCLCDGCNAM_OFFSET))(this);
		}

		::System::Boolean BDLPFMMILJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_BDLPFMMILJK_OFFSET))(this);
		}

		::System::Void NEOBLFDMJFN(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_NEOBLFDMJFN_OFFSET))(this, a1);
		}

		::System::Void JJACKGPNLEI(::RPG::GameCore::NihiluxElationUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NihiluxElationUIType))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_JJACKGPNLEI_OFFSET))(this, a1);
		}

		::System::Void FEOKEDMEGDH(::RPG::GameCore::ElationPointUIType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationPointUIType))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_FEOKEDMEGDH_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void POPBDCGFCPE(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_POPBDCGFCPE_OFFSET))(this, a1);
		}

		::System::Void BHMALFHBGBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_BHMALFHBGBD_OFFSET))(this);
		}

		::System::Void IGKDFAGCKOD(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_IGKDFAGCKOD_OFFSET))(this, a1);
		}

		::System::Void MNENGFILHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_MNENGFILHMO_OFFSET))(this);
		}

		::System::Void DHLIAOJAKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_DHLIAOJAKDO_OFFSET))(this);
		}

		::System::Void ENPCMALIEIE(::CKMNJCKACJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKMNJCKACJB*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_ENPCMALIEIE_OFFSET))(this, a1);
		}

		::System::Void FDKGLAHIOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_FDKGLAHIOLB_OFFSET))(this);
		}

		::System::Void LELILHEOLDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_LELILHEOLDP_OFFSET))(this);
		}

		::System::Void CLACADDAFMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB_CLACADDAFMH_OFFSET))(this, a1);
		}

		::System::Void __SetupView_b__9_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IKJEBAMCKGB___SETUPVIEW_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _Show_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__SHOW_B__11_0_OFFSET))(this);
		}

		::System::Void _Hide_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJEBAMCKGB__HIDE_B__12_0_OFFSET))(this);
		}

	};
