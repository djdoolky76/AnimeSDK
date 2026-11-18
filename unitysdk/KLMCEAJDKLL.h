#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/NLAOAFGNDNF.h"

namespace FlatBuffers { class ByteBuffer; }

#define KLMCEAJDKLL_BBILLABKAOO_OFFSET UNITYSDK_OFFSET(0x7D4B70)
#define KLMCEAJDKLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLMCEAJDKLL_ELOFCLOLJEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KLMCEAJDKLL_ELPJHMPPCMN_OFFSET UNITYSDK_OFFSET(0x756510)
#define KLMCEAJDKLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLMCEAJDKLL_GPLDFPEEFJO_OFFSET UNITYSDK_OFFSET(0x758780)
#define KLMCEAJDKLL_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KLMCEAJDKLL_HLMNLEKFFAD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLMCEAJDKLL_KAEIBAIJBJH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KLMCEAJDKLL_KOBOMPLCCDL_OFFSET UNITYSDK_OFFSET(0x757A30)
#define KLMCEAJDKLL_LHJCCFODJPJ_OFFSET UNITYSDK_OFFSET(0x81C7D0)
#define KLMCEAJDKLL_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x755670)
#define KLMCEAJDKLL_MCBCABAECOK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KLMCEAJDKLL_PEDGGPCKNHM_OFFSET UNITYSDK_OFFSET(0x754970)
#define KLMCEAJDKLL_PJCPEGKECOK_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define KLMCEAJDKLL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLMCEAJDKLL_TypeDefinitionIndex = 11548;

struct alignas(4) KLMCEAJDKLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLMCEAJDKLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 PJCPEGKECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_PJCPEGKECOK_OFFSET))(this);
	}

	::System::Int32 ELOFCLOLJEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_ELOFCLOLJEM_OFFSET))(this);
	}

	::System::Int32 KOBOMPLCCDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_KOBOMPLCCDL_OFFSET))(this);
	}

	::System::Int32 PEDGGPCKNHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_PEDGGPCKNHM_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_HDDENLNIPMA_OFFSET))(this);
	}

	::System::Int32 ELPJHMPPCMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_ELPJHMPPCMN_OFFSET))(this);
	}

	::System::Boolean LHJCCFODJPJ(::System::Int32 HPMEONKHFGG, ::NLAOAFGNDNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLAOAFGNDNF&))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_LHJCCFODJPJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KAEIBAIJBJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_KAEIBAIJBJH_OFFSET))(this);
	}

	::System::Boolean BBILLABKAOO(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_BBILLABKAOO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MCBCABAECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_MCBCABAECOK_OFFSET))(this);
	}

	/*
	::KLMCEAJDKLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLMCEAJDKLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HLMNLEKFFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_HLMNLEKFFAD_OFFSET))(this);
	}

	::System::Int32 GPLDFPEEFJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCEAJDKLL_GPLDFPEEFJO_OFFSET))(this);
	}
};
