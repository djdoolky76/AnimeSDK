#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHGAFEKICKP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHGAFEKICKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHGAFEKICKP_DJIOJICGBLE_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NHGAFEKICKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHGAFEKICKP_LLBHKEGMEHA_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NHGAFEKICKP_NKGBDDPDPEP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NHGAFEKICKP_OCBOPJCMBBH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NHGAFEKICKP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHGAFEKICKP_TypeDefinitionIndex = 13775;

struct alignas(4) NHGAFEKICKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGAFEKICKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHGAFEKICKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NKGBDDPDPEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGAFEKICKP_NKGBDDPDPEP_OFFSET))(this);
	}

	::System::String* OCBOPJCMBBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGAFEKICKP_OCBOPJCMBBH_OFFSET))(this);
	}

	::System::Int32 DJIOJICGBLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGAFEKICKP_DJIOJICGBLE_OFFSET))(this);
	}

	::System::Boolean LLBHKEGMEHA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NHGAFEKICKP_LLBHKEGMEHA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGAFEKICKP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::NHGAFEKICKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHGAFEKICKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHGAFEKICKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
