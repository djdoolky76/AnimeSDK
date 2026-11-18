#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/JJEJBPGJPJN.h"

class PEALJGCMGPN;
namespace System { class EventArgs; }
template <typename T> class BFMLEHMAGAK_1;

#define CANOPECPHCD_BNHJAEEEMKB_OFFSET UNITYSDK_OFFSET(0x10E28080)
#define CANOPECPHCD_BOLFCMELFCP_OFFSET UNITYSDK_OFFSET(0x10E283D0)
#define CANOPECPHCD_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x10E28400)
#define CANOPECPHCD_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x10E282A0)
#define CANOPECPHCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E27A20)
#define CANOPECPHCD_EHJHBJODADE_OFFSET UNITYSDK_OFFSET(0x10E281B0)
#define CANOPECPHCD_FPMIBMNIEEI_OFFSET UNITYSDK_OFFSET(0x10E283A0)
#define CANOPECPHCD_GAALGMLMAIH_OFFSET UNITYSDK_OFFSET(0x10E28530)
#define CANOPECPHCD_GCFPENNAADP_OFFSET UNITYSDK_OFFSET(0x10E283B0)
#define CANOPECPHCD_HGLNEGPDGJL_OFFSET UNITYSDK_OFFSET(0x10E283C0)
#define CANOPECPHCD_HNOMNPJOKCH_OFFSET UNITYSDK_OFFSET(0x10E27F90)
#define CANOPECPHCD_MDCMHNECIAJ_OFFSET UNITYSDK_OFFSET(0x10E28410)
#define CANOPECPHCD_ODGHKOMIHPL_OFFSET UNITYSDK_OFFSET(0x10E27F20)
#define CANOPECPHCD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10E274D0)
#define CANOPECPHCD__CTOR_OFFSET UNITYSDK_OFFSET(0x10E272C0)

inline static constexpr unsigned int CANOPECPHCD_TypeDefinitionIndex = 51417;

class CANOPECPHCD : public ::JJEJBPGJPJN
{
public:
	::BFMLEHMAGAK_1<::System::Boolean>* MDMCAKPJLBD; // 0x88
	::System::Int32 _PCFMIEPBJDN_k__BackingField; // 0x90
	::DPHLOBCHIEA BNEHDBBGCDF; // 0x94
	::System::Int32 _CCPAPOAKJLB_k__BackingField; // 0x98

	::System::Void _ctor(::DPHLOBCHIEA NBKKCCPBBKM, ::System::Int32 HALFGBEAKAK, ::System::Int32 ACCPIFILGLA)
	{
		return ((::System::Void(*)(::PVOID, ::DPHLOBCHIEA, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CANOPECPHCD__CTOR_OFFSET))(this, NBKKCCPBBKM, HALFGBEAKAK, ACCPIFILGLA);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_DISPOSE_OFFSET))(this);
	}

	::System::Boolean ODGHKOMIHPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_ODGHKOMIHPL_OFFSET))(this);
	}

	::System::Single EHJHBJODADE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_EHJHBJODADE_OFFSET))(this);
	}

	::System::Int32 FPMIBMNIEEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_FPMIBMNIEEI_OFFSET))(this);
	}

	::PEALJGCMGPN* COPIDBEMEIE()
	{
		return ((::PEALJGCMGPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void GCFPENNAADP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CANOPECPHCD_GCFPENNAADP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HGLNEGPDGJL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CANOPECPHCD_HGLNEGPDGJL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HNOMNPJOKCH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_HNOMNPJOKCH_OFFSET))(this);
	}

	::System::Boolean BOLFCMELFCP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_BOLFCMELFCP_OFFSET))(this);
	}

	::System::Int32 BNHJAEEEMKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_BNHJAEEEMKB_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void MDCMHNECIAJ(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CANOPECPHCD_MDCMHNECIAJ_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GAALGMLMAIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOPECPHCD_GAALGMLMAIH_OFFSET))(this);
	}
};
