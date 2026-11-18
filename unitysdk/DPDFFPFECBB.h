#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DPDFFPFECBB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DPDFFPFECBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DPDFFPFECBB_GEEBNLMMFJA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DPDFFPFECBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPDFFPFECBB_MEAODGHPANO_OFFSET UNITYSDK_OFFSET(0x755790)
#define DPDFFPFECBB_OKAEINFEJJN_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define DPDFFPFECBB_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DPDFFPFECBB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DPDFFPFECBB_TypeDefinitionIndex = 10731;

struct alignas(4) DPDFFPFECBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFFPFECBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPDFFPFECBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MEAODGHPANO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFFPFECBB_MEAODGHPANO_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFFPFECBB_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Boolean OKAEINFEJJN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DPDFFPFECBB_OKAEINFEJJN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GEEBNLMMFJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFFPFECBB_GEEBNLMMFJA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDFFPFECBB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DPDFFPFECBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPDFFPFECBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPDFFPFECBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
