#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMKJJBIDALA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMKJJBIDALA_ALMJBHFEOFA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OMKJJBIDALA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMKJJBIDALA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMKJJBIDALA_IEJBHOLKNPO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OMKJJBIDALA_OCFLMJBNMMJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OMKJJBIDALA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMKJJBIDALA_TypeDefinitionIndex = 13251;

struct alignas(4) OMKJJBIDALA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKJJBIDALA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMKJJBIDALA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ALMJBHFEOFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKJJBIDALA_ALMJBHFEOFA_OFFSET))(this);
	}

	/*
	::OMKJJBIDALA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMKJJBIDALA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMKJJBIDALA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OCFLMJBNMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKJJBIDALA_OCFLMJBNMMJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKJJBIDALA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IEJBHOLKNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKJJBIDALA_IEJBHOLKNPO_OFFSET))(this);
	}
};
