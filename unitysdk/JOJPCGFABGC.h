#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JOJPCGFABGC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JOJPCGFABGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOJPCGFABGC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x754970)
#define JOJPCGFABGC_BNOEGBFALOK_OFFSET UNITYSDK_OFFSET(0x757290)
#define JOJPCGFABGC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JOJPCGFABGC_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JOJPCGFABGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOJPCGFABGC_KMOFCDFBLLL_OFFSET UNITYSDK_OFFSET(0x754920)
#define JOJPCGFABGC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x193642F0)
#define JOJPCGFABGC_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JOJPCGFABGC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOJPCGFABGC_TypeDefinitionIndex = 17415;

struct alignas(4) JOJPCGFABGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOJPCGFABGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KMOFCDFBLLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_KMOFCDFBLLL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_PMBCAKACFJP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::JOJPCGFABGC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JOJPCGFABGC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JOJPCGFABGC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JOJPCGFABGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOJPCGFABGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOJPCGFABGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BNOEGBFALOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPCGFABGC_BNOEGBFALOK_OFFSET))(this);
	}
};
