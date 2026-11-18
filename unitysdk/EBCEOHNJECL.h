#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EBCEOHNJECL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBCEOHNJECL_CPHNNMBPFCG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EBCEOHNJECL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBCEOHNJECL_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EBCEOHNJECL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AE1380)
#define EBCEOHNJECL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBCEOHNJECL_TypeDefinitionIndex = 11787;

struct alignas(4) EBCEOHNJECL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOHNJECL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBCEOHNJECL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EBCEOHNJECL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EBCEOHNJECL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EBCEOHNJECL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOHNJECL_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 CPHNNMBPFCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEOHNJECL_CPHNNMBPFCG_OFFSET))(this);
	}

	/*
	::EBCEOHNJECL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBCEOHNJECL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBCEOHNJECL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
