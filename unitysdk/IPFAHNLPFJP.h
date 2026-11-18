#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IPFAHNLPFJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPFAHNLPFJP_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IPFAHNLPFJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPFAHNLPFJP_LNKHBMIJGHE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPFAHNLPFJP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BC47E0)
#define IPFAHNLPFJP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPFAHNLPFJP_TypeDefinitionIndex = 16277;

struct alignas(4) IPFAHNLPFJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFAHNLPFJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPFAHNLPFJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IPFAHNLPFJP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IPFAHNLPFJP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPFAHNLPFJP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNKHBMIJGHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFAHNLPFJP_LNKHBMIJGHE_OFFSET))(this);
	}

	/*
	::IPFAHNLPFJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPFAHNLPFJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPFAHNLPFJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFAHNLPFJP_DNKLBHKEDEM_OFFSET))(this);
	}
};
