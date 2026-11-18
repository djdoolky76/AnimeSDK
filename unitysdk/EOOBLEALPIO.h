#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EOOBLEALPIO_ABJICDPJNDO_OFFSET UNITYSDK_OFFSET(0x754C20)
#define EOOBLEALPIO_AGIDPKEIDNP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EOOBLEALPIO_ANKJIMPCCAC_OFFSET UNITYSDK_OFFSET(0x754920)
#define EOOBLEALPIO_BAKHBMHNLKG_OFFSET UNITYSDK_OFFSET(0x757290)
#define EOOBLEALPIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EOOBLEALPIO_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EOOBLEALPIO_DLBMCODFPON_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define EOOBLEALPIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EOOBLEALPIO_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EOOBLEALPIO_HFELKHNAKDL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define EOOBLEALPIO_MCPKFDEMGIE_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define EOOBLEALPIO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F50090)
#define EOOBLEALPIO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EOOBLEALPIO_TypeDefinitionIndex = 16043;

struct alignas(4) EOOBLEALPIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOOBLEALPIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EOOBLEALPIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOOBLEALPIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOOBLEALPIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BAKHBMHNLKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_BAKHBMHNLKG_OFFSET))(this);
	}

	::System::Boolean MCPKFDEMGIE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EOOBLEALPIO_MCPKFDEMGIE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Single DLBMCODFPON()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_DLBMCODFPON_OFFSET))(this);
	}

	::System::String* HDAGGDKMDAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::String* AGIDPKEIDNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_AGIDPKEIDNP_OFFSET))(this);
	}

	::System::Int32 HFELKHNAKDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_HFELKHNAKDL_OFFSET))(this);
	}

	::System::Int32 ABJICDPJNDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_ABJICDPJNDO_OFFSET))(this);
	}

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_BLLOPKJDOBE_OFFSET))(this);
	}

	/*
	static ::EOOBLEALPIO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EOOBLEALPIO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EOOBLEALPIO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ANKJIMPCCAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOBLEALPIO_ANKJIMPCCAC_OFFSET))(this);
	}
};
