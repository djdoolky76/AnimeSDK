#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KLDCCFDJDBH_ABAGDFAEMKI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KLDCCFDJDBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLDCCFDJDBH_EHMIGJCFMNA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KLDCCFDJDBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLDCCFDJDBH_LCPCJGBKMGK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLDCCFDJDBH_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KLDCCFDJDBH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLDCCFDJDBH_TypeDefinitionIndex = 16838;

struct alignas(4) KLDCCFDJDBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDCCFDJDBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLDCCFDJDBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LCPCJGBKMGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDCCFDJDBH_LCPCJGBKMGK_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDCCFDJDBH_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::Int32 EHMIGJCFMNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDCCFDJDBH_EHMIGJCFMNA_OFFSET))(this);
	}

	/*
	::KLDCCFDJDBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLDCCFDJDBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLDCCFDJDBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ABAGDFAEMKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDCCFDJDBH_ABAGDFAEMKI_OFFSET))(this);
	}
};
