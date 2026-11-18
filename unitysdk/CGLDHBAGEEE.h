#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CGLDHBAGEEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CGLDHBAGEEE_BJLLDMGCCCJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CGLDHBAGEEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGLDHBAGEEE_HDKJKKFGBMA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CGLDHBAGEEE_KDGGGNKFLOE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CGLDHBAGEEE_NIPCEPKFKHA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CGLDHBAGEEE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F2BB30)
#define CGLDHBAGEEE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CGLDHBAGEEE_TypeDefinitionIndex = 13389;

struct alignas(4) CGLDHBAGEEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGLDHBAGEEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KDGGGNKFLOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_KDGGGNKFLOE_OFFSET))(this);
	}

	::System::String* BJLLDMGCCCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_BJLLDMGCCCJ_OFFSET))(this);
	}

	/*
	::CGLDHBAGEEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGLDHBAGEEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HDKJKKFGBMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_HDKJKKFGBMA_OFFSET))(this);
	}

	/*
	static ::CGLDHBAGEEE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CGLDHBAGEEE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NIPCEPKFKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHBAGEEE_NIPCEPKFKHA_OFFSET))(this);
	}
};
