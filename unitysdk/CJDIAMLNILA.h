#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CJDIAMLNILA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CJDIAMLNILA_FOEJGHMILGD_1_OFFSET UNITYSDK_OFFSET(0x17F12470)
#define CJDIAMLNILA_FOEJGHMILGD_OFFSET UNITYSDK_OFFSET(0x17F12410)
#define CJDIAMLNILA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJDIAMLNILA_LIPELOIJHME_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define CJDIAMLNILA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CJDIAMLNILA_TypeDefinitionIndex = 10090;

struct alignas(4) CJDIAMLNILA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIAMLNILA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJDIAMLNILA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LIPELOIJHME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIAMLNILA_LIPELOIJHME_OFFSET))(this);
	}

	/*
	::CJDIAMLNILA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJDIAMLNILA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJDIAMLNILA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CJDIAMLNILA FOEJGHMILGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CJDIAMLNILA EIFONLCJOPG)
	{
		return ((::CJDIAMLNILA(*)(::FlatBuffers::ByteBuffer*, ::CJDIAMLNILA))((::PBYTE)hIl2Cpp + CJDIAMLNILA_FOEJGHMILGD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CJDIAMLNILA FOEJGHMILGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJDIAMLNILA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJDIAMLNILA_FOEJGHMILGD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
