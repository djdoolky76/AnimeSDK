#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMDKGCCDGMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NNCAOFEPINN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NNCAOFEPINN_BJKGNKEPEJB_OFFSET UNITYSDK_OFFSET(0x754920)
#define NNCAOFEPINN_CDOLOINIAMG_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define NNCAOFEPINN_DLHEKBNPBNI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NNCAOFEPINN_DOENFPFKOCC_OFFSET UNITYSDK_OFFSET(0x779C80)
#define NNCAOFEPINN_FPAIICCOCJF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define NNCAOFEPINN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNCAOFEPINN_GIPOMPLOMGI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NNCAOFEPINN_HOCMPNBAAFE_OFFSET UNITYSDK_OFFSET(0x757B50)
#define NNCAOFEPINN_IBIJKGOEPLA_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define NNCAOFEPINN_JIJNEFBLGJD_OFFSET UNITYSDK_OFFSET(0x755190)
#define NNCAOFEPINN_KJGOLMAJPCO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NNCAOFEPINN_MBAJBAPIFEF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NNCAOFEPINN_MHMKHOMMCDH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NNCAOFEPINN_MKJGMNEIMOG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NNCAOFEPINN_MMHJOIBPAAJ_OFFSET UNITYSDK_OFFSET(0x757E20)
#define NNCAOFEPINN_MPFLGBCOAHI_OFFSET UNITYSDK_OFFSET(0x758780)
#define NNCAOFEPINN_NKCGLMBMAOC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define NNCAOFEPINN_OHHFEDDBHEO_OFFSET UNITYSDK_OFFSET(0x757330)
#define NNCAOFEPINN_ONJFIGPFLIJ_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define NNCAOFEPINN_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NNCAOFEPINN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NNCAOFEPINN_TypeDefinitionIndex = 12875;

struct alignas(4) NNCAOFEPINN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNCAOFEPINN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONJFIGPFLIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_ONJFIGPFLIJ_OFFSET))(this);
	}

	::System::Int32 NKCGLMBMAOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_NKCGLMBMAOC_OFFSET))(this);
	}

	::System::String* GIPOMPLOMGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_GIPOMPLOMGI_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::String* KJGOLMAJPCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_KJGOLMAJPCO_OFFSET))(this);
	}

	::System::Int32 IBIJKGOEPLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_IBIJKGOEPLA_OFFSET))(this);
	}

	::System::Int32 JIJNEFBLGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_JIJNEFBLGJD_OFFSET))(this);
	}

	::System::Boolean DOENFPFKOCC(::System::Int32 HPMEONKHFGG, ::PMDKGCCDGMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMDKGCCDGMN&))((::PBYTE)hIl2Cpp + NNCAOFEPINN_DOENFPFKOCC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DLHEKBNPBNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_DLHEKBNPBNI_OFFSET))(this);
	}

	::System::Int32 CDOLOINIAMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_CDOLOINIAMG_OFFSET))(this);
	}

	::System::Int32 MKJGMNEIMOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_MKJGMNEIMOG_OFFSET))(this);
	}

	::System::Int32 FPAIICCOCJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_FPAIICCOCJF_OFFSET))(this);
	}

	::System::Int32 BJKGNKEPEJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_BJKGNKEPEJB_OFFSET))(this);
	}

	::System::String* MHMKHOMMCDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_MHMKHOMMCDH_OFFSET))(this);
	}

	::System::Int32 OHHFEDDBHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_OHHFEDDBHEO_OFFSET))(this);
	}

	::System::Boolean HOCMPNBAAFE(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NNCAOFEPINN_HOCMPNBAAFE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MMHJOIBPAAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_MMHJOIBPAAJ_OFFSET))(this);
	}

	/*
	::NNCAOFEPINN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNCAOFEPINN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNCAOFEPINN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MPFLGBCOAHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_MPFLGBCOAHI_OFFSET))(this);
	}

	::System::Int32 MBAJBAPIFEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCAOFEPINN_MBAJBAPIFEF_OFFSET))(this);
	}
};
