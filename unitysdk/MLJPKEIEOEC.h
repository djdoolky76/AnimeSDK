#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MLJPKEIEOEC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MLJPKEIEOEC_ALJDBKHNHKH_OFFSET UNITYSDK_OFFSET(0x762A90)
#define MLJPKEIEOEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MLJPKEIEOEC_DBHLGKGNEHG_OFFSET UNITYSDK_OFFSET(0x757520)
#define MLJPKEIEOEC_ELJBDMFJKDB_OFFSET UNITYSDK_OFFSET(0x761C30)
#define MLJPKEIEOEC_FMOLANGCPDH_OFFSET UNITYSDK_OFFSET(0x755260)
#define MLJPKEIEOEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLJPKEIEOEC_IGJGCHMFFPA_OFFSET UNITYSDK_OFFSET(0x761BD0)
#define MLJPKEIEOEC_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x755570)
#define MLJPKEIEOEC_IONGPDGDBKL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MLJPKEIEOEC_JKHDJJHLDFE_OFFSET UNITYSDK_OFFSET(0x7628B0)
#define MLJPKEIEOEC_JKPDKNPBGHO_OFFSET UNITYSDK_OFFSET(0x7A5700)
#define MLJPKEIEOEC_KFBJPEGECNK_OFFSET UNITYSDK_OFFSET(0x762910)
#define MLJPKEIEOEC_LABBPAOONKA_OFFSET UNITYSDK_OFFSET(0x807450)
#define MLJPKEIEOEC_LMKEDHHIEJD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MLJPKEIEOEC_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754F90)
#define MLJPKEIEOEC_LPIOKMMOBCM_OFFSET UNITYSDK_OFFSET(0x7627E0)
#define MLJPKEIEOEC_NKEAAIMELHP_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MLJPKEIEOEC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF5BF00)
#define MLJPKEIEOEC_PPHKOKBGKLC_OFFSET UNITYSDK_OFFSET(0x762A10)
#define MLJPKEIEOEC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MLJPKEIEOEC_TypeDefinitionIndex = 10871;

struct alignas(4) MLJPKEIEOEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLJPKEIEOEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DBHLGKGNEHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_DBHLGKGNEHG_OFFSET))(this);
	}

	::System::Int32 IGJGCHMFFPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_IGJGCHMFFPA_OFFSET))(this);
	}

	::System::Int32 IONGPDGDBKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_IONGPDGDBKL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NKEAAIMELHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_NKEAAIMELHP_OFFSET))(this);
	}

	/*
	::MLJPKEIEOEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLJPKEIEOEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ALJDBKHNHKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_ALJDBKHNHKH_OFFSET))(this);
	}

	::System::Boolean PPHKOKBGKLC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_PPHKOKBGKLC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LMKEDHHIEJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_LMKEDHHIEJD_OFFSET))(this);
	}

	::System::Boolean LABBPAOONKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_LABBPAOONKA_OFFSET))(this);
	}

	::System::Boolean JKPDKNPBGHO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_JKPDKNPBGHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FMOLANGCPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_FMOLANGCPDH_OFFSET))(this);
	}

	::System::Boolean LPIOKMMOBCM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_LPIOKMMOBCM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KFBJPEGECNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_KFBJPEGECNK_OFFSET))(this);
	}

	/*
	static ::MLJPKEIEOEC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MLJPKEIEOEC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_IOIENACFPEP_OFFSET))(this);
	}

	::System::Boolean ELJBDMFJKDB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_ELJBDMFJKDB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JKHDJJHLDFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJPKEIEOEC_JKHDJJHLDFE_OFFSET))(this);
	}
};
