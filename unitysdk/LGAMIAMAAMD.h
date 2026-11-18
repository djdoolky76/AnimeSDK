#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LGAMIAMAAMD_BEFEHMPJGIF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGAMIAMAAMD_BGFCDCOEGMC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LGAMIAMAAMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGAMIAMAAMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGAMIAMAAMD_HCLGEHMIHDJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define LGAMIAMAAMD_HJIINILNJMI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LGAMIAMAAMD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA860D0)
#define LGAMIAMAAMD_POGDKJNPPOM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LGAMIAMAAMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGAMIAMAAMD_TypeDefinitionIndex = 9244;

struct alignas(4) LGAMIAMAAMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAMIAMAAMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BEFEHMPJGIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_BEFEHMPJGIF_OFFSET))(this);
	}

	::System::Int32 BGFCDCOEGMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_BGFCDCOEGMC_OFFSET))(this);
	}

	::System::Int32 HCLGEHMIHDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_HCLGEHMIHDJ_OFFSET))(this);
	}

	::System::String* POGDKJNPPOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_POGDKJNPPOM_OFFSET))(this);
	}

	::System::String* HJIINILNJMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_HJIINILNJMI_OFFSET))(this);
	}

	/*
	::LGAMIAMAAMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGAMIAMAAMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LGAMIAMAAMD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LGAMIAMAAMD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LGAMIAMAAMD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
