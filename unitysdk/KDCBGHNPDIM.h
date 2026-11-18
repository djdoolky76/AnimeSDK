#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KDCBGHNPDIM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDCBGHNPDIM_BBCJBBLIDBN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define KDCBGHNPDIM_BEIKPKBDCNL_OFFSET UNITYSDK_OFFSET(0x7F5D10)
#define KDCBGHNPDIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDCBGHNPDIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDCBGHNPDIM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDCBGHNPDIM_TypeDefinitionIndex = 13871;

struct alignas(4) KDCBGHNPDIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCBGHNPDIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDCBGHNPDIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCBGHNPDIM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KDCBGHNPDIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDCBGHNPDIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDCBGHNPDIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BBCJBBLIDBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCBGHNPDIM_BBCJBBLIDBN_OFFSET))(this);
	}

	::System::Boolean BEIKPKBDCNL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KDCBGHNPDIM_BEIKPKBDCNL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
