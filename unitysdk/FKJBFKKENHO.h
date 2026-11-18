#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FKJBFKKENHO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FKJBFKKENHO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FKJBFKKENHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FKJBFKKENHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKJBFKKENHO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B109470)
#define FKJBFKKENHO_OKHJNNEJKDG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FKJBFKKENHO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FKJBFKKENHO_TypeDefinitionIndex = 16178;

struct alignas(4) FKJBFKKENHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJBFKKENHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJBFKKENHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FKJBFKKENHO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FKJBFKKENHO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FKJBFKKENHO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJBFKKENHO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJBFKKENHO_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* OKHJNNEJKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJBFKKENHO_OKHJNNEJKDG_OFFSET))(this);
	}

	/*
	::FKJBFKKENHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKJBFKKENHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJBFKKENHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
