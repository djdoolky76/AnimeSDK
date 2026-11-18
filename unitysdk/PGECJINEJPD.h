#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HOALPDNFMKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PGECJINEJPD_AKGMBOBKNHP_OFFSET UNITYSDK_OFFSET(0x761360)
#define PGECJINEJPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PGECJINEJPD_CGCIMHEHKHH_OFFSET UNITYSDK_OFFSET(0x7F03F0)
#define PGECJINEJPD_COJPLEKMCAM_OFFSET UNITYSDK_OFFSET(0x757190)
#define PGECJINEJPD_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x758780)
#define PGECJINEJPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGECJINEJPD_KBKIJOECGMP_OFFSET UNITYSDK_OFFSET(0x761500)
#define PGECJINEJPD_KKBHHBGNJEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PGECJINEJPD_LHPKENAIGGM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PGECJINEJPD_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PGECJINEJPD_MCEPAJALAMC_OFFSET UNITYSDK_OFFSET(0x754C20)
#define PGECJINEJPD_MNEELPECLKH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PGECJINEJPD_NAOPMIEPJME_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PGECJINEJPD_NEACPOMGDIM_OFFSET UNITYSDK_OFFSET(0x755790)
#define PGECJINEJPD_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PGECJINEJPD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DD9D30)
#define PGECJINEJPD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PGECJINEJPD_TypeDefinitionIndex = 11693;

struct alignas(4) PGECJINEJPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGECJINEJPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean CGCIMHEHKHH(::System::Int32 HPMEONKHFGG, ::HOALPDNFMKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOALPDNFMKD&))((::PBYTE)hIl2Cpp + PGECJINEJPD_CGCIMHEHKHH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LHPKENAIGGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_LHPKENAIGGM_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Boolean KBKIJOECGMP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PGECJINEJPD_KBKIJOECGMP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MNEELPECLKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_MNEELPECLKH_OFFSET))(this);
	}

	/*
	static ::PGECJINEJPD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PGECJINEJPD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PGECJINEJPD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 KKBHHBGNJEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_KKBHHBGNJEB_OFFSET))(this);
	}

	::System::Int32 NEACPOMGDIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_NEACPOMGDIM_OFFSET))(this);
	}

	/*
	::PGECJINEJPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGECJINEJPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGECJINEJPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MCEPAJALAMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_MCEPAJALAMC_OFFSET))(this);
	}

	::System::Boolean AKGMBOBKNHP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PGECJINEJPD_AKGMBOBKNHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 NAOPMIEPJME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_NAOPMIEPJME_OFFSET))(this);
	}

	::System::String* COJPLEKMCAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECJINEJPD_COJPLEKMCAM_OFFSET))(this);
	}
};
