#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VNoiseParams.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define BPGHAAFFMIK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x128BD230)
#define BPGHAAFFMIK_GCFPBJHEHPH_OFFSET UNITYSDK_OFFSET(0x128BEDC0)
#define BPGHAAFFMIK_GFFHAMJEABP_OFFSET UNITYSDK_OFFSET(0x128BEFD0)
#define BPGHAAFFMIK_GMLECNNFLJA_OFFSET UNITYSDK_OFFSET(0x128BD300)
#define BPGHAAFFMIK_HNBJMPGNOPG_OFFSET UNITYSDK_OFFSET(0x128BE090)
#define BPGHAAFFMIK_KFAJIIKEKIB_OFFSET UNITYSDK_OFFSET(0x128BD290)
#define BPGHAAFFMIK_KOJPDKOMBPM_OFFSET UNITYSDK_OFFSET(0x128BD2A0)
#define BPGHAAFFMIK_LFBIICJLALJ_OFFSET UNITYSDK_OFFSET(0x128BDAA0)
#define BPGHAAFFMIK_LKMGBPBKLBB_OFFSET UNITYSDK_OFFSET(0x128BD270)
#define BPGHAAFFMIK_LMMEHFHCCKH_OFFSET UNITYSDK_OFFSET(0x128BEE20)
#define BPGHAAFFMIK_LMNFJMKLAIA_OFFSET UNITYSDK_OFFSET(0x128BF080)
#define BPGHAAFFMIK_NHOELMIINDH_OFFSET UNITYSDK_OFFSET(0x128BF050)
#define BPGHAAFFMIK_NOJCPBBJIBK_OFFSET UNITYSDK_OFFSET(0x128BEFA0)
#define BPGHAAFFMIK_OHMNEEIINGO_OFFSET UNITYSDK_OFFSET(0x128BF0A0)
#define BPGHAAFFMIK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x128BE150)
#define BPGHAAFFMIK_OKNEBIEDNBE_OFFSET UNITYSDK_OFFSET(0x128BF100)
#define BPGHAAFFMIK_OOKJEBOOEOO_OFFSET UNITYSDK_OFFSET(0x128BD280)
#define BPGHAAFFMIK_OOOHFHLNMEC_OFFSET UNITYSDK_OFFSET(0x128BEFC0)
#define BPGHAAFFMIK_PCMHBEFNIPA_OFFSET UNITYSDK_OFFSET(0x128BED10)
#define BPGHAAFFMIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x128BEFE0)
#define BPGHAAFFMIK_PKBILPCIEMB_OFFSET UNITYSDK_OFFSET(0x128BE130)
#define BPGHAAFFMIK_PLEBJJLHLIG_OFFSET UNITYSDK_OFFSET(0x128BF070)
#define BPGHAAFFMIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x128BC920)
#define BPGHAAFFMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x128BD210)

inline static constexpr unsigned int BPGHAAFFMIK_TypeDefinitionIndex = 66279;

