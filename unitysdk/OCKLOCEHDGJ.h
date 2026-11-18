#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OCKLOCEHDGJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OCKLOCEHDGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OCKLOCEHDGJ_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OCKLOCEHDGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCKLOCEHDGJ_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OCKLOCEHDGJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCF7CC0)
#define OCKLOCEHDGJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OCKLOCEHDGJ_TypeDefinitionIndex = 14149;

struct alignas(4) OCKLOCEHDGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ_MNBGAIEPADE_OFFSET))(this);
	}

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ_FELDILHMMIK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::OCKLOCEHDGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCKLOCEHDGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OCKLOCEHDGJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OCKLOCEHDGJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OCKLOCEHDGJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
