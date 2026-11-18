#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LLFIEKLMILG_AAKCOBJLGBI_OFFSET UNITYSDK_OFFSET(0x762D20)
#define LLFIEKLMILG_AFHICHKAKAK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LLFIEKLMILG_APKJDOOJKPI_OFFSET UNITYSDK_OFFSET(0x757290)
#define LLFIEKLMILG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LLFIEKLMILG_BLPCPOMGFBD_OFFSET UNITYSDK_OFFSET(0x7A69D0)
#define LLFIEKLMILG_CGODLBPKDPP_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define LLFIEKLMILG_CKMLCFFCLFM_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define LLFIEKLMILG_CLIBBOBLPHA_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LLFIEKLMILG_DLKPMGPKHGO_OFFSET UNITYSDK_OFFSET(0x755440)
#define LLFIEKLMILG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLFIEKLMILG_GKDBLJADJLG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LLFIEKLMILG_HCMHFHPGPHC_OFFSET UNITYSDK_OFFSET(0x760650)
#define LLFIEKLMILG_IEKIAKBFPBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LLFIEKLMILG_IFNLIFEBOKJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LLFIEKLMILG_JOFPFPEGIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LLFIEKLMILG_KHGJDPMCBAF_OFFSET UNITYSDK_OFFSET(0x761710)
#define LLFIEKLMILG_KLHOJNPBLPP_OFFSET UNITYSDK_OFFSET(0x758320)
#define LLFIEKLMILG_KMPMEPNBJNB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LLFIEKLMILG_MFIGADIEDJH_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define LLFIEKLMILG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FB64B0)
#define LLFIEKLMILG_PIKLHGEIHDF_OFFSET UNITYSDK_OFFSET(0x754920)
#define LLFIEKLMILG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LLFIEKLMILG_TypeDefinitionIndex = 17454;

struct alignas(4) LLFIEKLMILG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLFIEKLMILG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BLPCPOMGFBD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LLFIEKLMILG_BLPCPOMGFBD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KLHOJNPBLPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_KLHOJNPBLPP_OFFSET))(this);
	}

	::System::Int32 JOFPFPEGIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_JOFPFPEGIEA_OFFSET))(this);
	}

	/*
	::LLFIEKLMILG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLFIEKLMILG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLFIEKLMILG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CKMLCFFCLFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_CKMLCFFCLFM_OFFSET))(this);
	}

	::System::Int32 HCMHFHPGPHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_HCMHFHPGPHC_OFFSET))(this);
	}

	::System::String* IFNLIFEBOKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_IFNLIFEBOKJ_OFFSET))(this);
	}

	::System::Boolean CGODLBPKDPP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LLFIEKLMILG_CGODLBPKDPP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* AFHICHKAKAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_AFHICHKAKAK_OFFSET))(this);
	}

	::System::String* KMPMEPNBJNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_KMPMEPNBJNB_OFFSET))(this);
	}

	::System::Boolean MFIGADIEDJH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LLFIEKLMILG_MFIGADIEDJH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KHGJDPMCBAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_KHGJDPMCBAF_OFFSET))(this);
	}

	::System::Int32 AAKCOBJLGBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_AAKCOBJLGBI_OFFSET))(this);
	}

	::System::Int32 IEKIAKBFPBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_IEKIAKBFPBH_OFFSET))(this);
	}

	::System::Int32 DLKPMGPKHGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_DLKPMGPKHGO_OFFSET))(this);
	}

	/*
	static ::LLFIEKLMILG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LLFIEKLMILG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LLFIEKLMILG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* APKJDOOJKPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_APKJDOOJKPI_OFFSET))(this);
	}

	::System::String* CLIBBOBLPHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_CLIBBOBLPHA_OFFSET))(this);
	}

	::System::Int32 PIKLHGEIHDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_PIKLHGEIHDF_OFFSET))(this);
	}

	::System::String* GKDBLJADJLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFIEKLMILG_GKDBLJADJLG_OFFSET))(this);
	}
};
