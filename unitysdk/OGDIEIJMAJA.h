#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OGDIEIJMAJA_BGKBLDJIFJB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OGDIEIJMAJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OGDIEIJMAJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGDIEIJMAJA_GODNJEDDKCG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OGDIEIJMAJA_IHCPLFBDHHL_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define OGDIEIJMAJA_KNMMMIKFEDD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OGDIEIJMAJA_LJJNKNBHIJE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OGDIEIJMAJA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B33B7A0)
#define OGDIEIJMAJA_OIMGMHCGMJM_OFFSET UNITYSDK_OFFSET(0x755790)
#define OGDIEIJMAJA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OGDIEIJMAJA_TypeDefinitionIndex = 15115;

struct alignas(4) OGDIEIJMAJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGDIEIJMAJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KNMMMIKFEDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_KNMMMIKFEDD_OFFSET))(this);
	}

	::System::Int32 OIMGMHCGMJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_OIMGMHCGMJM_OFFSET))(this);
	}

	::System::Int32 GODNJEDDKCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_GODNJEDDKCG_OFFSET))(this);
	}

	/*
	::OGDIEIJMAJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGDIEIJMAJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LJJNKNBHIJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_LJJNKNBHIJE_OFFSET))(this);
	}

	::System::String* BGKBLDJIFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_BGKBLDJIFJB_OFFSET))(this);
	}

	/*
	static ::OGDIEIJMAJA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OGDIEIJMAJA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean IHCPLFBDHHL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGDIEIJMAJA_IHCPLFBDHHL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
