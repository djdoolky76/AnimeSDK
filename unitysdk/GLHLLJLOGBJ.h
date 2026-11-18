#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLHLLJLOGBJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLHLLJLOGBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLHLLJLOGBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLHLLJLOGBJ_MLBLHAFPBHE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GLHLLJLOGBJ_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GLHLLJLOGBJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLHLLJLOGBJ_TypeDefinitionIndex = 12651;

struct alignas(4) GLHLLJLOGBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHLLJLOGBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHLLJLOGBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHLLJLOGBJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::GLHLLJLOGBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLHLLJLOGBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHLLJLOGBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MLBLHAFPBHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHLLJLOGBJ_MLBLHAFPBHE_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHLLJLOGBJ_OKGKODNEICJ_OFFSET))(this);
	}
};
