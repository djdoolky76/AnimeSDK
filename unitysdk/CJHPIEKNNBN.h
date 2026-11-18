#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CJHPIEKNNBN_ADCDDKLDKKF_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define CJHPIEKNNBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CJHPIEKNNBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJHPIEKNNBN_GKKGFOOLDGJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CJHPIEKNNBN_JPGMFKBBLOO_OFFSET UNITYSDK_OFFSET(0x756720)
#define CJHPIEKNNBN_KONJNEPHEEG_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define CJHPIEKNNBN_LFAHHJLPCBA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CJHPIEKNNBN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15790C60)
#define CJHPIEKNNBN_OEKGFPNLIAM_OFFSET UNITYSDK_OFFSET(0x761240)
#define CJHPIEKNNBN_OOKCBCCGMHM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CJHPIEKNNBN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CJHPIEKNNBN_TypeDefinitionIndex = 13520;

struct alignas(4) CJHPIEKNNBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJHPIEKNNBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JPGMFKBBLOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_JPGMFKBBLOO_OFFSET))(this);
	}

	::System::String* OOKCBCCGMHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_OOKCBCCGMHM_OFFSET))(this);
	}

	::System::Boolean KONJNEPHEEG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_KONJNEPHEEG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CJHPIEKNNBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJHPIEKNNBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LFAHHJLPCBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_LFAHHJLPCBA_OFFSET))(this);
	}

	/*
	static ::CJHPIEKNNBN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CJHPIEKNNBN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OEKGFPNLIAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_OEKGFPNLIAM_OFFSET))(this);
	}

	::System::Boolean ADCDDKLDKKF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_ADCDDKLDKKF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GKKGFOOLDGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPIEKNNBN_GKKGFOOLDGJ_OFFSET))(this);
	}
};
