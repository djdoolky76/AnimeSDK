#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OEMNFIFIAAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OEMNFIFIAAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEMNFIFIAAK_KIIAOAMIEGN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OEMNFIFIAAK_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OEMNFIFIAAK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0D1660)
#define OEMNFIFIAAK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OEMNFIFIAAK_TypeDefinitionIndex = 16073;

struct alignas(4) OEMNFIFIAAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMNFIFIAAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEMNFIFIAAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OEMNFIFIAAK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OEMNFIFIAAK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OEMNFIFIAAK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KIIAOAMIEGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMNFIFIAAK_KIIAOAMIEGN_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMNFIFIAAK_NLAIFNFGGMA_OFFSET))(this);
	}

	/*
	::OEMNFIFIAAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEMNFIFIAAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEMNFIFIAAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
