#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KDBJMLEODIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDBJMLEODIL_BLJEBBLMGOO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KDBJMLEODIL_CCOHDDGJFPK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDBJMLEODIL_CLIJBNIOLBO_OFFSET UNITYSDK_OFFSET(0x756440)
#define KDBJMLEODIL_DFBIGAOOECL_OFFSET UNITYSDK_OFFSET(0x7D08C0)
#define KDBJMLEODIL_EEBHLJIFKMG_OFFSET UNITYSDK_OFFSET(0x757E20)
#define KDBJMLEODIL_FCJGFIDLKMI_OFFSET UNITYSDK_OFFSET(0x756570)
#define KDBJMLEODIL_FFIEMMHNAPI_OFFSET UNITYSDK_OFFSET(0x755570)
#define KDBJMLEODIL_FMPDLOODELC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KDBJMLEODIL_GAADLJNOFMI_OFFSET UNITYSDK_OFFSET(0x757760)
#define KDBJMLEODIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDBJMLEODIL_HBCEIOOMHNL_OFFSET UNITYSDK_OFFSET(0x754920)
#define KDBJMLEODIL_HDODFNFPACH_OFFSET UNITYSDK_OFFSET(0x754970)
#define KDBJMLEODIL_IJGJNKBAFBD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KDBJMLEODIL_IPJONOOFHFO_OFFSET UNITYSDK_OFFSET(0x757D20)
#define KDBJMLEODIL_JGBHHECFMCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KDBJMLEODIL_JPBHAIMOFIE_OFFSET UNITYSDK_OFFSET(0x755840)
#define KDBJMLEODIL_LGAPHKMPAJP_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define KDBJMLEODIL_MGHIOHCGOHB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KDBJMLEODIL_NIMAEICAPLN_OFFSET UNITYSDK_OFFSET(0x757690)
#define KDBJMLEODIL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BD4960)
#define KDBJMLEODIL_OJAPBCBBAKD_OFFSET UNITYSDK_OFFSET(0x756220)
#define KDBJMLEODIL_ONLBCJKMJJG_OFFSET UNITYSDK_OFFSET(0x757290)
#define KDBJMLEODIL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDBJMLEODIL_TypeDefinitionIndex = 14519;

struct alignas(4) KDBJMLEODIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDBJMLEODIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MGHIOHCGOHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_MGHIOHCGOHB_OFFSET))(this);
	}

	::System::Int32 FMPDLOODELC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_FMPDLOODELC_OFFSET))(this);
	}

	::System::Int32 JGBHHECFMCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_JGBHHECFMCC_OFFSET))(this);
	}

	::System::Boolean DFBIGAOOECL(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + KDBJMLEODIL_DFBIGAOOECL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KDBJMLEODIL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KDBJMLEODIL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KDBJMLEODIL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HDODFNFPACH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_HDODFNFPACH_OFFSET))(this);
	}

	::System::Int32 LGAPHKMPAJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_LGAPHKMPAJP_OFFSET))(this);
	}

	::System::Int32 OJAPBCBBAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_OJAPBCBBAKD_OFFSET))(this);
	}

	::System::String* GAADLJNOFMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_GAADLJNOFMI_OFFSET))(this);
	}

	::System::String* NIMAEICAPLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_NIMAEICAPLN_OFFSET))(this);
	}

	::System::String* IJGJNKBAFBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_IJGJNKBAFBD_OFFSET))(this);
	}

	::System::String* EEBHLJIFKMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_EEBHLJIFKMG_OFFSET))(this);
	}

	::System::String* BLJEBBLMGOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_BLJEBBLMGOO_OFFSET))(this);
	}

	::System::String* FFIEMMHNAPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_FFIEMMHNAPI_OFFSET))(this);
	}

	::System::String* ONLBCJKMJJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_ONLBCJKMJJG_OFFSET))(this);
	}

	::System::String* IPJONOOFHFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_IPJONOOFHFO_OFFSET))(this);
	}

	::System::Int32 JPBHAIMOFIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_JPBHAIMOFIE_OFFSET))(this);
	}

	::System::Int32 CCOHDDGJFPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_CCOHDDGJFPK_OFFSET))(this);
	}

	::System::Int32 CLIJBNIOLBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_CLIJBNIOLBO_OFFSET))(this);
	}

	::System::Boolean FCJGFIDLKMI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KDBJMLEODIL_FCJGFIDLKMI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KDBJMLEODIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDBJMLEODIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDBJMLEODIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HBCEIOOMHNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJMLEODIL_HBCEIOOMHNL_OFFSET))(this);
	}
};
