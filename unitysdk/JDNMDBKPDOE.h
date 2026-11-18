#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JDNMDBKPDOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JDNMDBKPDOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDNMDBKPDOE_ILILIJELLDC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JDNMDBKPDOE_NAMIGMCGBDO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JDNMDBKPDOE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7D8E20)
#define JDNMDBKPDOE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JDNMDBKPDOE_TypeDefinitionIndex = 12371;

struct alignas(4) JDNMDBKPDOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNMDBKPDOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDNMDBKPDOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NAMIGMCGBDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNMDBKPDOE_NAMIGMCGBDO_OFFSET))(this);
	}

	/*
	static ::JDNMDBKPDOE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JDNMDBKPDOE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JDNMDBKPDOE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ILILIJELLDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNMDBKPDOE_ILILIJELLDC_OFFSET))(this);
	}

	/*
	::JDNMDBKPDOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDNMDBKPDOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDNMDBKPDOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
