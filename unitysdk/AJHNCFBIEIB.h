#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AJHNCFBIEIB_AAOJDLKDDHC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AJHNCFBIEIB_BCEGAGPOEJE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AJHNCFBIEIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AJHNCFBIEIB_CLDPBJMGEHH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define AJHNCFBIEIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJHNCFBIEIB_JJDPHAJMANL_OFFSET UNITYSDK_OFFSET(0x763D00)
#define AJHNCFBIEIB_LGAIBNCHLMB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AJHNCFBIEIB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A6F8D0)
#define AJHNCFBIEIB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AJHNCFBIEIB_TypeDefinitionIndex = 13378;

struct alignas(4) AJHNCFBIEIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJHNCFBIEIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LGAIBNCHLMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_LGAIBNCHLMB_OFFSET))(this);
	}

	/*
	static ::AJHNCFBIEIB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AJHNCFBIEIB(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Span_1_9011FAD97750D224<::System::Byte> JJDPHAJMANL()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_JJDPHAJMANL_OFFSET))(this);
	}

	::System::String* BCEGAGPOEJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_BCEGAGPOEJE_OFFSET))(this);
	}

	::System::String* CLDPBJMGEHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_CLDPBJMGEHH_OFFSET))(this);
	}

	::System::String* AAOJDLKDDHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_AAOJDLKDDHC_OFFSET))(this);
	}

	/*
	::AJHNCFBIEIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJHNCFBIEIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJHNCFBIEIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
