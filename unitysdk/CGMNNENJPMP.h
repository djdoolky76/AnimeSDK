#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CGMNNENJPMP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGMNNENJPMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGMNNENJPMP_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CGMNNENJPMP_BKPDFJHBNDN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CGMNNENJPMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGMNNENJPMP_JMNININIFAD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define CGMNNENJPMP_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CGMNNENJPMP_MBKDAHKIDLE_OFFSET UNITYSDK_OFFSET(0x754A70)
#define CGMNNENJPMP_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CGMNNENJPMP_PDELMNNDMPC_OFFSET UNITYSDK_OFFSET(0x754970)
#define CGMNNENJPMP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGMNNENJPMP_TypeDefinitionIndex = 17297;

struct alignas(4) CGMNNENJPMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGMNNENJPMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JMNININIFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_JMNININIFAD_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 BKPDFJHBNDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_BKPDFJHBNDN_OFFSET))(this);
	}

	::System::Boolean MBKDAHKIDLE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CGMNNENJPMP_MBKDAHKIDLE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PDELMNNDMPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_PDELMNNDMPC_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNNENJPMP_OLMMLKDHLBJ_OFFSET))(this);
	}

	/*
	::CGMNNENJPMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGMNNENJPMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGMNNENJPMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
