#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HHDDMODOKLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHDDMODOKLM_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHDDMODOKLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHDDMODOKLM_IHEKKCIGPOF_OFFSET UNITYSDK_OFFSET(0x757290)
#define HHDDMODOKLM_MJOEEOOOFIP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HHDDMODOKLM_NIKHNJEDBMK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HHDDMODOKLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C01080)
#define HHDDMODOKLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHDDMODOKLM_TypeDefinitionIndex = 11948;

struct alignas(4) HHDDMODOKLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDMODOKLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHDDMODOKLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MJOEEOOOFIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDMODOKLM_MJOEEOOOFIP_OFFSET))(this);
	}

	/*
	::HHDDMODOKLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHDDMODOKLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHDDMODOKLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HHDDMODOKLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HHDDMODOKLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HHDDMODOKLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NIKHNJEDBMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDMODOKLM_NIKHNJEDBMK_OFFSET))(this);
	}

	::System::String* IHEKKCIGPOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDMODOKLM_IHEKKCIGPOF_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDDMODOKLM_DNKLBHKEDEM_OFFSET))(this);
	}
};
