#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHNFCJPMBKD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x762060)
#define EHNFCJPMBKD_ALNFIBOCMAI_OFFSET UNITYSDK_OFFSET(0x757330)
#define EHNFCJPMBKD_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EHNFCJPMBKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHNFCJPMBKD_DIDMBFLIJFM_OFFSET UNITYSDK_OFFSET(0x754920)
#define EHNFCJPMBKD_DJHFGOLGLMC_OFFSET UNITYSDK_OFFSET(0x757E20)
#define EHNFCJPMBKD_EPBDFBNKOCD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHNFCJPMBKD_FEMHDIFBBJB_OFFSET UNITYSDK_OFFSET(0x757190)
#define EHNFCJPMBKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHNFCJPMBKD_GIBJLHOGLFP_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define EHNFCJPMBKD_HHCHLCDKMCJ_OFFSET UNITYSDK_OFFSET(0x755890)
#define EHNFCJPMBKD_HLNECCOCPNG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EHNFCJPMBKD_JBKDEMBLFAP_OFFSET UNITYSDK_OFFSET(0x757690)
#define EHNFCJPMBKD_JJAKOJDPGGM_OFFSET UNITYSDK_OFFSET(0x757760)
#define EHNFCJPMBKD_JPFFGIJHGGH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EHNFCJPMBKD_LOHJIOMIADK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define EHNFCJPMBKD_OBGOLKALAEP_OFFSET UNITYSDK_OFFSET(0x755710)
#define EHNFCJPMBKD_ODIAAIHKNDC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EHNFCJPMBKD_OONHFABIOKN_OFFSET UNITYSDK_OFFSET(0x761710)
#define EHNFCJPMBKD_PDFPIHLGKLA_OFFSET UNITYSDK_OFFSET(0x763920)
#define EHNFCJPMBKD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHNFCJPMBKD_TypeDefinitionIndex = 16570;

struct alignas(4) EHNFCJPMBKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHNFCJPMBKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OONHFABIOKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_OONHFABIOKN_OFFSET))(this);
	}

	::System::String* ACOEONABOJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DJHFGOLGLMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_DJHFGOLGLMC_OFFSET))(this);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_BELMIKIMNBG_OFFSET))(this);
	}

	::System::Int32 ALNFIBOCMAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_ALNFIBOCMAI_OFFSET))(this);
	}

	::System::String* LOHJIOMIADK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_LOHJIOMIADK_OFFSET))(this);
	}

	::System::Int32 HHCHLCDKMCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_HHCHLCDKMCJ_OFFSET))(this);
	}

	::System::String* HLNECCOCPNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_HLNECCOCPNG_OFFSET))(this);
	}

	::System::Int32 DIDMBFLIJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_DIDMBFLIJFM_OFFSET))(this);
	}

	::System::String* JBKDEMBLFAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_JBKDEMBLFAP_OFFSET))(this);
	}

	::System::Boolean PDFPIHLGKLA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_PDFPIHLGKLA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JPFFGIJHGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_JPFFGIJHGGH_OFFSET))(this);
	}

	::System::String* OBGOLKALAEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_OBGOLKALAEP_OFFSET))(this);
	}

	/*
	::EHNFCJPMBKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHNFCJPMBKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EPBDFBNKOCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_EPBDFBNKOCD_OFFSET))(this);
	}

	::System::String* ODIAAIHKNDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_ODIAAIHKNDC_OFFSET))(this);
	}

	::System::String* FEMHDIFBBJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_FEMHDIFBBJB_OFFSET))(this);
	}

	::System::String* GIBJLHOGLFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_GIBJLHOGLFP_OFFSET))(this);
	}

	::System::String* JJAKOJDPGGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNFCJPMBKD_JJAKOJDPGGM_OFFSET))(this);
	}
};
