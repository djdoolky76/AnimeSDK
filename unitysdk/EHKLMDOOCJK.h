#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHKLMDOOCJK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHKLMDOOCJK_BDEMCKIHDHM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EHKLMDOOCJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHKLMDOOCJK_EDCFMJMJEEH_OFFSET UNITYSDK_OFFSET(0x757290)
#define EHKLMDOOCJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHKLMDOOCJK_HHFJACGABNJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define EHKLMDOOCJK_KIHFAPCGIHL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EHKLMDOOCJK_LJJAIJHEBDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EHKLMDOOCJK_MKJFNFLBPIB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHKLMDOOCJK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHKLMDOOCJK_TypeDefinitionIndex = 11700;

struct alignas(4) EHKLMDOOCJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHKLMDOOCJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EHKLMDOOCJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHKLMDOOCJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LJJAIJHEBDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_LJJAIJHEBDP_OFFSET))(this);
	}

	::System::String* BDEMCKIHDHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_BDEMCKIHDHM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HHFJACGABNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_HHFJACGABNJ_OFFSET))(this);
	}

	::System::String* EDCFMJMJEEH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_EDCFMJMJEEH_OFFSET))(this);
	}

	::System::String* KIHFAPCGIHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_KIHFAPCGIHL_OFFSET))(this);
	}

	::System::Int32 MKJFNFLBPIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLMDOOCJK_MKJFNFLBPIB_OFFSET))(this);
	}
};
