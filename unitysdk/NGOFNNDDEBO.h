#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELKNCGOJPN.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/NDPKCBLNKJB.h"
#include "unitysdk/OJPBCLJDOKA.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class OEBMABOOAGC;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define NGOFNNDDEBO_AAMLNKCJHEC_OFFSET UNITYSDK_OFFSET(0x16B71150)
#define NGOFNNDDEBO_AEFPHMFNJLA_OFFSET UNITYSDK_OFFSET(0x16B72900)
#define NGOFNNDDEBO_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x16B727D0)
#define NGOFNNDDEBO_BIIPAMDBDLD_OFFSET UNITYSDK_OFFSET(0x16B72B90)
#define NGOFNNDDEBO_DFKIJCGPBEP_OFFSET UNITYSDK_OFFSET(0x16B72650)
#define NGOFNNDDEBO_EBHPGHHODKM_OFFSET UNITYSDK_OFFSET(0x16B72C70)
#define NGOFNNDDEBO_EFHIPDFINAG_OFFSET UNITYSDK_OFFSET(0x16B72240)
#define NGOFNNDDEBO_FCAOGDFBPGC_OFFSET UNITYSDK_OFFSET(0x16B727E0)
#define NGOFNNDDEBO_FDJLFNIGDPJ_OFFSET UNITYSDK_OFFSET(0x16B72C80)
#define NGOFNNDDEBO_FHKBBMDCKJH_OFFSET UNITYSDK_OFFSET(0x16B72D40)
#define NGOFNNDDEBO_FMGKHJEOHPF_OFFSET UNITYSDK_OFFSET(0x16B72C90)
#define NGOFNNDDEBO_GPPEHIGBCEN_OFFSET UNITYSDK_OFFSET(0x16B72BE0)
#define NGOFNNDDEBO_HAEJJIBFLAI_OFFSET UNITYSDK_OFFSET(0x16B728F0)
#define NGOFNNDDEBO_HBOIEDDDGKE_OFFSET UNITYSDK_OFFSET(0x16B70E80)
#define NGOFNNDDEBO_HFCOKPBMGGA_OFFSET UNITYSDK_OFFSET(0x16B72910)
#define NGOFNNDDEBO_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16B71D50)
#define NGOFNNDDEBO_IEENPEOBDIC_OFFSET UNITYSDK_OFFSET(0x16B72730)
#define NGOFNNDDEBO_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x16B728E0)
#define NGOFNNDDEBO_IIKLNJOPBIM_OFFSET UNITYSDK_OFFSET(0x16B721B0)
#define NGOFNNDDEBO_JNPOMMINLMN_OFFSET UNITYSDK_OFFSET(0x16B70DD0)
#define NGOFNNDDEBO_OCBINHCBKIF_OFFSET UNITYSDK_OFFSET(0x16B71000)
#define NGOFNNDDEBO_OJOANFEFDMJ_OFFSET UNITYSDK_OFFSET(0x16B71440)
#define NGOFNNDDEBO_OLOMFGDBDGF_OFFSET UNITYSDK_OFFSET(0x16B72570)
#define NGOFNNDDEBO_PDKHLGKDBKB_OFFSET UNITYSDK_OFFSET(0x16B72740)
#define NGOFNNDDEBO_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x16B71A90)
#define NGOFNNDDEBO__CTOR_OFFSET UNITYSDK_OFFSET(0x16B71FE0)

inline static constexpr unsigned int NGOFNNDDEBO_TypeDefinitionIndex = 71206;

class NGOFNNDDEBO : public ::OJPBCLJDOKA
{
public:
	::Il2CppArray<::OEBMABOOAGC*>* CAMENJKBPIK; // 0x140
	::System::Threading::CancellationTokenSource* MCECDPJBAKK; // 0x148
	::Cysharp::Threading::Tasks::UniTask HMABFABCLEO; // 0x150
	::NDPKCBLNKJB _BGLGOGNOIBM_k__BackingField; // 0x160

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO__CTOR_OFFSET))(this);
	}

	::System::Boolean JNPOMMINLMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_JNPOMMINLMN_OFFSET))(this);
	}

	::System::Void HBOIEDDDGKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_HBOIEDDDGKE_OFFSET))(this);
	}

	::System::Void OCBINHCBKIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_OCBINHCBKIF_OFFSET))(this);
	}

	::System::Boolean AAMLNKCJHEC(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& EPFNBELDLDP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_AAMLNKCJHEC_OFFSET))(this, EPFNBELDLDP);
	}

	::System::String* OJOANFEFDMJ(::System::String*& EIFJPFICKFM)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_OJOANFEFDMJ_OFFSET))(this, EIFJPFICKFM);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IIKLNJOPBIM(::System::EventArgs* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_IIKLNJOPBIM_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void EFHIPDFINAG(::NDPKCBLNKJB IIGHHFNIJNC, ::CELKNCGOJPN GHNAFBPJNKB)
	{
		return ((::System::Void(*)(::PVOID, ::NDPKCBLNKJB, ::CELKNCGOJPN))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_EFHIPDFINAG_OFFSET))(this, IIGHHFNIJNC, GHNAFBPJNKB);
	}

	::System::Boolean OLOMFGDBDGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_OLOMFGDBDGF_OFFSET))(this);
	}

	::System::Void IEENPEOBDIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_IEENPEOBDIC_OFFSET))(this);
	}

	::System::Boolean PDKHLGKDBKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_PDKHLGKDBKB_OFFSET))(this);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FCAOGDFBPGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_FCAOGDFBPGC_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void HAEJJIBFLAI(::NDPKCBLNKJB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NDPKCBLNKJB))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_HAEJJIBFLAI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean AEFPHMFNJLA(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_AEFPHMFNJLA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HFCOKPBMGGA(::NDPKCBLNKJB GEJCKFFFKCL, ::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::NDPKCBLNKJB, ::System::Boolean))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_HFCOKPBMGGA_OFFSET))(GEJCKFFFKCL, HPINBCPMHJE);
	}

	::System::Void BIIPAMDBDLD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_BIIPAMDBDLD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPPEHIGBCEN(::System::EventArgs* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_GPPEHIGBCEN_OFFSET))(this, NFFNEFLKPDG);
	}

	::Cysharp::Threading::Tasks::UniTask DFKIJCGPBEP(::NDPKCBLNKJB DNPAGEBONLH, ::CELKNCGOJPN GHNAFBPJNKB, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::NDPKCBLNKJB, ::CELKNCGOJPN, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_DFKIJCGPBEP_OFFSET))(this, DNPAGEBONLH, GHNAFBPJNKB, AMIDHEAIANO);
	}

	::System::String* EBHPGHHODKM(::System::String*& MIALFKCCCPI)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_EBHPGHHODKM_OFFSET))(this, MIALFKCCCPI);
	}

	::NDPKCBLNKJB FDJLFNIGDPJ()
	{
		return ((::NDPKCBLNKJB(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_FDJLFNIGDPJ_OFFSET))(this);
	}

	::System::Void FMGKHJEOHPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_FMGKHJEOHPF_OFFSET))(this);
	}

	::OEBMABOOAGC* FHKBBMDCKJH()
	{
		return ((::OEBMABOOAGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_FHKBBMDCKJH_OFFSET))(this);
	}
};
