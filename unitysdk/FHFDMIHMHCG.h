#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FHFDMIHMHCG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHFDMIHMHCG_AKIAMMKNEGE_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define FHFDMIHMHCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHFDMIHMHCG_ELMENLMEBLN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FHFDMIHMHCG_FJBDDHIFAKN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FHFDMIHMHCG_FKLKNPJNPBB_OFFSET UNITYSDK_OFFSET(0x754920)
#define FHFDMIHMHCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHFDMIHMHCG_JKFNFMBGIGD_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define FHFDMIHMHCG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5A5810)
#define FHFDMIHMHCG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHFDMIHMHCG_TypeDefinitionIndex = 12491;

struct alignas(4) FHFDMIHMHCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHFDMIHMHCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FKLKNPJNPBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_FKLKNPJNPBB_OFFSET))(this);
	}

	::System::Int32 JKFNFMBGIGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_JKFNFMBGIGD_OFFSET))(this);
	}

	/*
	static ::FHFDMIHMHCG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FHFDMIHMHCG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ELMENLMEBLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_ELMENLMEBLN_OFFSET))(this);
	}

	::System::Int32 FJBDDHIFAKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_FJBDDHIFAKN_OFFSET))(this);
	}

	/*
	::FHFDMIHMHCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHFDMIHMHCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean AKIAMMKNEGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FHFDMIHMHCG_AKIAMMKNEGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
