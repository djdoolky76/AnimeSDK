#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CHJOCKEPIBC_ANBMPCPFEKA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CHJOCKEPIBC_BDNNDOANEAM_OFFSET UNITYSDK_OFFSET(0x754D50)
#define CHJOCKEPIBC_BGPNKNNDJJO_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CHJOCKEPIBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CHJOCKEPIBC_EJAPBADEGPM_OFFSET UNITYSDK_OFFSET(0x756440)
#define CHJOCKEPIBC_FFADOGHMMNA_OFFSET UNITYSDK_OFFSET(0x755890)
#define CHJOCKEPIBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHJOCKEPIBC_GFCOLCGJFEJ_OFFSET UNITYSDK_OFFSET(0x757690)
#define CHJOCKEPIBC_HIMLKMFOFDK_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define CHJOCKEPIBC_HOKFDABCANC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CHJOCKEPIBC_IOLPEKJBMCP_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define CHJOCKEPIBC_KPECBHHDFLG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CHJOCKEPIBC_LNHCALCGKHO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CHJOCKEPIBC_NNPODLNPGBA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CHJOCKEPIBC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A53F650)
#define CHJOCKEPIBC_OINOFDPAPEF_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define CHJOCKEPIBC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CHJOCKEPIBC_TypeDefinitionIndex = 11918;

struct alignas(4) CHJOCKEPIBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJOCKEPIBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LNHCALCGKHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_LNHCALCGKHO_OFFSET))(this);
	}

	::System::Int32 HOKFDABCANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_HOKFDABCANC_OFFSET))(this);
	}

	::System::Int32 BDNNDOANEAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_BDNNDOANEAM_OFFSET))(this);
	}

	::System::String* KPECBHHDFLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_KPECBHHDFLG_OFFSET))(this);
	}

	::System::Boolean IOLPEKJBMCP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_IOLPEKJBMCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ANBMPCPFEKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_ANBMPCPFEKA_OFFSET))(this);
	}

	/*
	static ::CHJOCKEPIBC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CHJOCKEPIBC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GFCOLCGJFEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_GFCOLCGJFEJ_OFFSET))(this);
	}

	::System::Int32 FFADOGHMMNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_FFADOGHMMNA_OFFSET))(this);
	}

	::System::Int32 NNPODLNPGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_NNPODLNPGBA_OFFSET))(this);
	}

	::System::Int32 BGPNKNNDJJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_BGPNKNNDJJO_OFFSET))(this);
	}

	/*
	::CHJOCKEPIBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHJOCKEPIBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EJAPBADEGPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_EJAPBADEGPM_OFFSET))(this);
	}

	::System::Int32 HIMLKMFOFDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_HIMLKMFOFDK_OFFSET))(this);
	}

	::System::Int32 OINOFDPAPEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOCKEPIBC_OINOFDPAPEF_OFFSET))(this);
	}
};
