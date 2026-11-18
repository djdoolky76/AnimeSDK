#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KJKAJBENJMA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KJKAJBENJMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KJKAJBENJMA_BOBJEPBJFII_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define KJKAJBENJMA_DFNIFIIEOPL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KJKAJBENJMA_EEBIJAFKIMK_OFFSET UNITYSDK_OFFSET(0x754920)
#define KJKAJBENJMA_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KJKAJBENJMA_FMOLANGCPDH_OFFSET UNITYSDK_OFFSET(0x756220)
#define KJKAJBENJMA_GEIKDCEFKEE_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KJKAJBENJMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJKAJBENJMA_HLMNLEKFFAD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KJKAJBENJMA_HPNCDFHMEPJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define KJKAJBENJMA_JKPDKNPBGHO_OFFSET UNITYSDK_OFFSET(0x756570)
#define KJKAJBENJMA_LEJKOEJCJML_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KJKAJBENJMA_MMLIHCLFNAK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KJKAJBENJMA_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KJKAJBENJMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KJKAJBENJMA_TypeDefinitionIndex = 14802;

struct alignas(4) KJKAJBENJMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJKAJBENJMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DFNIFIIEOPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_DFNIFIIEOPL_OFFSET))(this);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_FECFCHMJHML_OFFSET))(this);
	}

	::System::Int32 FMOLANGCPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_FMOLANGCPDH_OFFSET))(this);
	}

	::System::Int32 MMLIHCLFNAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_MMLIHCLFNAK_OFFSET))(this);
	}

	::System::Boolean BOBJEPBJFII(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KJKAJBENJMA_BOBJEPBJFII_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_NDCPGHGEPAA_OFFSET))(this);
	}

	::System::Int32 EEBIJAFKIMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_EEBIJAFKIMK_OFFSET))(this);
	}

	::System::Int32 LEJKOEJCJML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_LEJKOEJCJML_OFFSET))(this);
	}

	::System::Boolean JKPDKNPBGHO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KJKAJBENJMA_JKPDKNPBGHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KJKAJBENJMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJKAJBENJMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJKAJBENJMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HPNCDFHMEPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_HPNCDFHMEPJ_OFFSET))(this);
	}

	::System::Int32 HLMNLEKFFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_HLMNLEKFFAD_OFFSET))(this);
	}

	::System::String* GEIKDCEFKEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKAJBENJMA_GEIKDCEFKEE_OFFSET))(this);
	}
};
