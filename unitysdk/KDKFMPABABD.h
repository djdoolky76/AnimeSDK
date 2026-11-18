#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KDKFMPABABD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDKFMPABABD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDKFMPABABD_GCOLPNNOBMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KDKFMPABABD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDKFMPABABD_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KDKFMPABABD_LPHAIELJIEF_OFFSET UNITYSDK_OFFSET(0x754920)
#define KDKFMPABABD_MHKEMJDFLIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KDKFMPABABD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDKFMPABABD_TypeDefinitionIndex = 11890;

struct alignas(4) KDKFMPABABD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKFMPABABD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDKFMPABABD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKFMPABABD_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKFMPABABD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LPHAIELJIEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKFMPABABD_LPHAIELJIEF_OFFSET))(this);
	}

	::System::Int32 GCOLPNNOBMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKFMPABABD_GCOLPNNOBMM_OFFSET))(this);
	}

	::System::Int32 MHKEMJDFLIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKFMPABABD_MHKEMJDFLIJ_OFFSET))(this);
	}

	/*
	::KDKFMPABABD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDKFMPABABD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDKFMPABABD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
