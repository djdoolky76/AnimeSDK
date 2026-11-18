#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NapGradient;
namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class BattleOutlineRenderer; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_OVERLAYOUTLINERENDERER_AJDDLCHEOBM_OFFSET UNITYSDK_OFFSET(0x13F0E580)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_CDCEIJFMJJM_OFFSET UNITYSDK_OFFSET(0x13F09DA0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_CDPFAMNKHLD_OFFSET UNITYSDK_OFFSET(0x13F0C270)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_CLEAROUTLINESUPPRESSION_OFFSET UNITYSDK_OFFSET(0x13F0AFC0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_DISABLEEFFECTACTION_OFFSET UNITYSDK_OFFSET(0x13F0DDC0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ENABLEEFFECTACTION_OFFSET UNITYSDK_OFFSET(0x13F0DB60)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x13F0B510)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_FORCEHIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0x13F0AE30)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_GCIJBIIHKME_OFFSET UNITYSDK_OFFSET(0x13F0A880)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_GFKIFIOKDJP_OFFSET UNITYSDK_OFFSET(0x13F0E9F0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_GONDIDPANAC_OFFSET UNITYSDK_OFFSET(0x13F0DE10)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_IHDIOJEDEPG_OFFSET UNITYSDK_OFFSET(0x13F0E1E0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_IHDKBHJNPPJ_OFFSET UNITYSDK_OFFSET(0x13F0B980)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x13F0C910)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13F0C830)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_LBHNOFAOCKE_OFFSET UNITYSDK_OFFSET(0x13F0C9A0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_LELPCPOGICN_OFFSET UNITYSDK_OFFSET(0x13F096C0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_LFPKGLHFABH_OFFSET UNITYSDK_OFFSET(0x13F0BC30)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_LNJPFLHOJPF_OFFSET UNITYSDK_OFFSET(0x13F0AAB0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_OFDHCCBBOPD_OFFSET UNITYSDK_OFFSET(0x13F0A660)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13F09560)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13F09C40)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13F09FB0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_PAPNJJAMPNJ_OFFSET UNITYSDK_OFFSET(0x13F0DBF0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x13F0BD00)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTHPEROBJECT_OFFSET UNITYSDK_OFFSET(0x13F0B190)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTH_OFFSET UNITYSDK_OFFSET(0x13F0B010)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_SETOUTLINEPEROBJECT_OFFSET UNITYSDK_OFFSET(0x13F0B350)
#define MOLEMOLE_OVERLAYOUTLINERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F0E120)
#define MOLEMOLE_OVERLAYOUTLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0DFD0)

namespace MoleMole
{
	inline static constexpr unsigned int OverlayOutlineRenderer_TypeDefinitionIndex = 55277;

	class OverlayOutlineRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_NLGNAGOFHND()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OverlayOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0x4AA70);
		}
		::MoleMole::Config::OverlayOutlineConfig* config; // 0x18
		::System::Boolean useOutline; // 0x20
		::System::Boolean useOverlay; // 0x21
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AEPONOJONAA; // 0x28
		::UnityEngine::Material* LPMKCIHIKOM; // 0x30
		::MoleMole::Config::OverlayOutlineConfig* HGBPGMMOHOE; // 0x38
		::UnityEngine::Material* EBIDGDBLDPI; // 0x40
		::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* GAEIPOICOLD; // 0x48
		::UnityEngine::Rendering::Universal::Internal::BattleOutlineRenderer* PFKPBDBEHKK; // 0x50
		::System::Boolean ICBENNLEJMG; // 0x58
		::System::Byte _padding1[0x3];
		::System::Single MNBFNJJNLOC; // 0x5C
		::System::Single LFDNEOICLOA; // 0x60
		::System::Boolean OKFEHHMDMDH; // 0x64
		::System::Byte _padding2[0x3];
		::System::Single GBMHMHGCHEI; // 0x68
		::System::Single LPFIAPJNPIJ; // 0x6C
		::System::Single BKHOMGFBALA; // 0x70
		::System::Single MKACMBFACKK; // 0x74
		::System::Boolean EOPKGAEDCEG; // 0x78
		::System::Boolean FOBHALIGGIK; // 0x79
		::System::Boolean PJEAEFKDDGF; // 0x7A
		::System::Byte _padding3[0x1];
		::System::Single PALKJEELJHL; // 0x7C
		::NapGradient* GBPAKPKBANL; // 0x80
		::NapGradient* GBLLPBDAFED; // 0x88
		::System::Single NMJENEBEBAB; // 0x90
		::System::Single MLKLCEKJGPE; // 0x94
		::System::Boolean HAFDIMGJBHC; // 0x98
		::System::Boolean FJOOJIPGGMG; // 0x99
		::System::Boolean DEAEKPBEHDM; // 0x9A
		::System::Byte _padding4[0x1];
		::System::Single BALJGFFCFBN; // 0x9C
		::System::Single AFEGOAOPEOG; // 0xA0
		::UnityEngine::Color EIHGHGPBKCH; // 0xA4
		::UnityEngine::Color DODMILFIAMH; // 0xB4
		::System::Byte _padding5[0x4];
		::NapGradient* AEPNENHFGEI; // 0xC8
		::NapGradient* KBBLBPKHGJH; // 0xD0
		::System::Single BHBLAGENDPB; // 0xD8
		::System::Boolean PIKPELJKJCJ; // 0xDC
		::System::Byte _padding6[0x3];
		::System::Int32 DMCFIJLECBJ; // 0xE0
		::System::Int32 DOOEKJDNCHF; // 0xE4
		::UnityEngine::Color JABCFEKMEIL; // 0xE8
		::UnityEngine::Color JBFJLBNFPGJ; // 0xF8
		::UnityEngine::Color JFEKNOKKCGC; // 0x108
		::System::Boolean PBDMPNGCOJJ; // 0x118
		::System::Byte _padding7[0x3];
		::System::Single PFIKJGABNFB; // 0x11C
		::System::Single IOCPDEKHPME; // 0x120
		::System::Single HGFOBDPGCPG; // 0x124
		::System::Boolean OKOJEFFDKGF; // 0x128
		::System::Boolean IPJCGCNEDEK; // 0x129

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER__CCTOR_OFFSET))();
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ONUPDATE_OFFSET))(this);
		}

		::System::Void ForceHideOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_FORCEHIDEOUTLINE_OFFSET))(this);
		}

		::System::Void ClearOutlineSuppression()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_CLEAROUTLINESUPPRESSION_OFFSET))(this);
		}

		::System::Void SetOccludedByDepth(::System::Boolean PBMGFKEGNBD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTH_OFFSET))(this, PBMGFKEGNBD);
		}

		::System::Void SetOccludedByDepthPerObject(::System::Boolean PBMGFKEGNBD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTHPEROBJECT_OFFSET))(this, PBMGFKEGNBD);
		}

		::System::Void SetOutlinePerObject(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_SETOUTLINEPEROBJECT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_FADEOUT_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::String* BAENNHHMHNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_PLAYANIM_OFFSET))(this, BAENNHHMHNC);
		}

		::System::Void Initialize(::System::String* KDPCIAPDOLK, ::System::Boolean HJONLICJCJI, ::System::Boolean FIOEIEDAPKK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_OFFSET))(this, KDPCIAPDOLK, HJONLICJCJI, FIOEIEDAPKK);
		}

		::System::Void Initialize_1(::MoleMole::Config::OverlayOutlineConfig* DFMKILICPFB, ::System::Boolean HJONLICJCJI, ::System::Boolean FIOEIEDAPKK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OverlayOutlineConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_1_OFFSET))(this, DFMKILICPFB, HJONLICJCJI, FIOEIEDAPKK);
		}

		::System::Void EnableEffectAction(::System::String* AENNJEILGAE, ::System::String* BAENNHHMHNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ENABLEEFFECTACTION_OFFSET))(this, AENNJEILGAE, BAENNHHMHNC);
		}

		::System::Void DisableEffectAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_DISABLEEFFECTACTION_OFFSET))(this);
		}

		::System::Void LELPCPOGICN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_LELPCPOGICN_OFFSET))(this);
		}

		::System::Void CDCEIJFMJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_CDCEIJFMJJM_OFFSET))(this);
		}

		::System::Void LBHNOFAOCKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_LBHNOFAOCKE_OFFSET))(this);
		}

		::System::Void GFKIFIOKDJP(::System::Single MBJDMKCGOCK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_GFKIFIOKDJP_OFFSET))(this, MBJDMKCGOCK);
		}

		::System::Void LFPKGLHFABH(::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_LFPKGLHFABH_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
		}

		::System::Void OFDHCCBBOPD(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_OFDHCCBBOPD_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void PAPNJJAMPNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_PAPNJJAMPNJ_OFFSET))(this);
		}

		static ::System::Void IHDIOJEDEPG(::MoleMole::Config::OverlayOutlineConfig* HIGOEJBKBBB)
		{
			return ((::System::Void(*)(::MoleMole::Config::OverlayOutlineConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_IHDIOJEDEPG_OFFSET))(HIGOEJBKBBB);
		}

		::System::Boolean GCIJBIIHKME(::System::Single PBCAAADNEPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_GCIJBIIHKME_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void IHDKBHJNPPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_IHDKBHJNPPJ_OFFSET))(this);
		}

		::System::Void LNJPFLHOJPF(::UnityEngine::Color PCIIEJIBBKF, ::UnityEngine::Color KJGGFINPHHF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_LNJPFLHOJPF_OFFSET))(this, PCIIEJIBBKF, KJGGFINPHHF);
		}

		static ::UnityEngine::Material* AJDDLCHEOBM(::MoleMole::Config::OverlayOutlineConfig* HIGOEJBKBBB)
		{
			return ((::UnityEngine::Material*(*)(::MoleMole::Config::OverlayOutlineConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_AJDDLCHEOBM_OFFSET))(HIGOEJBKBBB);
		}

		::System::Void GONDIDPANAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_GONDIDPANAC_OFFSET))(this);
		}

		static ::UnityEngine::Gradient* CDPFAMNKHLD(::NapGradient* OPHCDHJLDDN)
		{
			return ((::UnityEngine::Gradient*(*)(::NapGradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_CDPFAMNKHLD_OFFSET))(OPHCDHJLDDN);
		}
	};
}
