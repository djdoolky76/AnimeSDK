#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FALCBDAIGNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FALCBDAIGNC_CBKJNPBEIDE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FALCBDAIGNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FALCBDAIGNC_LLNFEILBPKH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FALCBDAIGNC_MKDFMCHKJMK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FALCBDAIGNC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9C0D00)
#define FALCBDAIGNC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FALCBDAIGNC_TypeDefinitionIndex = 9569;

struct alignas(4) FALCBDAIGNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCBDAIGNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FALCBDAIGNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FALCBDAIGNC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FALCBDAIGNC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FALCBDAIGNC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MKDFMCHKJMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCBDAIGNC_MKDFMCHKJMK_OFFSET))(this);
	}

	/*
	::FALCBDAIGNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FALCBDAIGNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FALCBDAIGNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LLNFEILBPKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCBDAIGNC_LLNFEILBPKH_OFFSET))(this);
	}

	::System::Int32 CBKJNPBEIDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCBDAIGNC_CBKJNPBEIDE_OFFSET))(this);
	}
};
