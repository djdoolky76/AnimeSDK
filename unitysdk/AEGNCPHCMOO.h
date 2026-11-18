#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AEGNCPHCMOO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AEGNCPHCMOO_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AEGNCPHCMOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AEGNCPHCMOO_GEMBCHCEJDF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AEGNCPHCMOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEGNCPHCMOO_KGBHJICIINB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AEGNCPHCMOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AEGNCPHCMOO_TypeDefinitionIndex = 12353;

struct alignas(4) AEGNCPHCMOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGNCPHCMOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGNCPHCMOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GEMBCHCEJDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGNCPHCMOO_GEMBCHCEJDF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGNCPHCMOO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::AEGNCPHCMOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEGNCPHCMOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGNCPHCMOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGNCPHCMOO_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::String* KGBHJICIINB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGNCPHCMOO_KGBHJICIINB_OFFSET))(this);
	}
};
