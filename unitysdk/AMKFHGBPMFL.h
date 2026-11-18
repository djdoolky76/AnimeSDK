#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AMKFHGBPMFL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AMKFHGBPMFL_BANIDLIIAJE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AMKFHGBPMFL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AMKFHGBPMFL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMKFHGBPMFL_HCNDNEJBLNK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AMKFHGBPMFL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15774F10)
#define AMKFHGBPMFL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AMKFHGBPMFL_TypeDefinitionIndex = 15803;

struct alignas(4) AMKFHGBPMFL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFHGBPMFL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMKFHGBPMFL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AMKFHGBPMFL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMKFHGBPMFL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMKFHGBPMFL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMKFHGBPMFL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AMKFHGBPMFL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AMKFHGBPMFL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HCNDNEJBLNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFHGBPMFL_HCNDNEJBLNK_OFFSET))(this);
	}

	::System::String* BANIDLIIAJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFHGBPMFL_BANIDLIIAJE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKFHGBPMFL_ACOEONABOJL_OFFSET))(this);
	}
};
