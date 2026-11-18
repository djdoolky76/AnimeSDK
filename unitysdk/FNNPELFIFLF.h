#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FNNPELFIFLF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNNPELFIFLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNNPELFIFLF_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FNNPELFIFLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNNPELFIFLF_LPOENFFGGAP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FNNPELFIFLF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AA53B0)
#define FNNPELFIFLF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNNPELFIFLF_TypeDefinitionIndex = 14943;

struct alignas(4) FNNPELFIFLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNPELFIFLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNNPELFIFLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNPELFIFLF_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	static ::FNNPELFIFLF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FNNPELFIFLF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FNNPELFIFLF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::FNNPELFIFLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNNPELFIFLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNNPELFIFLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNPELFIFLF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LPOENFFGGAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNPELFIFLF_LPOENFFGGAP_OFFSET))(this);
	}
};
