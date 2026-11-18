#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FENLLEGAJGB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FENLLEGAJGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FENLLEGAJGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FENLLEGAJGB_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FENLLEGAJGB_NJIAGCOLGBA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FENLLEGAJGB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FENLLEGAJGB_TypeDefinitionIndex = 15183;

struct alignas(4) FENLLEGAJGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLLEGAJGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FENLLEGAJGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLLEGAJGB_HGODFCFGNDA_OFFSET))(this);
	}

	/*
	::FENLLEGAJGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FENLLEGAJGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FENLLEGAJGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLLEGAJGB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NJIAGCOLGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLLEGAJGB_NJIAGCOLGBA_OFFSET))(this);
	}
};
