#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NDKCEPAJNDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDKCEPAJNDJ_DHIBMENPJBG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NDKCEPAJNDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDKCEPAJNDJ_HOKOIHJIMKN_OFFSET UNITYSDK_OFFSET(0x754920)
#define NDKCEPAJNDJ_KEGOAOBDLIK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NDKCEPAJNDJ_KJELMKOKAPK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDKCEPAJNDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF69640)
#define NDKCEPAJNDJ_OOJHLJJKMKC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NDKCEPAJNDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDKCEPAJNDJ_TypeDefinitionIndex = 10422;

struct alignas(4) NDKCEPAJNDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KJELMKOKAPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_KJELMKOKAPK_OFFSET))(this);
	}

	::System::Int32 HOKOIHJIMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_HOKOIHJIMKN_OFFSET))(this);
	}

	::System::Int32 DHIBMENPJBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_DHIBMENPJBG_OFFSET))(this);
	}

	/*
	::NDKCEPAJNDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDKCEPAJNDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDKCEPAJNDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDKCEPAJNDJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KEGOAOBDLIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_KEGOAOBDLIK_OFFSET))(this);
	}

	::System::String* OOJHLJJKMKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKCEPAJNDJ_OOJHLJJKMKC_OFFSET))(this);
	}
};
