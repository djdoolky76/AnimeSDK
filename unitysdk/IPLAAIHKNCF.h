#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IPLAAIHKNCF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPLAAIHKNCF_AEOPMPNGPLL_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define IPLAAIHKNCF_APIELGJFEAE_OFFSET UNITYSDK_OFFSET(0x81BE50)
#define IPLAAIHKNCF_BBPPLJBMEDI_OFFSET UNITYSDK_OFFSET(0x762D20)
#define IPLAAIHKNCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPLAAIHKNCF_COIGDJLABGG_OFFSET UNITYSDK_OFFSET(0x754920)
#define IPLAAIHKNCF_EKGKBJBDGKO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define IPLAAIHKNCF_ELDLAKANOPP_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IPLAAIHKNCF_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IPLAAIHKNCF_EONENBHIJPF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define IPLAAIHKNCF_FFOBDLKKFEF_OFFSET UNITYSDK_OFFSET(0x755440)
#define IPLAAIHKNCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPLAAIHKNCF_GPLFMEKKHOO_OFFSET UNITYSDK_OFFSET(0x81BDD0)
#define IPLAAIHKNCF_IDOBPKJCJBL_OFFSET UNITYSDK_OFFSET(0x7890D0)
#define IPLAAIHKNCF_KNOMPIDDJIC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IPLAAIHKNCF_KPJEGHELJKB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IPLAAIHKNCF_LNAEELJKEHD_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define IPLAAIHKNCF_MFJDNAGKFMN_OFFSET UNITYSDK_OFFSET(0x758780)
#define IPLAAIHKNCF_OIGPGPDAIJB_OFFSET UNITYSDK_OFFSET(0x756280)
#define IPLAAIHKNCF_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define IPLAAIHKNCF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPLAAIHKNCF_TypeDefinitionIndex = 10171;

struct alignas(4) IPLAAIHKNCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLAAIHKNCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MFJDNAGKFMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_MFJDNAGKFMN_OFFSET))(this);
	}

	::System::Int32 COIGDJLABGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_COIGDJLABGG_OFFSET))(this);
	}

	::System::Int32 BBPPLJBMEDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_BBPPLJBMEDI_OFFSET))(this);
	}

	::System::Int32 FFOBDLKKFEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_FFOBDLKKFEF_OFFSET))(this);
	}

	::System::Int32 EONENBHIJPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_EONENBHIJPF_OFFSET))(this);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Int32 LNAEELJKEHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_LNAEELJKEHD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ELDLAKANOPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_ELDLAKANOPP_OFFSET))(this);
	}

	::System::Boolean AEOPMPNGPLL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_AEOPMPNGPLL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KNOMPIDDJIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_KNOMPIDDJIC_OFFSET))(this);
	}

	::System::Boolean GPLFMEKKHOO(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_GPLFMEKKHOO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IPLAAIHKNCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPLAAIHKNCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EKGKBJBDGKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_EKGKBJBDGKO_OFFSET))(this);
	}

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_OLMMLKDHLBJ_OFFSET))(this);
	}

	::System::Boolean IDOBPKJCJBL(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_IDOBPKJCJBL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean APIELGJFEAE(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_APIELGJFEAE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OIGPGPDAIJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_OIGPGPDAIJB_OFFSET))(this);
	}

	::System::Int32 KPJEGHELJKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLAAIHKNCF_KPJEGHELJKB_OFFSET))(this);
	}
};
