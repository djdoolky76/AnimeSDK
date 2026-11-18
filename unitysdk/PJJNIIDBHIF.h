#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PJJNIIDBHIF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PJJNIIDBHIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJJNIIDBHIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJJNIIDBHIF_KAANGLODPNE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PJJNIIDBHIF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0B1D20)
#define PJJNIIDBHIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJJNIIDBHIF_TypeDefinitionIndex = 17129;

struct alignas(4) PJJNIIDBHIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJNIIDBHIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJJNIIDBHIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJNIIDBHIF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PJJNIIDBHIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJJNIIDBHIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJJNIIDBHIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KAANGLODPNE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJNIIDBHIF_KAANGLODPNE_OFFSET))(this);
	}

	/*
	static ::PJJNIIDBHIF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PJJNIIDBHIF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PJJNIIDBHIF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
