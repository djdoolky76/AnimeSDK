#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DMCLDJAKANK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMCLDJAKANK_AEILINHNONN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DMCLDJAKANK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMCLDJAKANK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMCLDJAKANK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19510FC0)
#define DMCLDJAKANK_PIIGHFMBJOF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DMCLDJAKANK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMCLDJAKANK_TypeDefinitionIndex = 17462;

struct alignas(4) DMCLDJAKANK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCLDJAKANK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCLDJAKANK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DMCLDJAKANK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMCLDJAKANK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCLDJAKANK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DMCLDJAKANK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DMCLDJAKANK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DMCLDJAKANK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AEILINHNONN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCLDJAKANK_AEILINHNONN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCLDJAKANK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PIIGHFMBJOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCLDJAKANK_PIIGHFMBJOF_OFFSET))(this);
	}
};
