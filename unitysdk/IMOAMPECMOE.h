#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IMOAMPECMOE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IMOAMPECMOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IMOAMPECMOE_CFAPOAADGGI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IMOAMPECMOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMOAMPECMOE_HHPGGKGLDKM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IMOAMPECMOE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19543860)
#define IMOAMPECMOE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IMOAMPECMOE_TypeDefinitionIndex = 15644;

struct alignas(4) IMOAMPECMOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAMPECMOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMOAMPECMOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IMOAMPECMOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMOAMPECMOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMOAMPECMOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAMPECMOE_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HHPGGKGLDKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAMPECMOE_HHPGGKGLDKM_OFFSET))(this);
	}

	/*
	static ::IMOAMPECMOE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IMOAMPECMOE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IMOAMPECMOE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* CFAPOAADGGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOAMPECMOE_CFAPOAADGGI_OFFSET))(this);
	}
};
