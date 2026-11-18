#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HPDDKDEOBKG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPDDKDEOBKG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPDDKDEOBKG_CFDANFLBKKM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HPDDKDEOBKG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPDDKDEOBKG_HDPHKPFINEF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HPDDKDEOBKG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPDDKDEOBKG_TypeDefinitionIndex = 12698;

struct alignas(4) HPDDKDEOBKG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDDKDEOBKG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPDDKDEOBKG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDDKDEOBKG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HDPHKPFINEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDDKDEOBKG_HDPHKPFINEF_OFFSET))(this);
	}

	/*
	::HPDDKDEOBKG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPDDKDEOBKG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPDDKDEOBKG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CFDANFLBKKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDDKDEOBKG_CFDANFLBKKM_OFFSET))(this);
	}
};
