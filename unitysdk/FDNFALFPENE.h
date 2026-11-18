#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FDNFALFPENE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FDNFALFPENE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDNFALFPENE_MCGIIEDOPFA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FDNFALFPENE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AB13E0)
#define FDNFALFPENE_OFHKKELFFEP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FDNFALFPENE_PPNGEPPIFOJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FDNFALFPENE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FDNFALFPENE_TypeDefinitionIndex = 14692;

struct alignas(4) FDNFALFPENE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNFALFPENE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDNFALFPENE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MCGIIEDOPFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNFALFPENE_MCGIIEDOPFA_OFFSET))(this);
	}

	/*
	::FDNFALFPENE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDNFALFPENE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDNFALFPENE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PPNGEPPIFOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNFALFPENE_PPNGEPPIFOJ_OFFSET))(this);
	}

	::System::Int32 OFHKKELFFEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNFALFPENE_OFHKKELFFEP_OFFSET))(this);
	}

	/*
	static ::FDNFALFPENE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FDNFALFPENE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FDNFALFPENE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
