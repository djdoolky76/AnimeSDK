#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BGAKBGCEIAJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BGAKBGCEIAJ_BBBJJJABCOG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BGAKBGCEIAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BGAKBGCEIAJ_DJFGOALCAOF_OFFSET UNITYSDK_OFFSET(0x754920)
#define BGAKBGCEIAJ_EGLMIMILBPO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BGAKBGCEIAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGAKBGCEIAJ_HMCBOMGBLIB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BGAKBGCEIAJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BGAKBGCEIAJ_TypeDefinitionIndex = 14826;

struct alignas(4) BGAKBGCEIAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BGAKBGCEIAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGAKBGCEIAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HMCBOMGBLIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_HMCBOMGBLIB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DJFGOALCAOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_DJFGOALCAOF_OFFSET))(this);
	}

	::System::Int32 EGLMIMILBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_EGLMIMILBPO_OFFSET))(this);
	}

	::System::Int32 BBBJJJABCOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKBGCEIAJ_BBBJJJABCOG_OFFSET))(this);
	}
};
