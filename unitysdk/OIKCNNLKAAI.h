#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OIKCNNLKAAI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OIKCNNLKAAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OIKCNNLKAAI_DPOAIINMNJO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OIKCNNLKAAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIKCNNLKAAI_HGIBLMFOOLI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OIKCNNLKAAI_MCDIEBODAJC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OIKCNNLKAAI_MDFOIEACKHE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OIKCNNLKAAI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B33E790)
#define OIKCNNLKAAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OIKCNNLKAAI_TypeDefinitionIndex = 9843;

struct alignas(4) OIKCNNLKAAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIKCNNLKAAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OIKCNNLKAAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIKCNNLKAAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OIKCNNLKAAI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OIKCNNLKAAI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HGIBLMFOOLI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_HGIBLMFOOLI_OFFSET))(this);
	}

	::System::String* MDFOIEACKHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_MDFOIEACKHE_OFFSET))(this);
	}

	::System::Int32 MCDIEBODAJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_MCDIEBODAJC_OFFSET))(this);
	}

	::System::Int32 DPOAIINMNJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_DPOAIINMNJO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKCNNLKAAI_ACOEONABOJL_OFFSET))(this);
	}
};
