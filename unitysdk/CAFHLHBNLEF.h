#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CAFHLHBNLEF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CAFHLHBNLEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CAFHLHBNLEF_CPDKDJHHCOB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CAFHLHBNLEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAFHLHBNLEF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A53A9A0)
#define CAFHLHBNLEF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CAFHLHBNLEF_TypeDefinitionIndex = 14536;

struct alignas(4) CAFHLHBNLEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFHLHBNLEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFHLHBNLEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFHLHBNLEF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CPDKDJHHCOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFHLHBNLEF_CPDKDJHHCOB_OFFSET))(this);
	}

	/*
	::CAFHLHBNLEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAFHLHBNLEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFHLHBNLEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CAFHLHBNLEF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CAFHLHBNLEF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CAFHLHBNLEF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
