#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KIJPBFINKHN_AHLBLHIEIBO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KIJPBFINKHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KIJPBFINKHN_BILKNJGDEEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KIJPBFINKHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIJPBFINKHN_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KIJPBFINKHN_NABOMJPMBLC_OFFSET UNITYSDK_OFFSET(0x754920)
#define KIJPBFINKHN_OFFEFJLMNHM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KIJPBFINKHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KIJPBFINKHN_TypeDefinitionIndex = 16662;

struct alignas(4) KIJPBFINKHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPBFINKHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIJPBFINKHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KIJPBFINKHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIJPBFINKHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIJPBFINKHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NABOMJPMBLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPBFINKHN_NABOMJPMBLC_OFFSET))(this);
	}

	::System::Int32 AHLBLHIEIBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPBFINKHN_AHLBLHIEIBO_OFFSET))(this);
	}

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPBFINKHN_IMFELMMICNE_OFFSET))(this);
	}

	::System::Int32 BILKNJGDEEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPBFINKHN_BILKNJGDEEM_OFFSET))(this);
	}

	::System::Int32 OFFEFJLMNHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJPBFINKHN_OFFEFJLMNHM_OFFSET))(this);
	}
};
