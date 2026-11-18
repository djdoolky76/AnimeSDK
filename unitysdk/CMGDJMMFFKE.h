#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CMGDJMMFFKE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CMGDJMMFFKE_BAGHMMCAAHP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CMGDJMMFFKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CMGDJMMFFKE_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CMGDJMMFFKE_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x754920)
#define CMGDJMMFFKE_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CMGDJMMFFKE_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CMGDJMMFFKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMGDJMMFFKE_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CMGDJMMFFKE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19505820)
#define CMGDJMMFFKE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CMGDJMMFFKE_TypeDefinitionIndex = 12201;

struct alignas(4) CMGDJMMFFKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMGDJMMFFKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::CMGDJMMFFKE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CMGDJMMFFKE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CMGDJMMFFKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMGDJMMFFKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::String* BAGHMMCAAHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_BAGHMMCAAHP_OFFSET))(this);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::String* DGFAJDNHCIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGDJMMFFKE_DGFAJDNHCIJ_OFFSET))(this);
	}
};
