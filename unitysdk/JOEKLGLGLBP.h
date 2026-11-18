#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JOEKLGLGLBP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JOEKLGLGLBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOEKLGLGLBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOEKLGLGLBP_HDNCCEDDKDG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JOEKLGLGLBP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOEKLGLGLBP_TypeDefinitionIndex = 11228;

struct alignas(4) JOEKLGLGLBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEKLGLGLBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOEKLGLGLBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEKLGLGLBP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JOEKLGLGLBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOEKLGLGLBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOEKLGLGLBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HDNCCEDDKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEKLGLGLBP_HDNCCEDDKDG_OFFSET))(this);
	}
};
