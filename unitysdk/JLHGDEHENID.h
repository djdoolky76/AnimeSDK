#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JLHGDEHENID_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JLHGDEHENID_AJDKIGMHGLM_OFFSET UNITYSDK_OFFSET(0x761240)
#define JLHGDEHENID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JLHGDEHENID_CEBLKEDAFOP_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JLHGDEHENID_FECAPIGGOJG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JLHGDEHENID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLHGDEHENID_KANHKDKJKIM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JLHGDEHENID_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754920)
#define JLHGDEHENID_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1954D8B0)
#define JLHGDEHENID_OCFLMJBNMMJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define JLHGDEHENID___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JLHGDEHENID_TypeDefinitionIndex = 10675;

struct alignas(4) JLHGDEHENID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLHGDEHENID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JLHGDEHENID OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JLHGDEHENID(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JLHGDEHENID_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FECAPIGGOJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_FECAPIGGOJG_OFFSET))(this);
	}

	::System::Int32 KANHKDKJKIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_KANHKDKJKIM_OFFSET))(this);
	}

	::System::Boolean CEBLKEDAFOP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JLHGDEHENID_CEBLKEDAFOP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OCFLMJBNMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_OCFLMJBNMMJ_OFFSET))(this);
	}

	::System::Int32 AJDKIGMHGLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_AJDKIGMHGLM_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGDEHENID_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::JLHGDEHENID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLHGDEHENID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLHGDEHENID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
