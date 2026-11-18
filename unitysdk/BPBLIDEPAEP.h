#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BPBLIDEPAEP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BPBLIDEPAEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BPBLIDEPAEP_DLIGLKOCAHP_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define BPBLIDEPAEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BPBLIDEPAEP_MJGGDOOHGKB_OFFSET UNITYSDK_OFFSET(0x761240)
#define BPBLIDEPAEP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BPBLIDEPAEP_TypeDefinitionIndex = 11023;

struct alignas(4) BPBLIDEPAEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBLIDEPAEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPBLIDEPAEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BPBLIDEPAEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPBLIDEPAEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPBLIDEPAEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBLIDEPAEP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MJGGDOOHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBLIDEPAEP_MJGGDOOHGKB_OFFSET))(this);
	}

	::System::Boolean DLIGLKOCAHP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BPBLIDEPAEP_DLIGLKOCAHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
