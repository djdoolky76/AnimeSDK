#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HGNPHBLJLDD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HGNPHBLJLDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HGNPHBLJLDD_DBHNLGHAJGL_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define HGNPHBLJLDD_FOCNOCFGOAE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HGNPHBLJLDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGNPHBLJLDD_MNPLHFFAKCL_OFFSET UNITYSDK_OFFSET(0x754C20)
#define HGNPHBLJLDD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HGNPHBLJLDD_TypeDefinitionIndex = 14661;

struct alignas(4) HGNPHBLJLDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNPHBLJLDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGNPHBLJLDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MNPLHFFAKCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNPHBLJLDD_MNPLHFFAKCL_OFFSET))(this);
	}

	::System::Int32 FOCNOCFGOAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNPHBLJLDD_FOCNOCFGOAE_OFFSET))(this);
	}

	/*
	::HGNPHBLJLDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGNPHBLJLDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGNPHBLJLDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNPHBLJLDD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DBHNLGHAJGL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HGNPHBLJLDD_DBHNLGHAJGL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
