#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DDJFCBKNLND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DDJFCBKNLND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDJFCBKNLND_KPGNDDPKJHP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DDJFCBKNLND_LCCCJKDFOJN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DDJFCBKNLND_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1777CC20)
#define DDJFCBKNLND___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DDJFCBKNLND_TypeDefinitionIndex = 16471;

struct alignas(4) DDJFCBKNLND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJFCBKNLND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDJFCBKNLND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DDJFCBKNLND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDJFCBKNLND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDJFCBKNLND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LCCCJKDFOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJFCBKNLND_LCCCJKDFOJN_OFFSET))(this);
	}

	::System::Int32 KPGNDDPKJHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJFCBKNLND_KPGNDDPKJHP_OFFSET))(this);
	}

	/*
	static ::DDJFCBKNLND OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DDJFCBKNLND(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DDJFCBKNLND_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
