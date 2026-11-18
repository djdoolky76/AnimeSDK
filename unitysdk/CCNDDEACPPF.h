#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CCNDDEACPPF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CCNDDEACPPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CCNDDEACPPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCNDDEACPPF_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CCNDDEACPPF_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CCNDDEACPPF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17764130)
#define CCNDDEACPPF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CCNDDEACPPF_TypeDefinitionIndex = 13226;

struct alignas(4) CCNDDEACPPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNDDEACPPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCNDDEACPPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNDDEACPPF_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNDDEACPPF_IGLFKIBEGGH_OFFSET))(this);
	}

	/*
	::CCNDDEACPPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCNDDEACPPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCNDDEACPPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNDDEACPPF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::CCNDDEACPPF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CCNDDEACPPF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CCNDDEACPPF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
