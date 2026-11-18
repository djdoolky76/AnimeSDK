#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NDMCLCBFPLM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDMCLCBFPLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDMCLCBFPLM_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NDMCLCBFPLM_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NDMCLCBFPLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDMCLCBFPLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0C3010)
#define NDMCLCBFPLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDMCLCBFPLM_TypeDefinitionIndex = 16630;

struct alignas(4) NDMCLCBFPLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMCLCBFPLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDMCLCBFPLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NDMCLCBFPLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDMCLCBFPLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDMCLCBFPLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMCLCBFPLM_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	::NDMCLCBFPLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDMCLCBFPLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDMCLCBFPLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMCLCBFPLM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMCLCBFPLM_FBMIEJIGIED_OFFSET))(this);
	}
};
