#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFBNGMGMOPK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFBNGMGMOPK_AGNJKMEEEPL_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define OFBNGMGMOPK_BAMNCDALCKP_OFFSET UNITYSDK_OFFSET(0x755370)
#define OFBNGMGMOPK_BBCABAMCFFO_OFFSET UNITYSDK_OFFSET(0x762A90)
#define OFBNGMGMOPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFBNGMGMOPK_CKEHDEJGAIC_OFFSET UNITYSDK_OFFSET(0x754A70)
#define OFBNGMGMOPK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OFBNGMGMOPK_DODNOGGFNAB_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define OFBNGMGMOPK_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x755140)
#define OFBNGMGMOPK_EFPAMPLBHCB_OFFSET UNITYSDK_OFFSET(0x754D50)
#define OFBNGMGMOPK_FEHMMEPDFAO_OFFSET UNITYSDK_OFFSET(0x761000)
#define OFBNGMGMOPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFBNGMGMOPK_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x755710)
#define OFBNGMGMOPK_HICIEIAEOHO_OFFSET UNITYSDK_OFFSET(0x757190)
#define OFBNGMGMOPK_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x757C10)
#define OFBNGMGMOPK_HNCEGIEGGLL_OFFSET UNITYSDK_OFFSET(0x757D20)
#define OFBNGMGMOPK_INCECPLHGGJ_OFFSET UNITYSDK_OFFSET(0x7552C0)
#define OFBNGMGMOPK_JAICBLBGLHH_OFFSET UNITYSDK_OFFSET(0x757390)
#define OFBNGMGMOPK_JDPHHAMLHIL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OFBNGMGMOPK_KKLNPGBJJKP_OFFSET UNITYSDK_OFFSET(0x760910)
#define OFBNGMGMOPK_LCNKNGODJCF_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define OFBNGMGMOPK_LFFFDJPLJEH_OFFSET UNITYSDK_OFFSET(0x755190)
#define OFBNGMGMOPK_MNPACOMFGIL_OFFSET UNITYSDK_OFFSET(0x761E00)
#define OFBNGMGMOPK_MPGHDBGLAEM_OFFSET UNITYSDK_OFFSET(0x757690)
#define OFBNGMGMOPK_NEJJCPAJBKH_OFFSET UNITYSDK_OFFSET(0x757520)
#define OFBNGMGMOPK_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OFBNGMGMOPK_NKFLKIGJBIJ_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OFBNGMGMOPK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF7A230)
#define OFBNGMGMOPK_ONNMCMINPCA_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define OFBNGMGMOPK_PCJNBHIFMAJ_OFFSET UNITYSDK_OFFSET(0x761710)
#define OFBNGMGMOPK_PFLNFLAFCAL_OFFSET UNITYSDK_OFFSET(0x762D20)
#define OFBNGMGMOPK_PGEMCKMAHFJ_OFFSET UNITYSDK_OFFSET(0x758320)
#define OFBNGMGMOPK_PIINPFDEACF_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define OFBNGMGMOPK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFBNGMGMOPK_TypeDefinitionIndex = 16135;

struct alignas(4) OFBNGMGMOPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFBNGMGMOPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean CKEHDEJGAIC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_CKEHDEJGAIC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NEJJCPAJBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_NEJJCPAJBKH_OFFSET))(this);
	}

	::System::Int32 KKLNPGBJJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_KKLNPGBJJKP_OFFSET))(this);
	}

	::System::Int32 BAMNCDALCKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_BAMNCDALCKP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* JDPHHAMLHIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_JDPHHAMLHIL_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_HIHKBMCPIJH_OFFSET))(this);
	}

	::System::Boolean AGNJKMEEEPL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_AGNJKMEEEPL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DODNOGGFNAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_DODNOGGFNAB_OFFSET))(this);
	}

	/*
	::OFBNGMGMOPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFBNGMGMOPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BBCABAMCFFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_BBCABAMCFFO_OFFSET))(this);
	}

	/*
	static ::OFBNGMGMOPK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFBNGMGMOPK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_DPCDIABPPEE_OFFSET))(this);
	}

	::System::Int32 LFFFDJPLJEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_LFFFDJPLJEH_OFFSET))(this);
	}

	::System::String* PGEMCKMAHFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_PGEMCKMAHFJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PCJNBHIFMAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_PCJNBHIFMAJ_OFFSET))(this);
	}

	::System::String* MNPACOMFGIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_MNPACOMFGIL_OFFSET))(this);
	}

	::System::String* FEHMMEPDFAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_FEHMMEPDFAO_OFFSET))(this);
	}

	::System::String* HICIEIAEOHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_HICIEIAEOHO_OFFSET))(this);
	}

	::System::Int32 EFPAMPLBHCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_EFPAMPLBHCB_OFFSET))(this);
	}

	::System::String* HNCEGIEGGLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_HNCEGIEGGLL_OFFSET))(this);
	}

	::System::Boolean JAICBLBGLHH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_JAICBLBGLHH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ONNMCMINPCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_ONNMCMINPCA_OFFSET))(this);
	}

	::System::Int32 INCECPLHGGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_INCECPLHGGJ_OFFSET))(this);
	}

	::System::Boolean PIINPFDEACF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_PIINPFDEACF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_HGODFCFGNDA_OFFSET))(this);
	}

	::System::String* NKFLKIGJBIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_NKFLKIGJBIJ_OFFSET))(this);
	}

	::System::String* MPGHDBGLAEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_MPGHDBGLAEM_OFFSET))(this);
	}

	::System::Int32 LCNKNGODJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_LCNKNGODJCF_OFFSET))(this);
	}

	::System::Int32 PFLNFLAFCAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBNGMGMOPK_PFLNFLAFCAL_OFFSET))(this);
	}
};
