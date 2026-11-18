#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CGCGDGHJKMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGCGDGHJKMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGCGDGHJKMD_KFGPECMLBDK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGCGDGHJKMD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A865F0)
#define CGCGDGHJKMD_PJIEHHJMBJK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CGCGDGHJKMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGCGDGHJKMD_TypeDefinitionIndex = 16971;

struct alignas(4) CGCGDGHJKMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCGDGHJKMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGCGDGHJKMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CGCGDGHJKMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGCGDGHJKMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGCGDGHJKMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CGCGDGHJKMD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CGCGDGHJKMD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGCGDGHJKMD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* PJIEHHJMBJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCGDGHJKMD_PJIEHHJMBJK_OFFSET))(this);
	}

	::System::Int32 KFGPECMLBDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCGDGHJKMD_KFGPECMLBDK_OFFSET))(this);
	}
};