class BPGHAAFFMIK : public ::System::Object
{
public:
	::UnityEngine::Transform* IPCLHOAKHFC; // 0x10
	::System::String* OOJFGFNNOPH; // 0x18
	::System::String* HGMGMBMLBNN; // 0x20
	::System::String* IJEAONBBFDI; // 0x28
	::UnityEngine::AnimationCurve* NCMIEMAFBEA; // 0x30
	::UnityEngine::AnimationCurve* KNMLMBHEMJA; // 0x38
	::UnityEngine::AnimationCurve* OCFBMEKEJDA; // 0x40
	::UnityEngine::AnimationCurve* EHHAPOPAGDD; // 0x48
	::UnityEngine::Vector3 COPLGIFIBNJ; // 0x50
	::UnityEngine::Vector3 OOLGPDIIFOO; // 0x5C
	::System::Single OEJLEGIEJBF; // 0x68
	::MoleMole::Config::DissipationMode FEMCFAPGBNC; // 0x6C
	::System::Single IOHKCNOFKFO; // 0x70
	::UnityEngine::Vector3 KJBHIDHPCMH; // 0x74
	::MoleMole::Config::ShakeType LEDMHAHOHGP; // 0x80
	::System::Single EAJNPMHBNNJ; // 0x84
	::UnityEngine::Vector3 _AGJNIPCMIGA_k__BackingField; // 0x88
	::System::Int32 AIMMMIOEEHC; // 0x94
	::UnityEngine::Vector3 DFFNJDIIDEE; // 0x98
	::System::Single PDNJEGPINND; // 0xA4
	::MoleMole::Cameras::VNoiseParams OLPNKGGAMMF; // 0xA8
	::System::Single PDNBHBIJAIE; // 0xB4
	::UnityEngine::Vector3 PBFBDBCMALP; // 0xB8
	::System::Single KCDBNGPJCPF; // 0xC4
	::MoleMole::Config::ConfigDataPriority PFDADPAOAEK; // 0xC8
	::MoleMole::Config::ConfigDataPlayStacking HGJGKFEKNFL; // 0xCC
	::System::Single NANFBAMNFCB; // 0xD0
	::System::UInt32 GPOOKCALDKA; // 0xD4
	::System::Single KLPCGFELNFI; // 0xD8
	::UnityEngine::Vector3 _GMDIHONKFMF_k__BackingField; // 0xDC
	::System::Single KJKBHOLDPCJ; // 0xE8
	::System::Single HENCBBBKAMP; // 0xEC
	::System::Int32 DJKOFJDOCJJ; // 0xF0
	::System::Int32 CEPAKAOKNMJ; // 0xF4
	::System::Single MBNLMOCMHAE; // 0xF8
	::System::Boolean KHFOOHDFHGL; // 0xFC
	::System::Boolean _GKPDAJADEHH_k__BackingField; // 0xFD
	::System::Boolean _ALOPCNNGKIJ_k__BackingField; // 0xFE
	::System::Boolean IKIDHGIAACG; // 0xFF
	::System::Boolean _BDDJDPLCHDE_k__BackingField; // 0x100
	::System::Boolean PGDEDIOBEDC; // 0x101

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void LKMGBPBKLBB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_LKMGBPBKLBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OOKJEBOOEOO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_OOKJEBOOEOO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KFAJIIKEKIB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_KFAJIIKEKIB_OFFSET))(this);
	}

	::System::Boolean KOJPDKOMBPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_KOJPDKOMBPM_OFFSET))(this);
	}

	::UnityEngine::Vector3 GMLECNNFLJA(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::System::Int32 JHFKDGBCOBA, ::System::Single FNIOPKPHDEH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_GMLECNNFLJA_OFFSET))(this, LJBPECKCCEA, JHFKDGBCOBA, FNIOPKPHDEH);
	}

	::System::Void PKBILPCIEMB(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_PKBILPCIEMB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Single LMMEHFHCCKH(::System::Single BDEDDEGJFKL)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_LMMEHFHCCKH_OFFSET))(this, BDEDDEGJFKL);
	}

	::UnityEngine::Vector3 NOJCPBBJIBK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_NOJCPBBJIBK_OFFSET))(this);
	}

	::System::Void OOOHFHLNMEC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_OOOHFHLNMEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GFFHAMJEABP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_GFFHAMJEABP_OFFSET))(this);
	}

	::System::Single HNBJMPGNOPG(::UnityEngine::Camera* PLNNOIJDCKG, ::System::Single GNHOCNHLCCA)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_HNBJMPGNOPG_OFFSET))(this, PLNNOIJDCKG, GNHOCNHLCCA);
	}

	::System::Void PCMHBEFNIPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_PCMHBEFNIPA_OFFSET))(this);
	}

	::System::Void NHOELMIINDH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_NHOELMIINDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PLEBJJLHLIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_PLEBJJLHLIG_OFFSET))(this);
	}

	::UnityEngine::Vector3 LFBIICJLALJ(::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Int32 JHFKDGBCOBA, ::System::Single FNIOPKPHDEH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_LFBIICJLALJ_OFFSET))(this, CFJFMMGPGKE, JHFKDGBCOBA, FNIOPKPHDEH);
	}

	::UnityEngine::Vector3 LMNFJMKLAIA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_LMNFJMKLAIA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Single OHMNEEIINGO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_OHMNEEIINGO_OFFSET))(this);
	}

	::System::Boolean OKNEBIEDNBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_OKNEBIEDNBE_OFFSET))(this);
	}

	::System::Boolean GCFPBJHEHPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGHAAFFMIK_GCFPBJHEHPH_OFFSET))(this);
	}
};
