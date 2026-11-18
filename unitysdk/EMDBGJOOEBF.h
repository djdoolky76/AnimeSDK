#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EMDBGJOOEBF_AEFGCMFCHPM_OFFSET UNITYSDK_OFFSET(0x758200)
#define EMDBGJOOEBF_AKFFCCINILC_OFFSET UNITYSDK_OFFSET(0x757760)
#define EMDBGJOOEBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EMDBGJOOEBF_BPEFGGAJGFI_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define EMDBGJOOEBF_CAJODGLMODN_OFFSET UNITYSDK_OFFSET(0x754D50)
#define EMDBGJOOEBF_CMFOIDBGKAN_OFFSET UNITYSDK_OFFSET(0x7E3690)
#define EMDBGJOOEBF_DAIMGPJHDMA_OFFSET UNITYSDK_OFFSET(0x755890)
#define EMDBGJOOEBF_DDKABILOCKJ_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define EMDBGJOOEBF_EHPMFKFCIPM_OFFSET UNITYSDK_OFFSET(0x7D74A0)
#define EMDBGJOOEBF_EIDGHCMIECD_OFFSET UNITYSDK_OFFSET(0x7E9D80)
#define EMDBGJOOEBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMDBGJOOEBF_HBCEIOOMHNL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EMDBGJOOEBF_JEAMCMMEPIB_OFFSET UNITYSDK_OFFSET(0x762D20)
#define EMDBGJOOEBF_KCMKIJPKOAJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define EMDBGJOOEBF_LJJIBPDDEKL_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define EMDBGJOOEBF_MFBKNJPFEJK_OFFSET UNITYSDK_OFFSET(0x756720)
#define EMDBGJOOEBF_MGIABLLHGPI_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EMDBGJOOEBF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A59F1D0)
#define EMDBGJOOEBF_OMLPOFFJKNK_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define EMDBGJOOEBF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EMDBGJOOEBF_TypeDefinitionIndex = 14109;

struct alignas(4) EMDBGJOOEBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDBGJOOEBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean AEFGCMFCHPM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_AEFGCMFCHPM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KCMKIJPKOAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_KCMKIJPKOAJ_OFFSET))(this);
	}

	/*
	static ::EMDBGJOOEBF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EMDBGJOOEBF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean EIDGHCMIECD(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_EIDGHCMIECD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean DDKABILOCKJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_DDKABILOCKJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EMDBGJOOEBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMDBGJOOEBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single EHPMFKFCIPM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_EHPMFKFCIPM_OFFSET))(this);
	}

	::System::Int32 OMLPOFFJKNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_OMLPOFFJKNK_OFFSET))(this);
	}

	::System::Boolean CMFOIDBGKAN(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_CMFOIDBGKAN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MFBKNJPFEJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_MFBKNJPFEJK_OFFSET))(this);
	}

	::System::Int32 DAIMGPJHDMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_DAIMGPJHDMA_OFFSET))(this);
	}

	::System::String* AKFFCCINILC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_AKFFCCINILC_OFFSET))(this);
	}

	::System::Int32 CAJODGLMODN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_CAJODGLMODN_OFFSET))(this);
	}

	::System::Int32 JEAMCMMEPIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_JEAMCMMEPIB_OFFSET))(this);
	}

	::System::Single BPEFGGAJGFI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_BPEFGGAJGFI_OFFSET))(this);
	}

	::System::Int32 LJJIBPDDEKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_LJJIBPDDEKL_OFFSET))(this);
	}

	::System::Int32 HBCEIOOMHNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_HBCEIOOMHNL_OFFSET))(this);
	}

	::System::Boolean MGIABLLHGPI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EMDBGJOOEBF_MGIABLLHGPI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
