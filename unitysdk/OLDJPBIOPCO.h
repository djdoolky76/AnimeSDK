#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OLDJPBIOPCO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OLDJPBIOPCO_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OLDJPBIOPCO_BGKKEMMIBDD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OLDJPBIOPCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OLDJPBIOPCO_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OLDJPBIOPCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLDJPBIOPCO_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x754970)
#define OLDJPBIOPCO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FE2810)
#define OLDJPBIOPCO_OBPDIKGGIMN_OFFSET UNITYSDK_OFFSET(0x754920)
#define OLDJPBIOPCO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OLDJPBIOPCO_TypeDefinitionIndex = 16862;

struct alignas(4) OLDJPBIOPCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLDJPBIOPCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::OLDJPBIOPCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLDJPBIOPCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BGKKEMMIBDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_BGKKEMMIBDD_OFFSET))(this);
	}

	::System::Int32 OBPDIKGGIMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_OBPDIKGGIMN_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_FJOLPGBLBBH_OFFSET))(this);
	}

	/*
	static ::OLDJPBIOPCO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OLDJPBIOPCO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OLDJPBIOPCO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
