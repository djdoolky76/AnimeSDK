#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DLDDFONBNBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DLDDFONBNBO_CCILANFMGLI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DLDDFONBNBO_CKBJABCIEFK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DLDDFONBNBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLDDFONBNBO_IKIAAIOKMHE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DLDDFONBNBO_LOOJKEPLFJL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DLDDFONBNBO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9AA340)
#define DLDDFONBNBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DLDDFONBNBO_TypeDefinitionIndex = 9733;

struct alignas(4) DLDDFONBNBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDDFONBNBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLDDFONBNBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LOOJKEPLFJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDDFONBNBO_LOOJKEPLFJL_OFFSET))(this);
	}

	::System::String* IKIAAIOKMHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDDFONBNBO_IKIAAIOKMHE_OFFSET))(this);
	}

	/*
	::DLDDFONBNBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLDDFONBNBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLDDFONBNBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DLDDFONBNBO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DLDDFONBNBO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DLDDFONBNBO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CCILANFMGLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDDFONBNBO_CCILANFMGLI_OFFSET))(this);
	}

	::System::String* CKBJABCIEFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDDFONBNBO_CKBJABCIEFK_OFFSET))(this);
	}
};
