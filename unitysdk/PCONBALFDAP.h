#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PCONBALFDAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PCONBALFDAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PCONBALFDAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCONBALFDAP_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PCONBALFDAP_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PCONBALFDAP_NLDOFOPJPMF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PCONBALFDAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0AACE0)
#define PCONBALFDAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PCONBALFDAP_TypeDefinitionIndex = 10636;

struct alignas(4) PCONBALFDAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBALFDAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCONBALFDAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JFNBMOEDJKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBALFDAP_JFNBMOEDJKH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBALFDAP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PCONBALFDAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCONBALFDAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCONBALFDAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PCONBALFDAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PCONBALFDAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PCONBALFDAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBALFDAP_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::String* NLDOFOPJPMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBALFDAP_NLDOFOPJPMF_OFFSET))(this);
	}
};
