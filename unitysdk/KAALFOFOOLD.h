#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KAALFOFOOLD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KAALFOFOOLD_BCFLHMFEKFL_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define KAALFOFOOLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KAALFOFOOLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KAALFOFOOLD_KOJGNOBNMLB_OFFSET UNITYSDK_OFFSET(0x754C20)
#define KAALFOFOOLD_OCEEOEELJFP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KAALFOFOOLD_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x762060)
#define KAALFOFOOLD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KAALFOFOOLD_TypeDefinitionIndex = 10385;

struct alignas(4) KAALFOFOOLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAALFOFOOLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAALFOFOOLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KOJGNOBNMLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAALFOFOOLD_KOJGNOBNMLB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAALFOFOOLD_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAALFOFOOLD_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::Int32 OCEEOEELJFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAALFOFOOLD_OCEEOEELJFP_OFFSET))(this);
	}

	/*
	::KAALFOFOOLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAALFOFOOLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAALFOFOOLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BCFLHMFEKFL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KAALFOFOOLD_BCFLHMFEKFL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
