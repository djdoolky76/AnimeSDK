#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KEMILFLDJFP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KEMILFLDJFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KEMILFLDJFP_GBPFFLDIHLD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KEMILFLDJFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEMILFLDJFP_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KEMILFLDJFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B501890)
#define KEMILFLDJFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KEMILFLDJFP_TypeDefinitionIndex = 16419;

struct alignas(4) KEMILFLDJFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMILFLDJFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEMILFLDJFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GBPFFLDIHLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMILFLDJFP_GBPFFLDIHLD_OFFSET))(this);
	}

	/*
	::KEMILFLDJFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEMILFLDJFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEMILFLDJFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KEMILFLDJFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KEMILFLDJFP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KEMILFLDJFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMILFLDJFP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IGLFKIBEGGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMILFLDJFP_IGLFKIBEGGH_OFFSET))(this);
	}
};
