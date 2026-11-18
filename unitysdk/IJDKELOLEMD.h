#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IJDKELOLEMD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IJDKELOLEMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IJDKELOLEMD_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IJDKELOLEMD_DOOJMMEAPCO_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define IJDKELOLEMD_EIAPDFNIBJP_OFFSET UNITYSDK_OFFSET(0x756720)
#define IJDKELOLEMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJDKELOLEMD_IBFOBBNILKP_OFFSET UNITYSDK_OFFSET(0x754A70)
#define IJDKELOLEMD_JADHELLDBML_OFFSET UNITYSDK_OFFSET(0x754970)
#define IJDKELOLEMD_JBMKFDDMJKE_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define IJDKELOLEMD_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IJDKELOLEMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IJDKELOLEMD_TypeDefinitionIndex = 16547;

struct alignas(4) IJDKELOLEMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJDKELOLEMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JBMKFDDMJKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_JBMKFDDMJKE_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Int32 JADHELLDBML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_JADHELLDBML_OFFSET))(this);
	}

	/*
	::IJDKELOLEMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJDKELOLEMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJDKELOLEMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EIAPDFNIBJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_EIAPDFNIBJP_OFFSET))(this);
	}

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDKELOLEMD_BLLOPKJDOBE_OFFSET))(this);
	}

	::System::Boolean DOOJMMEAPCO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IJDKELOLEMD_DOOJMMEAPCO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IBFOBBNILKP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IJDKELOLEMD_IBFOBBNILKP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
