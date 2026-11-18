#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AJAOPPLDCMA_BHBJLCJGIKI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AJAOPPLDCMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AJAOPPLDCMA_EMOACCCKGNN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AJAOPPLDCMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJAOPPLDCMA_KKLEPOENOGC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AJAOPPLDCMA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194EB8D0)
#define AJAOPPLDCMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AJAOPPLDCMA_TypeDefinitionIndex = 9837;

struct alignas(4) AJAOPPLDCMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAOPPLDCMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJAOPPLDCMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EMOACCCKGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAOPPLDCMA_EMOACCCKGNN_OFFSET))(this);
	}

	::System::Int32 BHBJLCJGIKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAOPPLDCMA_BHBJLCJGIKI_OFFSET))(this);
	}

	::System::String* KKLEPOENOGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAOPPLDCMA_KKLEPOENOGC_OFFSET))(this);
	}

	/*
	static ::AJAOPPLDCMA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AJAOPPLDCMA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AJAOPPLDCMA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::AJAOPPLDCMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJAOPPLDCMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJAOPPLDCMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
