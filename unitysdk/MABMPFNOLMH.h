#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MABMPFNOLMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MABMPFNOLMH_BLJEBBLMGOO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MABMPFNOLMH_BOIFJNJCMPF_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define MABMPFNOLMH_CCOHDDGJFPK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MABMPFNOLMH_FFIEMMHNAPI_OFFSET UNITYSDK_OFFSET(0x757290)
#define MABMPFNOLMH_GALAKNAKPBN_OFFSET UNITYSDK_OFFSET(0x757190)
#define MABMPFNOLMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MABMPFNOLMH_HBCEIOOMHNL_OFFSET UNITYSDK_OFFSET(0x755890)
#define MABMPFNOLMH_IJGJNKBAFBD_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MABMPFNOLMH_JGBHHECFMCC_OFFSET UNITYSDK_OFFSET(0x755190)
#define MABMPFNOLMH_KFHMHDLPFDE_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define MABMPFNOLMH_KFOBDHNFPNO_OFFSET UNITYSDK_OFFSET(0x757E20)
#define MABMPFNOLMH_LFGGPDLBCCE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MABMPFNOLMH_MGHIOHCGOHB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MABMPFNOLMH_MONJKFELBMC_OFFSET UNITYSDK_OFFSET(0x757330)
#define MABMPFNOLMH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C07F160)
#define MABMPFNOLMH_OBIIAPCLKKA_OFFSET UNITYSDK_OFFSET(0x763920)
#define MABMPFNOLMH_OJPHPIANIIB_OFFSET UNITYSDK_OFFSET(0x754D50)
#define MABMPFNOLMH_ONLBCJKMJJG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MABMPFNOLMH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MABMPFNOLMH_TypeDefinitionIndex = 15331;

struct alignas(4) MABMPFNOLMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MABMPFNOLMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MABMPFNOLMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MABMPFNOLMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MABMPFNOLMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ONLBCJKMJJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_ONLBCJKMJJG_OFFSET))(this);
	}

	::System::String* BOIFJNJCMPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_BOIFJNJCMPF_OFFSET))(this);
	}

	::System::Int32 CCOHDDGJFPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_CCOHDDGJFPK_OFFSET))(this);
	}

	::System::Int32 LFGGPDLBCCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_LFGGPDLBCCE_OFFSET))(this);
	}

	::System::Int32 MONJKFELBMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_MONJKFELBMC_OFFSET))(this);
	}

	::System::String* FFIEMMHNAPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_FFIEMMHNAPI_OFFSET))(this);
	}

	::System::Boolean KFHMHDLPFDE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MABMPFNOLMH_KFHMHDLPFDE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* IJGJNKBAFBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_IJGJNKBAFBD_OFFSET))(this);
	}

	::System::Int32 HBCEIOOMHNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_HBCEIOOMHNL_OFFSET))(this);
	}

	::System::Int32 JGBHHECFMCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_JGBHHECFMCC_OFFSET))(this);
	}

	::System::String* GALAKNAKPBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_GALAKNAKPBN_OFFSET))(this);
	}

	::System::String* KFOBDHNFPNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_KFOBDHNFPNO_OFFSET))(this);
	}

	::System::Boolean OBIIAPCLKKA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MABMPFNOLMH_OBIIAPCLKKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MGHIOHCGOHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_MGHIOHCGOHB_OFFSET))(this);
	}

	::System::String* BLJEBBLMGOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_BLJEBBLMGOO_OFFSET))(this);
	}

	/*
	static ::MABMPFNOLMH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MABMPFNOLMH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MABMPFNOLMH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OJPHPIANIIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABMPFNOLMH_OJPHPIANIIB_OFFSET))(this);
	}
};
