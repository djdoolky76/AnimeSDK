#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HEBEDMJMODF_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HEBEDMJMODF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HEBEDMJMODF_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HEBEDMJMODF_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HEBEDMJMODF_FLMBHFDFDGA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HEBEDMJMODF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEBEDMJMODF_IOCKOEBLAJI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HEBEDMJMODF_MNNPIMEDAII_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HEBEDMJMODF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152D7E90)
#define HEBEDMJMODF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HEBEDMJMODF_TypeDefinitionIndex = 9440;

struct alignas(4) HEBEDMJMODF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEBEDMJMODF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IOCKOEBLAJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_IOCKOEBLAJI_OFFSET))(this);
	}

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_BPOPIDFJDBK_OFFSET))(this);
	}

	::System::String* FLMBHFDFDGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_FLMBHFDFDGA_OFFSET))(this);
	}

	::System::String* MNNPIMEDAII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_MNNPIMEDAII_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_DCGJGALIIHB_OFFSET))(this);
	}

	/*
	static ::HEBEDMJMODF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HEBEDMJMODF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HEBEDMJMODF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACDOMAEJONK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBEDMJMODF_ACDOMAEJONK_OFFSET))(this);
	}

	/*
	::HEBEDMJMODF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEBEDMJMODF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEBEDMJMODF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
