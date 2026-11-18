#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HLOEIMJEGIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLOEIMJEGIH_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x758780)
#define HLOEIMJEGIH_FONCPNEEPDL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HLOEIMJEGIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLOEIMJEGIH_GFMPNMBHIEO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLOEIMJEGIH_IOPJEBKCIHN_OFFSET UNITYSDK_OFFSET(0x757190)
#define HLOEIMJEGIH_LJCGHMEPJNP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HLOEIMJEGIH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B880D10)
#define HLOEIMJEGIH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLOEIMJEGIH_TypeDefinitionIndex = 11609;

struct alignas(4) HLOEIMJEGIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLOEIMJEGIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HLOEIMJEGIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLOEIMJEGIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::String* LJCGHMEPJNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_LJCGHMEPJNP_OFFSET))(this);
	}

	::System::String* IOPJEBKCIHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_IOPJEBKCIHN_OFFSET))(this);
	}

	::System::Int32 FONCPNEEPDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_FONCPNEEPDL_OFFSET))(this);
	}

	::System::Int32 GFMPNMBHIEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_GFMPNMBHIEO_OFFSET))(this);
	}

	/*
	static ::HLOEIMJEGIH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLOEIMJEGIH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLOEIMJEGIH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
