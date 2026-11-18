#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FIBCPAKIAME_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FIBCPAKIAME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FIBCPAKIAME_BKHALOIOHCN_OFFSET UNITYSDK_OFFSET(0x761240)
#define FIBCPAKIAME_EGFBIHLKJCE_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define FIBCPAKIAME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIBCPAKIAME_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17AB35D0)
#define FIBCPAKIAME___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FIBCPAKIAME_TypeDefinitionIndex = 9985;

struct alignas(4) FIBCPAKIAME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBCPAKIAME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIBCPAKIAME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FIBCPAKIAME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIBCPAKIAME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIBCPAKIAME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FIBCPAKIAME OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FIBCPAKIAME(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIBCPAKIAME_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BKHALOIOHCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBCPAKIAME_BKHALOIOHCN_OFFSET))(this);
	}

	::System::Boolean EGFBIHLKJCE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FIBCPAKIAME_EGFBIHLKJCE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBCPAKIAME_ACOEONABOJL_OFFSET))(this);
	}
};
