#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ACGBAOAFLCC_ALACBKFCECG_OFFSET UNITYSDK_OFFSET(0x756490)
#define ACGBAOAFLCC_BBEGGLJBFOL_OFFSET UNITYSDK_OFFSET(0x757690)
#define ACGBAOAFLCC_BGFPCCGPNNP_OFFSET UNITYSDK_OFFSET(0x755570)
#define ACGBAOAFLCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ACGBAOAFLCC_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ACGBAOAFLCC_CCBDENFGNDF_OFFSET UNITYSDK_OFFSET(0x758780)
#define ACGBAOAFLCC_CKAOIDEGJNJ_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define ACGBAOAFLCC_DLMLFAJPLGN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ACGBAOAFLCC_EDDMLEGOEAD_OFFSET UNITYSDK_OFFSET(0x755670)
#define ACGBAOAFLCC_EJMJMJCIKMF_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define ACGBAOAFLCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACGBAOAFLCC_HLLMLIPEDOL_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define ACGBAOAFLCC_HNMELKDMNJA_OFFSET UNITYSDK_OFFSET(0x755890)
#define ACGBAOAFLCC_KKLKFFNNOIM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define ACGBAOAFLCC_KNFHBPEIGIL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ACGBAOAFLCC_LPHNEBOEKOE_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define ACGBAOAFLCC_NMBKOKPDLAG_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define ACGBAOAFLCC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9810A0)
#define ACGBAOAFLCC_ODGPNFGKJPP_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define ACGBAOAFLCC_ONLFOPEBNEB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ACGBAOAFLCC_OPGBJJOLLCO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ACGBAOAFLCC_PACFEFMDILI_OFFSET UNITYSDK_OFFSET(0x755320)
#define ACGBAOAFLCC_PAIPIOOCDAJ_OFFSET UNITYSDK_OFFSET(0x760650)
#define ACGBAOAFLCC_PNKOHEIJHMI_OFFSET UNITYSDK_OFFSET(0x754970)
#define ACGBAOAFLCC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ACGBAOAFLCC_TypeDefinitionIndex = 12611;

struct alignas(4) ACGBAOAFLCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACGBAOAFLCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PNKOHEIJHMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_PNKOHEIJHMI_OFFSET))(this);
	}

	::System::Int32 EDDMLEGOEAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_EDDMLEGOEAD_OFFSET))(this);
	}

	::System::Int32 HNMELKDMNJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_HNMELKDMNJA_OFFSET))(this);
	}

	::System::String* OPGBJJOLLCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_OPGBJJOLLCO_OFFSET))(this);
	}

	/*
	static ::ACGBAOAFLCC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ACGBAOAFLCC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CKAOIDEGJNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_CKAOIDEGJNJ_OFFSET))(this);
	}

	::System::String* NMBKOKPDLAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_NMBKOKPDLAG_OFFSET))(this);
	}

	::System::Boolean ALACBKFCECG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_ALACBKFCECG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HLLMLIPEDOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_HLLMLIPEDOL_OFFSET))(this);
	}

	::System::String* BBEGGLJBFOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_BBEGGLJBFOL_OFFSET))(this);
	}

	::System::String* LPHNEBOEKOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_LPHNEBOEKOE_OFFSET))(this);
	}

	::System::String* BGFPCCGPNNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_BGFPCCGPNNP_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_BHOCGBENING_OFFSET))(this);
	}

	::System::Int32 KKLKFFNNOIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_KKLKFFNNOIM_OFFSET))(this);
	}

	::System::String* ODGPNFGKJPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_ODGPNFGKJPP_OFFSET))(this);
	}

	::System::Int32 CCBDENFGNDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_CCBDENFGNDF_OFFSET))(this);
	}

	::System::Int32 PAIPIOOCDAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_PAIPIOOCDAJ_OFFSET))(this);
	}

	::System::Boolean EJMJMJCIKMF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_EJMJMJCIKMF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KNFHBPEIGIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_KNFHBPEIGIL_OFFSET))(this);
	}

	::System::Int32 DLMLFAJPLGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_DLMLFAJPLGN_OFFSET))(this);
	}

	/*
	::ACGBAOAFLCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACGBAOAFLCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PACFEFMDILI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_PACFEFMDILI_OFFSET))(this);
	}

	::System::Int32 ONLFOPEBNEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBAOAFLCC_ONLFOPEBNEB_OFFSET))(this);
	}
};
