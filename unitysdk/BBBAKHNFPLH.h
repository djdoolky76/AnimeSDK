#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BBBAKHNFPLH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BBBAKHNFPLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BBBAKHNFPLH_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BBBAKHNFPLH_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BBBAKHNFPLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBBAKHNFPLH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B98CA00)
#define BBBAKHNFPLH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BBBAKHNFPLH_TypeDefinitionIndex = 14411;

struct alignas(4) BBBAKHNFPLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBAKHNFPLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBBAKHNFPLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBAKHNFPLH_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBAKHNFPLH_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	static ::BBBAKHNFPLH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BBBAKHNFPLH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BBBAKHNFPLH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::BBBAKHNFPLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBBAKHNFPLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBBAKHNFPLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBAKHNFPLH_ACOEONABOJL_OFFSET))(this);
	}
};
