#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFPCIMPDFDL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFPCIMPDFDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFPCIMPDFDL_DINHBABEPNA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OFPCIMPDFDL_DMDIGEODHBK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OFPCIMPDFDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFPCIMPDFDL_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OFPCIMPDFDL_LJAAFEHAMEC_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define OFPCIMPDFDL_MCCPKCIMFEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define OFPCIMPDFDL_MPOOMDLNBKH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OFPCIMPDFDL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCFAC40)
#define OFPCIMPDFDL_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define OFPCIMPDFDL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFPCIMPDFDL_TypeDefinitionIndex = 14556;

struct alignas(4) OFPCIMPDFDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFPCIMPDFDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DINHBABEPNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_DINHBABEPNA_OFFSET))(this);
	}

	::System::Single LJAAFEHAMEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_LJAAFEHAMEC_OFFSET))(this);
	}

	/*
	::OFPCIMPDFDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFPCIMPDFDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MCCPKCIMFEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_MCCPKCIMFEC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_PDAADHDFGKP_OFFSET))(this);
	}

	::System::String* DMDIGEODHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_DMDIGEODHBK_OFFSET))(this);
	}

	::System::String* GIJGALKAMHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_GIJGALKAMHI_OFFSET))(this);
	}

	/*
	static ::OFPCIMPDFDL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFPCIMPDFDL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MPOOMDLNBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPCIMPDFDL_MPOOMDLNBKH_OFFSET))(this);
	}
};
