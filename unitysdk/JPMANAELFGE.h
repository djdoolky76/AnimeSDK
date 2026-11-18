#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JPMANAELFGE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JPMANAELFGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JPMANAELFGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPMANAELFGE_JCLEHKNJEFB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JPMANAELFGE_LEMBNGEFJBN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JPMANAELFGE_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JPMANAELFGE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C2EDC0)
#define JPMANAELFGE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JPMANAELFGE_TypeDefinitionIndex = 9311;

struct alignas(4) JPMANAELFGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMANAELFGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPMANAELFGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MCAEFJKLPLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMANAELFGE_MCAEFJKLPLH_OFFSET))(this);
	}

	::System::String* LEMBNGEFJBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMANAELFGE_LEMBNGEFJBN_OFFSET))(this);
	}

	/*
	static ::JPMANAELFGE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JPMANAELFGE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JPMANAELFGE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMANAELFGE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JCLEHKNJEFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMANAELFGE_JCLEHKNJEFB_OFFSET))(this);
	}

	/*
	::JPMANAELFGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPMANAELFGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPMANAELFGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
