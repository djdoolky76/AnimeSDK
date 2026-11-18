#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FACNPAENIFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FACNPAENIFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FACNPAENIFN_HOCKHAAPODL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FACNPAENIFN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AAC5C0)
#define FACNPAENIFN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FACNPAENIFN_TypeDefinitionIndex = 12410;

struct alignas(4) FACNPAENIFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FACNPAENIFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FACNPAENIFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FACNPAENIFN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FACNPAENIFN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FACNPAENIFN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::FACNPAENIFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FACNPAENIFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FACNPAENIFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HOCKHAAPODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FACNPAENIFN_HOCKHAAPODL_OFFSET))(this);
	}
};
