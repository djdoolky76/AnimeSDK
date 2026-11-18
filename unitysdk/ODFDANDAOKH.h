#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ODFDANDAOKH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ODFDANDAOKH_BADIFLFDNCO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ODFDANDAOKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ODFDANDAOKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODFDANDAOKH_GMKJHMEHJOJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ODFDANDAOKH_IECFGACLJCC_OFFSET UNITYSDK_OFFSET(0x761240)
#define ODFDANDAOKH_NDDEKEICICN_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define ODFDANDAOKH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DCD060)
#define ODFDANDAOKH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ODFDANDAOKH_TypeDefinitionIndex = 13474;

struct alignas(4) ODFDANDAOKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFDANDAOKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODFDANDAOKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NDDEKEICICN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ODFDANDAOKH_NDDEKEICICN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GMKJHMEHJOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFDANDAOKH_GMKJHMEHJOJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFDANDAOKH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::ODFDANDAOKH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ODFDANDAOKH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ODFDANDAOKH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::ODFDANDAOKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODFDANDAOKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODFDANDAOKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IECFGACLJCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFDANDAOKH_IECFGACLJCC_OFFSET))(this);
	}

	::System::Int32 BADIFLFDNCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFDANDAOKH_BADIFLFDNCO_OFFSET))(this);
	}
};
