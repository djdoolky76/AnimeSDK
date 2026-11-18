#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OBMIJJINNDC_AAONENDDIGK_OFFSET UNITYSDK_OFFSET(0x757190)
#define OBMIJJINNDC_AFGCHOEOPCA_OFFSET UNITYSDK_OFFSET(0x755710)
#define OBMIJJINNDC_AKNGOLPGMIF_OFFSET UNITYSDK_OFFSET(0x763030)
#define OBMIJJINNDC_ALBIMOBLLBC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OBMIJJINNDC_ANHJAPHNEFD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OBMIJJINNDC_APENOCPCAHD_OFFSET UNITYSDK_OFFSET(0x761E00)
#define OBMIJJINNDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBMIJJINNDC_BHMHOLMFIPE_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OBMIJJINNDC_BNPBIFDICEN_OFFSET UNITYSDK_OFFSET(0x757E20)
#define OBMIJJINNDC_CABPHKPGDCI_OFFSET UNITYSDK_OFFSET(0x7C2A00)
#define OBMIJJINNDC_CCBLBLPIDHD_OFFSET UNITYSDK_OFFSET(0x7DE820)
#define OBMIJJINNDC_DJHHMKNKKCJ_OFFSET UNITYSDK_OFFSET(0x755520)
#define OBMIJJINNDC_DLALMAJIODN_OFFSET UNITYSDK_OFFSET(0x7AD240)
#define OBMIJJINNDC_DLGDMOLOELD_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define OBMIJJINNDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBMIJJINNDC_GHNAPGILMPI_OFFSET UNITYSDK_OFFSET(0x762EC0)
#define OBMIJJINNDC_GJAEMGNEGCE_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OBMIJJINNDC_HNKMOEKCNGG_OFFSET UNITYSDK_OFFSET(0x779D20)
#define OBMIJJINNDC_IDCMJBKDMIH_OFFSET UNITYSDK_OFFSET(0x7ADDB0)
#define OBMIJJINNDC_IDEBGIPAJMM_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OBMIJJINNDC_IIBAHJECDAB_OFFSET UNITYSDK_OFFSET(0x757290)
#define OBMIJJINNDC_ILKGOAEKONJ_OFFSET UNITYSDK_OFFSET(0x7AD1C0)
#define OBMIJJINNDC_IOJNGHBEHHM_OFFSET UNITYSDK_OFFSET(0x7BF380)
#define OBMIJJINNDC_JBIDDAAGACI_OFFSET UNITYSDK_OFFSET(0x7E2CD0)
#define OBMIJJINNDC_JKNNHHOAEHH_OFFSET UNITYSDK_OFFSET(0x7DE7A0)
#define OBMIJJINNDC_JLFOJLEMCBD_OFFSET UNITYSDK_OFFSET(0x761830)
#define OBMIJJINNDC_KDLGMMFMFBG_OFFSET UNITYSDK_OFFSET(0x757520)
#define OBMIJJINNDC_LEAPCJGLNLE_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define OBMIJJINNDC_LKJOHCAGNEA_OFFSET UNITYSDK_OFFSET(0x7649A0)
#define OBMIJJINNDC_LNGNGBOCLGN_OFFSET UNITYSDK_OFFSET(0x758320)
#define OBMIJJINNDC_MPJCEMDONLH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBMIJJINNDC_NGFMOGJKFHM_OFFSET UNITYSDK_OFFSET(0x761AD0)
#define OBMIJJINNDC_NOLFDGBHHBE_OFFSET UNITYSDK_OFFSET(0x820870)
#define OBMIJJINNDC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C1963D0)
#define OBMIJJINNDC_POIFPFCHEBL_OFFSET UNITYSDK_OFFSET(0x761D80)
#define OBMIJJINNDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBMIJJINNDC_TypeDefinitionIndex = 13814;

struct alignas(4) OBMIJJINNDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBMIJJINNDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IDCMJBKDMIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_IDCMJBKDMIH_OFFSET))(this);
	}

	::System::String* APENOCPCAHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_APENOCPCAHD_OFFSET))(this);
	}

	::System::String* KDLGMMFMFBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_KDLGMMFMFBG_OFFSET))(this);
	}

	::System::String* POIFPFCHEBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_POIFPFCHEBL_OFFSET))(this);
	}

	::System::String* BNPBIFDICEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_BNPBIFDICEN_OFFSET))(this);
	}

	/*
	static ::OBMIJJINNDC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBMIJJINNDC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBMIJJINNDC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LEAPCJGLNLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_LEAPCJGLNLE_OFFSET))(this);
	}

	::System::String* ANHJAPHNEFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_ANHJAPHNEFD_OFFSET))(this);
	}

	::System::Int32 DLGDMOLOELD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_DLGDMOLOELD_OFFSET))(this);
	}

	/*
	::OBMIJJINNDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBMIJJINNDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBMIJJINNDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CCBLBLPIDHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_CCBLBLPIDHD_OFFSET))(this);
	}

	::System::String* JKNNHHOAEHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_JKNNHHOAEHH_OFFSET))(this);
	}

	::System::Boolean JBIDDAAGACI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OBMIJJINNDC_JBIDDAAGACI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JLFOJLEMCBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_JLFOJLEMCBD_OFFSET))(this);
	}

	::System::String* IDEBGIPAJMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_IDEBGIPAJMM_OFFSET))(this);
	}

	::System::String* BHMHOLMFIPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_BHMHOLMFIPE_OFFSET))(this);
	}

	::System::String* ILKGOAEKONJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_ILKGOAEKONJ_OFFSET))(this);
	}

	::System::String* IOJNGHBEHHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_IOJNGHBEHHM_OFFSET))(this);
	}

	::System::String* GJAEMGNEGCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_GJAEMGNEGCE_OFFSET))(this);
	}

	::System::Int32 CABPHKPGDCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_CABPHKPGDCI_OFFSET))(this);
	}

	::System::Int32 DJHHMKNKKCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_DJHHMKNKKCJ_OFFSET))(this);
	}

	::System::Int32 NOLFDGBHHBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_NOLFDGBHHBE_OFFSET))(this);
	}

	::System::String* LNGNGBOCLGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_LNGNGBOCLGN_OFFSET))(this);
	}

	::System::String* AAONENDDIGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_AAONENDDIGK_OFFSET))(this);
	}

	::System::String* NGFMOGJKFHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_NGFMOGJKFHM_OFFSET))(this);
	}

	::System::String* DLALMAJIODN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_DLALMAJIODN_OFFSET))(this);
	}

	::System::Int32 MPJCEMDONLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_MPJCEMDONLH_OFFSET))(this);
	}

	::System::String* IIBAHJECDAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_IIBAHJECDAB_OFFSET))(this);
	}

	::System::Int32 GHNAPGILMPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_GHNAPGILMPI_OFFSET))(this);
	}

	::System::String* ALBIMOBLLBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_ALBIMOBLLBC_OFFSET))(this);
	}

	::System::String* AFGCHOEOPCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_AFGCHOEOPCA_OFFSET))(this);
	}

	::System::Int32 LKJOHCAGNEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_LKJOHCAGNEA_OFFSET))(this);
	}

	::System::String* HNKMOEKCNGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_HNKMOEKCNGG_OFFSET))(this);
	}

	::System::Int32 AKNGOLPGMIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMIJJINNDC_AKNGOLPGMIF_OFFSET))(this);
	}
};
