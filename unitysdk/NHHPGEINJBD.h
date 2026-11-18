#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHHPGEINJBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHHPGEINJBD_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHHPGEINJBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHHPGEINJBD_OLDLPCJINBO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NHHPGEINJBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHHPGEINJBD_TypeDefinitionIndex = 10010;

struct alignas(4) NHHPGEINJBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHPGEINJBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHHPGEINJBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHPGEINJBD_ELOAKJLAGOH_OFFSET))(this);
	}

	::System::String* OLDLPCJINBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHHPGEINJBD_OLDLPCJINBO_OFFSET))(this);
	}

	/*
	::NHHPGEINJBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHHPGEINJBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHHPGEINJBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
