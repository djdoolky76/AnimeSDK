#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EFPEKOBFDLH_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EFPEKOBFDLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EFPEKOBFDLH_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EFPEKOBFDLH_FFBAKOGFKHJ_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define EFPEKOBFDLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFPEKOBFDLH_HOPFMLBPBEL_OFFSET UNITYSDK_OFFSET(0x8093C0)
#define EFPEKOBFDLH_LHFGALEMKAC_OFFSET UNITYSDK_OFFSET(0x754A70)
#define EFPEKOBFDLH_OKGHLEBHPLP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EFPEKOBFDLH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EFPEKOBFDLH_TypeDefinitionIndex = 10029;

struct alignas(4) EFPEKOBFDLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFPEKOBFDLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OKGHLEBHPLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_OKGHLEBHPLP_OFFSET))(this);
	}

	/*
	::EFPEKOBFDLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFPEKOBFDLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LHFGALEMKAC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_LHFGALEMKAC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_BHOCGBENING_OFFSET))(this);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_AEAJPKILALJ_OFFSET))(this);
	}

	::System::UInt64 HOPFMLBPBEL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_HOPFMLBPBEL_OFFSET))(this);
	}

	::System::Int32 FFBAKOGFKHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPEKOBFDLH_FFBAKOGFKHJ_OFFSET))(this);
	}
};
