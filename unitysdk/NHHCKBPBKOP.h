#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEJINLIOOH.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHHCKBPBKOP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHHCKBPBKOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHHCKBPBKOP_DKDHIBANDGN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NHHCKBPBKOP_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NHHCKBPBKOP_FFKHMCMEDGL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NHHCKBPBKOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHHCKBPBKOP_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NHHCKBPBKOP_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NHHCKBPBKOP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B32B870)
#define NHHCKBPBKOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHHCKBPBKOP_TypeDefinitionIndex = 9884;

struct alignas(4) NHHCKBPBKOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHHCKBPBKOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DKDHIBANDGN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_DKDHIBANDGN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NHHCKBPBKOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHHCKBPBKOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::AMEJINLIOOH HJFCIELMJPA()
	{
		return ((::AMEJINLIOOH(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_HJFCIELMJPA_OFFSET))(this);
	}

	/*
	static ::NHHCKBPBKOP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NHHCKBPBKOP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 FFKHMCMEDGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHCKBPBKOP_FFKHMCMEDGL_OFFSET))(this);
	}
};
