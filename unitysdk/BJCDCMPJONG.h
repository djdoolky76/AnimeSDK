#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BJCDCMPJONG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BJCDCMPJONG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJCDCMPJONG_IBJGAOKNECO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BJCDCMPJONG_KKBHHBGNJEB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BJCDCMPJONG_MHJCDHFIJLI_OFFSET UNITYSDK_OFFSET(0x754920)
#define BJCDCMPJONG_OBAIODHNDJJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define BJCDCMPJONG_OCCMIDACLBK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BJCDCMPJONG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BJCDCMPJONG_TypeDefinitionIndex = 14441;

struct alignas(4) BJCDCMPJONG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCDCMPJONG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJCDCMPJONG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MHJCDHFIJLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCDCMPJONG_MHJCDHFIJLI_OFFSET))(this);
	}

	::System::Int32 IBJGAOKNECO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCDCMPJONG_IBJGAOKNECO_OFFSET))(this);
	}

	::System::Int32 OBAIODHNDJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCDCMPJONG_OBAIODHNDJJ_OFFSET))(this);
	}

	/*
	::BJCDCMPJONG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJCDCMPJONG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJCDCMPJONG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OCCMIDACLBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCDCMPJONG_OCCMIDACLBK_OFFSET))(this);
	}

	::System::Int32 KKBHHBGNJEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCDCMPJONG_KKBHHBGNJEB_OFFSET))(this);
	}
};
