#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OCJFPNBFEAB_BCAGLAAFOBK_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define OCJFPNBFEAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OCJFPNBFEAB_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OCJFPNBFEAB_CNHOKELPBBD_OFFSET UNITYSDK_OFFSET(0x757190)
#define OCJFPNBFEAB_DPGANAIFEOF_OFFSET UNITYSDK_OFFSET(0x762D20)
#define OCJFPNBFEAB_ENCMBJOMHMJ_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define OCJFPNBFEAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCJFPNBFEAB_ILJJKGCDFDM_OFFSET UNITYSDK_OFFSET(0x756440)
#define OCJFPNBFEAB_LDNBJFCFIGP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OCJFPNBFEAB_LFHJLNAGOHB_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define OCJFPNBFEAB_MAEHECNDKKO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OCJFPNBFEAB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195C05F0)
#define OCJFPNBFEAB_PADHNMFJMFF_OFFSET UNITYSDK_OFFSET(0x754970)
#define OCJFPNBFEAB_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OCJFPNBFEAB_PMMFLFCNMJB_OFFSET UNITYSDK_OFFSET(0x757290)
#define OCJFPNBFEAB_POJLOFBIAKC_OFFSET UNITYSDK_OFFSET(0x754920)
#define OCJFPNBFEAB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OCJFPNBFEAB_TypeDefinitionIndex = 15458;

struct alignas(4) OCJFPNBFEAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCJFPNBFEAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OCJFPNBFEAB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OCJFPNBFEAB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MAEHECNDKKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_MAEHECNDKKO_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::String* PMMFLFCNMJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_PMMFLFCNMJB_OFFSET))(this);
	}

	::System::Int32 ILJJKGCDFDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_ILJJKGCDFDM_OFFSET))(this);
	}

	::System::Int32 DPGANAIFEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_DPGANAIFEOF_OFFSET))(this);
	}

	::System::Int32 BCAGLAAFOBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_BCAGLAAFOBK_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_BHOCGBENING_OFFSET))(this);
	}

	::System::Int32 ENCMBJOMHMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_ENCMBJOMHMJ_OFFSET))(this);
	}

	::System::Int32 POJLOFBIAKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_POJLOFBIAKC_OFFSET))(this);
	}

	::System::String* CNHOKELPBBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_CNHOKELPBBD_OFFSET))(this);
	}

	::System::Int32 PADHNMFJMFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_PADHNMFJMFF_OFFSET))(this);
	}

	::System::Boolean LFHJLNAGOHB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_LFHJLNAGOHB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LDNBJFCFIGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_LDNBJFCFIGP_OFFSET))(this);
	}

	/*
	::OCJFPNBFEAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCJFPNBFEAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCJFPNBFEAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
