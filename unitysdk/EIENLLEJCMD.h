#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EIENLLEJCMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EIENLLEJCMD_CIIHCPIHIBB_OFFSET UNITYSDK_OFFSET(0x755190)
#define EIENLLEJCMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIENLLEJCMD_JCKPJOODNMK_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define EIENLLEJCMD_NEAMKGPGPLF_OFFSET UNITYSDK_OFFSET(0x756780)
#define EIENLLEJCMD_OIPKNOHDFLN_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define EIENLLEJCMD_OMLNMAAAJCE_OFFSET UNITYSDK_OFFSET(0x755D70)
#define EIENLLEJCMD_PAFBGDJPKJF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EIENLLEJCMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EIENLLEJCMD_TypeDefinitionIndex = 17741;

struct alignas(4) EIENLLEJCMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIENLLEJCMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIENLLEJCMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NEAMKGPGPLF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EIENLLEJCMD_NEAMKGPGPLF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OIPKNOHDFLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIENLLEJCMD_OIPKNOHDFLN_OFFSET))(this);
	}

	/*
	::EIENLLEJCMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIENLLEJCMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIENLLEJCMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OMLNMAAAJCE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EIENLLEJCMD_OMLNMAAAJCE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PAFBGDJPKJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIENLLEJCMD_PAFBGDJPKJF_OFFSET))(this);
	}

	::System::Int32 JCKPJOODNMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIENLLEJCMD_JCKPJOODNMK_OFFSET))(this);
	}

	::System::Int32 CIIHCPIHIBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIENLLEJCMD_CIIHCPIHIBB_OFFSET))(this);
	}
};
