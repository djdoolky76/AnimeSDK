#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PMDECKMGHLJ_ACNDDMMGDAM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PMDECKMGHLJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMDECKMGHLJ_BEKCNEHMIGJ_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PMDECKMGHLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMDECKMGHLJ_BNBCAKLLCAN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PMDECKMGHLJ_DCAHEDLHMEG_OFFSET UNITYSDK_OFFSET(0x754920)
#define PMDECKMGHLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMDECKMGHLJ_GFFPMIFPPIL_OFFSET UNITYSDK_OFFSET(0x7F5D10)
#define PMDECKMGHLJ_GLOCABFGEIK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PMDECKMGHLJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EE09360)
#define PMDECKMGHLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMDECKMGHLJ_TypeDefinitionIndex = 12117;

struct alignas(4) PMDECKMGHLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMDECKMGHLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DCAHEDLHMEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_DCAHEDLHMEG_OFFSET))(this);
	}

	::System::Int32 BNBCAKLLCAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_BNBCAKLLCAN_OFFSET))(this);
	}

	::System::Boolean GFFPMIFPPIL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_GFFPMIFPPIL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ACNDDMMGDAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_ACNDDMMGDAM_OFFSET))(this);
	}

	/*
	::PMDECKMGHLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMDECKMGHLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BEKCNEHMIGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_BEKCNEHMIGJ_OFFSET))(this);
	}

	/*
	static ::PMDECKMGHLJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMDECKMGHLJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GLOCABFGEIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDECKMGHLJ_GLOCABFGEIK_OFFSET))(this);
	}
};
