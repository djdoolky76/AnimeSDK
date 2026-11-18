#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FHBMJDECOGK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHBMJDECOGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHBMJDECOGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHBMJDECOGK_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FHBMJDECOGK_KPHODAIAEKB_OFFSET UNITYSDK_OFFSET(0x758590)
#define FHBMJDECOGK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADE3230)
#define FHBMJDECOGK_PMFAENDEDOB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FHBMJDECOGK_PNMKDCACAFL_OFFSET UNITYSDK_OFFSET(0x754920)
#define FHBMJDECOGK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHBMJDECOGK_TypeDefinitionIndex = 16148;

struct alignas(4) FHBMJDECOGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBMJDECOGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHBMJDECOGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PMFAENDEDOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBMJDECOGK_PMFAENDEDOB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBMJDECOGK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PNMKDCACAFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBMJDECOGK_PNMKDCACAFL_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBMJDECOGK_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Boolean KPHODAIAEKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBMJDECOGK_KPHODAIAEKB_OFFSET))(this);
	}

	/*
	::FHBMJDECOGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHBMJDECOGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHBMJDECOGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHBMJDECOGK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FHBMJDECOGK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FHBMJDECOGK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
