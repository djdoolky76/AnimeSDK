#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HENOIOILMGG_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HENOIOILMGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HENOIOILMGG_CJAKLAHOILC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HENOIOILMGG_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HENOIOILMGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HENOIOILMGG_JMOOPMLOIGP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HENOIOILMGG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19530750)
#define HENOIOILMGG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HENOIOILMGG_TypeDefinitionIndex = 14537;

struct alignas(4) HENOIOILMGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENOIOILMGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HENOIOILMGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HENOIOILMGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HENOIOILMGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HENOIOILMGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HENOIOILMGG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HENOIOILMGG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HENOIOILMGG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENOIOILMGG_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENOIOILMGG_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 JMOOPMLOIGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENOIOILMGG_JMOOPMLOIGP_OFFSET))(this);
	}

	::System::Int32 CJAKLAHOILC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENOIOILMGG_CJAKLAHOILC_OFFSET))(this);
	}
};
