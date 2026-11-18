#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OMENMNEOEMM_AINEJFJPHDB_OFFSET UNITYSDK_OFFSET(0x7A68F0)
#define OMENMNEOEMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMENMNEOEMM_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define OMENMNEOEMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMENMNEOEMM_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x762670)
#define OMENMNEOEMM_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x8AF3E0)
#define OMENMNEOEMM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMENMNEOEMM_TypeDefinitionIndex = 12674;

struct alignas(4) OMENMNEOEMM
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMENMNEOEMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMENMNEOEMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AINEJFJPHDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMENMNEOEMM_AINEJFJPHDB_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMENMNEOEMM_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::OMENMNEOEMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMENMNEOEMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMENMNEOEMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HMONBDBEFGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMENMNEOEMM_HMONBDBEFGE_OFFSET))(this);
	}

	::System::Int32 ELKAHJACJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMENMNEOEMM_ELKAHJACJNC_OFFSET))(this);
	}
};
