#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKJANEGAOIF.h"
#include "unitysdk/DKJANEGAOIF_GNFODEPJCIH.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ABBEDLEPBAO;
class AEFFKKLLLOI;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define GKFPDFNFFMD_ABLKKHDKCOO_OFFSET UNITYSDK_OFFSET(0x10EFF840)
#define GKFPDFNFFMD_BBOMJDBNHIC_1_OFFSET UNITYSDK_OFFSET(0x10EFF8E0)
#define GKFPDFNFFMD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10EFF520)
#define GKFPDFNFFMD_BFPKPFCNMJF_OFFSET UNITYSDK_OFFSET(0x10EFF140)
#define GKFPDFNFFMD_BGAECHCGGIA_OFFSET UNITYSDK_OFFSET(0x10EFFA90)
#define GKFPDFNFFMD_BGALGEGENDB_OFFSET UNITYSDK_OFFSET(0x10EFF2E0)
#define GKFPDFNFFMD_BPBKMLBNADE_OFFSET UNITYSDK_OFFSET(0x10EFF440)
#define GKFPDFNFFMD_FACIICPGHDH_OFFSET UNITYSDK_OFFSET(0x10EFF8D0)
#define GKFPDFNFFMD_GDAOIDMFMLA_OFFSET UNITYSDK_OFFSET(0x10EFFAA0)
#define GKFPDFNFFMD_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x10EFEDC0)
#define GKFPDFNFFMD_HPFGMFPNFCM_OFFSET UNITYSDK_OFFSET(0x10EFECC0)
#define GKFPDFNFFMD_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x10EFF780)
#define GKFPDFNFFMD_IFLCKDNPFOM_OFFSET UNITYSDK_OFFSET(0x10EFFAB0)
#define GKFPDFNFFMD_JEJLBJPJNNL_OFFSET UNITYSDK_OFFSET(0x10EFF0C0)
#define GKFPDFNFFMD_JGEKPKMGAPB_OFFSET UNITYSDK_OFFSET(0x10EFF6E0)
#define GKFPDFNFFMD_JKBBNMPFAAC_OFFSET UNITYSDK_OFFSET(0x10EFF6D0)
#define GKFPDFNFFMD_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x10EFEC50)
#define GKFPDFNFFMD_LEBIMIJHEKD_OFFSET UNITYSDK_OFFSET(0x10EFF650)
#define GKFPDFNFFMD_LKCJMDBPCNL_OFFSET UNITYSDK_OFFSET(0x10EFFA20)
#define GKFPDFNFFMD_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x10EFEFF0)
#define GKFPDFNFFMD_OPPDCBCDKJJ_OFFSET UNITYSDK_OFFSET(0x10EFF970)
#define GKFPDFNFFMD_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x10EFEF20)
#define GKFPDFNFFMD_POHCLEIEIBI_OFFSET UNITYSDK_OFFSET(0x10EFF640)
#define GKFPDFNFFMD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10EFF400)
#define GKFPDFNFFMD__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFF490)

inline static constexpr unsigned int GKFPDFNFFMD_TypeDefinitionIndex = 71774;

class GKFPDFNFFMD : public ::DKJANEGAOIF
{
public:
	::ABBEDLEPBAO* PMKINFHDLFD; // 0x28
	::UnityEngine::Events::UnityAction_1<::System::Boolean>* _BMCIMBGLDLI_k__BackingField; // 0x30
	::System::Boolean _OPDCGDGOEBE_k__BackingField; // 0x38
	::System::Boolean ADCEGDMOCGN; // 0x39
	::System::Boolean MLEJINGEGCH; // 0x3A
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector4 _MDDCCCHFHBC_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA(::System::Boolean BFHOJGAHJCC, ::DKJANEGAOIF_GNFODEPJCIH JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DKJANEGAOIF_GNFODEPJCIH))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_HNDGJKPNIHA_OFFSET))(this, BFHOJGAHJCC, JKBLDFBGBPK);
	}

	::System::Void JEJLBJPJNNL(::System::Boolean DPAGNIDIPGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_JEJLBJPJNNL_OFFSET))(this, DPAGNIDIPGE);
	}

	::System::Void BFPKPFCNMJF(::System::Single LLBEKEFONPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_BFPKPFCNMJF_OFFSET))(this, LLBEKEFONPC);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_PGHAJOMNDDJ_OFFSET))(this);
	}

	::GKFPDFNFFMD* BBOMJDBNHIC(::System::Boolean HAFDIMGJBHC, ::AEFFKKLLLOI* JIHDHGPNHGI)
	{
		return ((::GKFPDFNFFMD*(*)(::PVOID, ::System::Boolean, ::AEFFKKLLLOI*))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_BBOMJDBNHIC_OFFSET))(this, HAFDIMGJBHC, JIHDHGPNHGI);
	}

	::UnityEngine::Events::UnityAction_1<::System::Boolean>* POHCLEIEIBI()
	{
		return ((::UnityEngine::Events::UnityAction_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_POHCLEIEIBI_OFFSET))(this);
	}

	::System::Void LEBIMIJHEKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_LEBIMIJHEKD_OFFSET))(this);
	}

	::System::Void JKBBNMPFAAC(::UnityEngine::Events::UnityAction_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_JKBBNMPFAAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JGEKPKMGAPB(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_JGEKPKMGAPB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HPFGMFPNFCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_HPFGMFPNFCM_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE(::System::Boolean MIALFKCCCPI, ::DKJANEGAOIF_GNFODEPJCIH KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DKJANEGAOIF_GNFODEPJCIH))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_IFHNMAGGFAE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ABLKKHDKCOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_ABLKKHDKCOO_OFFSET))(this);
	}

	::System::Void FACIICPGHDH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_FACIICPGHDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_OKLLFEIJKHN_OFFSET))(this);
	}

	::GKFPDFNFFMD* BBOMJDBNHIC_1(::UnityEngine::Vector2 AEFBPLEGCJJ, ::System::Single EGFFHBOHDLF, ::UnityEngine::AnimationCurve* BMGGKAICHPL, ::System::Single CJHDDFFJKDI, ::UnityEngine::AnimationCurve* IKLIBOGBJHH)
	{
		return ((::GKFPDFNFFMD*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_BBOMJDBNHIC_1_OFFSET))(this, AEFBPLEGCJJ, EGFFHBOHDLF, BMGGKAICHPL, CJHDDFFJKDI, IKLIBOGBJHH);
	}

	::System::Void OPPDCBCDKJJ(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_OPPDCBCDKJJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LKCJMDBPCNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_LKCJMDBPCNL_OFFSET))(this);
	}

	::System::Void BGALGEGENDB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_BGALGEGENDB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Boolean BGAECHCGGIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_BGAECHCGGIA_OFFSET))(this);
	}

	::UnityEngine::Vector4 GDAOIDMFMLA()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_GDAOIDMFMLA_OFFSET))(this);
	}

	::System::Void BPBKMLBNADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_BPBKMLBNADE_OFFSET))(this);
	}

	::System::Void IFLCKDNPFOM(::UnityEngine::Vector4 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + GKFPDFNFFMD_IFLCKDNPFOM_OFFSET))(this, EGEGIMGMJHN);
	}
};
