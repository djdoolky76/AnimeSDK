#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BKBEGHIGNFB_AHIGIOMIAJH_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define BKBEGHIGNFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BKBEGHIGNFB_BKKFEJDNEPJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define BKBEGHIGNFB_BKLCMJFKHOE_OFFSET UNITYSDK_OFFSET(0x760650)
#define BKBEGHIGNFB_CFJPBCNALIN_OFFSET UNITYSDK_OFFSET(0x757E20)
#define BKBEGHIGNFB_FBGIGJIBFKP_OFFSET UNITYSDK_OFFSET(0x758780)
#define BKBEGHIGNFB_GCLCCOINOJG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BKBEGHIGNFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKBEGHIGNFB_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define BKBEGHIGNFB_GOBIHJGGNCP_OFFSET UNITYSDK_OFFSET(0x756490)
#define BKBEGHIGNFB_HBOMGJKGDDM_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define BKBEGHIGNFB_HOEDOBNHLKL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define BKBEGHIGNFB_ICCNNGLNPGD_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define BKBEGHIGNFB_IEADGLGOBJC_OFFSET UNITYSDK_OFFSET(0x758320)
#define BKBEGHIGNFB_JIIOGLJEEMM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define BKBEGHIGNFB_JKLDPENLPAM_OFFSET UNITYSDK_OFFSET(0x756440)
#define BKBEGHIGNFB_NDOHADFDACJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define BKBEGHIGNFB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1775DA40)
#define BKBEGHIGNFB_OBBOKGCPPPH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BKBEGHIGNFB_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BKBEGHIGNFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BKBEGHIGNFB_TypeDefinitionIndex = 13846;

struct alignas(4) BKBEGHIGNFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKBEGHIGNFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HOEDOBNHLKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_HOEDOBNHLKL_OFFSET))(this);
	}

	::System::String* CFJPBCNALIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_CFJPBCNALIN_OFFSET))(this);
	}

	/*
	::BKBEGHIGNFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKBEGHIGNFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FBGIGJIBFKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_FBGIGJIBFKP_OFFSET))(this);
	}

	::System::Boolean GOBIHJGGNCP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_GOBIHJGGNCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_PHHIBCKONMD_OFFSET))(this);
	}

	::System::String* JIIOGLJEEMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_JIIOGLJEEMM_OFFSET))(this);
	}

	::System::Boolean AHIGIOMIAJH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_AHIGIOMIAJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NDOHADFDACJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_NDOHADFDACJ_OFFSET))(this);
	}

	::System::Int32 OBBOKGCPPPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_OBBOKGCPPPH_OFFSET))(this);
	}

	::System::Int32 BKKFEJDNEPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_BKKFEJDNEPJ_OFFSET))(this);
	}

	::System::Int32 JKLDPENLPAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_JKLDPENLPAM_OFFSET))(this);
	}

	::System::Int32 BKLCMJFKHOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_BKLCMJFKHOE_OFFSET))(this);
	}

	::System::String* GCLCCOINOJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_GCLCCOINOJG_OFFSET))(this);
	}

	::System::Int32 HBOMGJKGDDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_HBOMGJKGDDM_OFFSET))(this);
	}

	::System::Boolean ICCNNGLNPGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_ICCNNGLNPGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::String* IEADGLGOBJC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_IEADGLGOBJC_OFFSET))(this);
	}

	/*
	static ::BKBEGHIGNFB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BKBEGHIGNFB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BKBEGHIGNFB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
