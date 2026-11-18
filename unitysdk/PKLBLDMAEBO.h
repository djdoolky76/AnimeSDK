#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PKLBLDMAEBO_AAKMMLBCJBG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PKLBLDMAEBO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PKLBLDMAEBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PKLBLDMAEBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKLBLDMAEBO_KPIHJCNKCJF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PKLBLDMAEBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PKLBLDMAEBO_TypeDefinitionIndex = 13066;

struct alignas(4) PKLBLDMAEBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLBLDMAEBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKLBLDMAEBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLBLDMAEBO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PKLBLDMAEBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKLBLDMAEBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKLBLDMAEBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KPIHJCNKCJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLBLDMAEBO_KPIHJCNKCJF_OFFSET))(this);
	}

	::System::String* AAKMMLBCJBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLBLDMAEBO_AAKMMLBCJBG_OFFSET))(this);
	}
};
