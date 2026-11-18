#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FJGAAHNJJHA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FJGAAHNJJHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FJGAAHNJJHA_BMIONKJFOAF_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define FJGAAHNJJHA_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FJGAAHNJJHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJGAAHNJJHA_HHGPCIBNNOP_OFFSET UNITYSDK_OFFSET(0x755710)
#define FJGAAHNJJHA_JHJBHPBECHN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FJGAAHNJJHA_LDPBJGMJMEB_OFFSET UNITYSDK_OFFSET(0x7A7A10)
#define FJGAAHNJJHA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17460590)
#define FJGAAHNJJHA_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x757290)
#define FJGAAHNJJHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FJGAAHNJJHA_TypeDefinitionIndex = 11450;

struct alignas(4) FJGAAHNJJHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJGAAHNJJHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::FJGAAHNJJHA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FJGAAHNJJHA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::FJGAAHNJJHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJGAAHNJJHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JHJBHPBECHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_JHJBHPBECHN_OFFSET))(this);
	}

	::System::String* BMIONKJFOAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_BMIONKJFOAF_OFFSET))(this);
	}

	::System::String* PIPBPLEIPFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::UInt64 LDPBJGMJMEB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_LDPBJGMJMEB_OFFSET))(this);
	}

	::System::String* HHGPCIBNNOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGAAHNJJHA_HHGPCIBNNOP_OFFSET))(this);
	}
};
