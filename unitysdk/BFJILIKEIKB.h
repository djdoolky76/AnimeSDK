#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BFJILIKEIKB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BFJILIKEIKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BFJILIKEIKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFJILIKEIKB_HGCLMLEIGLC_OFFSET UNITYSDK_OFFSET(0x756D50)
#define BFJILIKEIKB_HNFIJFPNEAP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BFJILIKEIKB_KPDGMKDDMAM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BFJILIKEIKB_LACJOALKGMI_OFFSET UNITYSDK_OFFSET(0x754920)
#define BFJILIKEIKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C512EB0)
#define BFJILIKEIKB_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BFJILIKEIKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BFJILIKEIKB_TypeDefinitionIndex = 16366;

struct alignas(4) BFJILIKEIKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFJILIKEIKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HNFIJFPNEAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_HNFIJFPNEAP_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_OEBELJGDNCE_OFFSET))(this);
	}

	::System::String* HGCLMLEIGLC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_HGCLMLEIGLC_OFFSET))(this);
	}

	::System::Int32 KPDGMKDDMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_KPDGMKDDMAM_OFFSET))(this);
	}

	/*
	::BFJILIKEIKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFJILIKEIKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFJILIKEIKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BFJILIKEIKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BFJILIKEIKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BFJILIKEIKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LACJOALKGMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJILIKEIKB_LACJOALKGMI_OFFSET))(this);
	}
};
