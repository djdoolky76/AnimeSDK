#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CIFEGFFDEHM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CIFEGFFDEHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CIFEGFFDEHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIFEGFFDEHM_IBLMGEIIAPC_OFFSET UNITYSDK_OFFSET(0x757190)
#define CIFEGFFDEHM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18789E50)
#define CIFEGFFDEHM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CIFEGFFDEHM_TypeDefinitionIndex = 13353;

struct alignas(4) CIFEGFFDEHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFEGFFDEHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIFEGFFDEHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFEGFFDEHM_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IBLMGEIIAPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFEGFFDEHM_IBLMGEIIAPC_OFFSET))(this);
	}

	/*
	::CIFEGFFDEHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIFEGFFDEHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIFEGFFDEHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CIFEGFFDEHM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CIFEGFFDEHM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CIFEGFFDEHM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
