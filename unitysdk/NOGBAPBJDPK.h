#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NOGBAPBJDPK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NOGBAPBJDPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NOGBAPBJDPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOGBAPBJDPK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD84F50)
#define NOGBAPBJDPK_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NOGBAPBJDPK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NOGBAPBJDPK_TypeDefinitionIndex = 13583;

struct alignas(4) NOGBAPBJDPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGBAPBJDPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOGBAPBJDPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NOGBAPBJDPK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NOGBAPBJDPK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NOGBAPBJDPK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NOGBAPBJDPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOGBAPBJDPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOGBAPBJDPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGBAPBJDPK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PEOEBEBFIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGBAPBJDPK_PEOEBEBFIJO_OFFSET))(this);
	}
};
