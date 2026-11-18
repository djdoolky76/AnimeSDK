#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CGBMAGMKCLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGBMAGMKCLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGBMAGMKCLD_GKKONHLMHNB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CGBMAGMKCLD_HLBENCPMFPG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGBMAGMKCLD_IIAIECHJGOP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CGBMAGMKCLD_KFEJHGGDOMP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CGBMAGMKCLD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F0C790)
#define CGBMAGMKCLD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGBMAGMKCLD_TypeDefinitionIndex = 10846;

struct alignas(4) CGBMAGMKCLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGBMAGMKCLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IIAIECHJGOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_IIAIECHJGOP_OFFSET))(this);
	}

	::System::String* GKKONHLMHNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_GKKONHLMHNB_OFFSET))(this);
	}

	/*
	static ::CGBMAGMKCLD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CGBMAGMKCLD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HLBENCPMFPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_HLBENCPMFPG_OFFSET))(this);
	}

	::System::String* KFEJHGGDOMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_KFEJHGGDOMP_OFFSET))(this);
	}

	/*
	::CGBMAGMKCLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGBMAGMKCLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGBMAGMKCLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
