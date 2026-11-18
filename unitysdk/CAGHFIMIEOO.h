#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CAGHFIMIEOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CAGHFIMIEOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAGHFIMIEOO_KEABBDPLEAG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CAGHFIMIEOO_MFLIFALMILM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CAGHFIMIEOO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BEFB60)
#define CAGHFIMIEOO_PDEPHNIEDCE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CAGHFIMIEOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CAGHFIMIEOO_TypeDefinitionIndex = 16688;

struct alignas(4) CAGHFIMIEOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGHFIMIEOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAGHFIMIEOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CAGHFIMIEOO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 GAMHBAONNHN, ::System::Int32 LIGLBFCGKML, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CAGHFIMIEOO(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CAGHFIMIEOO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, GAMHBAONNHN, LIGLBFCGKML, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KEABBDPLEAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGHFIMIEOO_KEABBDPLEAG_OFFSET))(this);
	}

	/*
	::CAGHFIMIEOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAGHFIMIEOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAGHFIMIEOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PDEPHNIEDCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGHFIMIEOO_PDEPHNIEDCE_OFFSET))(this);
	}

	::System::Int32 MFLIFALMILM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGHFIMIEOO_MFLIFALMILM_OFFSET))(this);
	}
};
