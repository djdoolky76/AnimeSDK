#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ELENHPEGALH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ELENHPEGALH_FFEKIKLHOJD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ELENHPEGALH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELENHPEGALH_GGAJLLDGFMP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ELENHPEGALH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B0FD330)
#define ELENHPEGALH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ELENHPEGALH_TypeDefinitionIndex = 11640;

struct alignas(4) ELENHPEGALH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENHPEGALH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELENHPEGALH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ELENHPEGALH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ELENHPEGALH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ELENHPEGALH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GGAJLLDGFMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENHPEGALH_GGAJLLDGFMP_OFFSET))(this);
	}

	::System::String* FFEKIKLHOJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENHPEGALH_FFEKIKLHOJD_OFFSET))(this);
	}

	/*
	::ELENHPEGALH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELENHPEGALH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELENHPEGALH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
