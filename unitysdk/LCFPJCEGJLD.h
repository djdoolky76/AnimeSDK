#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LCFPJCEGJLD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCFPJCEGJLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCFPJCEGJLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCFPJCEGJLD_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LCFPJCEGJLD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1612D2B0)
#define LCFPJCEGJLD_PJNJAAEDAED_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LCFPJCEGJLD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCFPJCEGJLD_TypeDefinitionIndex = 17289;

struct alignas(4) LCFPJCEGJLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFPJCEGJLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCFPJCEGJLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFPJCEGJLD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::LCFPJCEGJLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCFPJCEGJLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCFPJCEGJLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LCFPJCEGJLD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LCFPJCEGJLD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCFPJCEGJLD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFPJCEGJLD_HJFCIELMJPA_OFFSET))(this);
	}

	::System::Int32 PJNJAAEDAED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFPJCEGJLD_PJNJAAEDAED_OFFSET))(this);
	}
};
