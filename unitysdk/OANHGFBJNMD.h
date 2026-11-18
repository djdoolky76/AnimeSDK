#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OANHGFBJNMD_ANHOFEJELEB_OFFSET UNITYSDK_OFFSET(0x756360)
#define OANHGFBJNMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OANHGFBJNMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OANHGFBJNMD_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OANHGFBJNMD_IEAACBODFDC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OANHGFBJNMD_LLGHBHJBHPC_OFFSET UNITYSDK_OFFSET(0x757290)
#define OANHGFBJNMD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFF33A0)
#define OANHGFBJNMD_ONJKBGOCOMH_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define OANHGFBJNMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OANHGFBJNMD_TypeDefinitionIndex = 11116;

struct alignas(4) OANHGFBJNMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANHGFBJNMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANHGFBJNMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IEAACBODFDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANHGFBJNMD_IEAACBODFDC_OFFSET))(this);
	}

	::System::Boolean ANHOFEJELEB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OANHGFBJNMD_ANHOFEJELEB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LLGHBHJBHPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OANHGFBJNMD_LLGHBHJBHPC_OFFSET))(this);
	}

	/*
	static ::OANHGFBJNMD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OANHGFBJNMD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OANHGFBJNMD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OANHGFBJNMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OANHGFBJNMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OANHGFBJNMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANHGFBJNMD_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::Int32 ONJKBGOCOMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OANHGFBJNMD_ONJKBGOCOMH_OFFSET))(this);
	}
};
