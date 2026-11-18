#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LJJIFMDJKCN_ACEFNBBHDOB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LJJIFMDJKCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LJJIFMDJKCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJJIFMDJKCN_KPGNDDPKJHP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LJJIFMDJKCN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD5EB20)
#define LJJIFMDJKCN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LJJIFMDJKCN_TypeDefinitionIndex = 9433;

struct alignas(4) LJJIFMDJKCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIFMDJKCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJJIFMDJKCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACEFNBBHDOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIFMDJKCN_ACEFNBBHDOB_OFFSET))(this);
	}

	/*
	static ::LJJIFMDJKCN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LJJIFMDJKCN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LJJIFMDJKCN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LJJIFMDJKCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJJIFMDJKCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJJIFMDJKCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KPGNDDPKJHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIFMDJKCN_KPGNDDPKJHP_OFFSET))(this);
	}
};
