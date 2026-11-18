#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FFPIBPLJPDK_AHELIJNANJG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FFPIBPLJPDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFPIBPLJPDK_CJBMHNCHNHO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FFPIBPLJPDK_CLECFMBNEOA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FFPIBPLJPDK_CNOKKAGJHDL_OFFSET UNITYSDK_OFFSET(0x7EA2E0)
#define FFPIBPLJPDK_EOANKJGDHEO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FFPIBPLJPDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFPIBPLJPDK_GOKAFPCDOMK_OFFSET UNITYSDK_OFFSET(0x755890)
#define FFPIBPLJPDK_HCHFOKNKPIB_OFFSET UNITYSDK_OFFSET(0x755190)
#define FFPIBPLJPDK_LCGHOIPOPDH_OFFSET UNITYSDK_OFFSET(0x756440)
#define FFPIBPLJPDK_LOHONECPLMD_OFFSET UNITYSDK_OFFSET(0x7A5C70)
#define FFPIBPLJPDK_NEBCGHACPMA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FFPIBPLJPDK_NIHANFFJLBP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFPIBPLJPDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADE2810)
#define FFPIBPLJPDK_PIADFAKPBEO_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define FFPIBPLJPDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFPIBPLJPDK_TypeDefinitionIndex = 9217;

struct alignas(4) FFPIBPLJPDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFPIBPLJPDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PIADFAKPBEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_PIADFAKPBEO_OFFSET))(this);
	}

	/*
	::FFPIBPLJPDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFPIBPLJPDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NIHANFFJLBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_NIHANFFJLBP_OFFSET))(this);
	}

	::System::Single LOHONECPLMD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_LOHONECPLMD_OFFSET))(this);
	}

	::System::Int32 CLECFMBNEOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_CLECFMBNEOA_OFFSET))(this);
	}

	::System::Int32 HCHFOKNKPIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_HCHFOKNKPIB_OFFSET))(this);
	}

	::System::Int32 LCGHOIPOPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_LCGHOIPOPDH_OFFSET))(this);
	}

	::System::String* NEBCGHACPMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_NEBCGHACPMA_OFFSET))(this);
	}

	::System::Int32 GOKAFPCDOMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_GOKAFPCDOMK_OFFSET))(this);
	}

	::System::Single CNOKKAGJHDL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_CNOKKAGJHDL_OFFSET))(this);
	}

	::System::String* CJBMHNCHNHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_CJBMHNCHNHO_OFFSET))(this);
	}

	::System::String* EOANKJGDHEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_EOANKJGDHEO_OFFSET))(this);
	}

	::System::Int32 AHELIJNANJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_AHELIJNANJG_OFFSET))(this);
	}

	/*
	static ::FFPIBPLJPDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FFPIBPLJPDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FFPIBPLJPDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
