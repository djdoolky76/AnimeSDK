#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NKNOFMIAIGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NKNOFMIAIGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKNOFMIAIGM_JKCBKJPCDJM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NKNOFMIAIGM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E22100)
#define NKNOFMIAIGM_PNBHJLJFLPB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NKNOFMIAIGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NKNOFMIAIGM_TypeDefinitionIndex = 16081;

struct alignas(4) NKNOFMIAIGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNOFMIAIGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNOFMIAIGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PNBHJLJFLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNOFMIAIGM_PNBHJLJFLPB_OFFSET))(this);
	}

	::System::Int32 JKCBKJPCDJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNOFMIAIGM_JKCBKJPCDJM_OFFSET))(this);
	}

	/*
	::NKNOFMIAIGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKNOFMIAIGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKNOFMIAIGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NKNOFMIAIGM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NKNOFMIAIGM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NKNOFMIAIGM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
