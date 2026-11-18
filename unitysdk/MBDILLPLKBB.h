#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MBDILLPLKBB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MBDILLPLKBB_AGIOAFDEAMN_OFFSET UNITYSDK_OFFSET(0x758780)
#define MBDILLPLKBB_AHPHHLLJACI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MBDILLPLKBB_AJAFALHKGAD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define MBDILLPLKBB_BFKPEPNIBLG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MBDILLPLKBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MBDILLPLKBB_DMECPKOMGED_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MBDILLPLKBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBDILLPLKBB_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MBDILLPLKBB_JABAIPLOCEL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MBDILLPLKBB_JMMFGMGDDPP_OFFSET UNITYSDK_OFFSET(0x754A70)
#define MBDILLPLKBB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1959BA00)
#define MBDILLPLKBB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MBDILLPLKBB_TypeDefinitionIndex = 10504;

struct alignas(4) MBDILLPLKBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDILLPLKBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean JMMFGMGDDPP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MBDILLPLKBB_JMMFGMGDDPP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* AHPHHLLJACI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_AHPHHLLJACI_OFFSET))(this);
	}

	/*
	::MBDILLPLKBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBDILLPLKBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDILLPLKBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AJAFALHKGAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_AJAFALHKGAD_OFFSET))(this);
	}

	::System::Int32 JABAIPLOCEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_JABAIPLOCEL_OFFSET))(this);
	}

	::System::String* DMECPKOMGED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_DMECPKOMGED_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* BFKPEPNIBLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_BFKPEPNIBLG_OFFSET))(this);
	}

	/*
	static ::MBDILLPLKBB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MBDILLPLKBB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MBDILLPLKBB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AGIOAFDEAMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_AGIOAFDEAMN_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDILLPLKBB_HGODFCFGNDA_OFFSET))(this);
	}
};
