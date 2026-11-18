#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ENIPDPBNCJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ENIPDPBNCJG_CJEJFLJNBGA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ENIPDPBNCJG_FKPALGPDOLC_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define ENIPDPBNCJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENIPDPBNCJG_GOJMDGEEEOB_OFFSET UNITYSDK_OFFSET(0x754C20)
#define ENIPDPBNCJG_MANLOHEKGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ENIPDPBNCJG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187B0000)
#define ENIPDPBNCJG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ENIPDPBNCJG_TypeDefinitionIndex = 12984;

struct alignas(4) ENIPDPBNCJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENIPDPBNCJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GOJMDGEEEOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_GOJMDGEEEOB_OFFSET))(this);
	}

	::System::Boolean FKPALGPDOLC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_FKPALGPDOLC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ENIPDPBNCJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENIPDPBNCJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MANLOHEKGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_MANLOHEKGMA_OFFSET))(this);
	}

	/*
	static ::ENIPDPBNCJG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ENIPDPBNCJG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CJEJFLJNBGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPDPBNCJG_CJEJFLJNBGA_OFFSET))(this);
	}
};
