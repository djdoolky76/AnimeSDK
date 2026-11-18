#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MOGAKLIPJDM_BHDOBMPKAKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOGAKLIPJDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOGAKLIPJDM_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define MOGAKLIPJDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOGAKLIPJDM_GHKEBFFGPBN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MOGAKLIPJDM_HFHPIGMGGEA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MOGAKLIPJDM_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x755790)
#define MOGAKLIPJDM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1910F670)
#define MOGAKLIPJDM_OBNFHANMLKO_OFFSET UNITYSDK_OFFSET(0x758590)
#define MOGAKLIPJDM_POGPOBGLDHL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MOGAKLIPJDM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOGAKLIPJDM_TypeDefinitionIndex = 12531;

struct alignas(4) MOGAKLIPJDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOGAKLIPJDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MOGAKLIPJDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOGAKLIPJDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* POGPOBGLDHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_POGPOBGLDHL_OFFSET))(this);
	}

	::System::Int32 BHDOBMPKAKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_BHDOBMPKAKP_OFFSET))(this);
	}

	/*
	static ::MOGAKLIPJDM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MOGAKLIPJDM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::Boolean OBNFHANMLKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_OBNFHANMLKO_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* HFHPIGMGGEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_HFHPIGMGGEA_OFFSET))(this);
	}

	::System::String* GHKEBFFGPBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGAKLIPJDM_GHKEBFFGPBN_OFFSET))(this);
	}
};
