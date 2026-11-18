#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NBBACDHJNKO_AFHGHNFGPEF_OFFSET UNITYSDK_OFFSET(0x757290)
#define NBBACDHJNKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NBBACDHJNKO_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NBBACDHJNKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBBACDHJNKO_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NBBACDHJNKO_HFMEHBKEGOC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define NBBACDHJNKO_MAGNGDMPKPE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NBBACDHJNKO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195B1AA0)
#define NBBACDHJNKO_POMFKFMBLPB_OFFSET UNITYSDK_OFFSET(0x754920)
#define NBBACDHJNKO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NBBACDHJNKO_TypeDefinitionIndex = 12652;

struct alignas(4) NBBACDHJNKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBACDHJNKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HFMEHBKEGOC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_HFMEHBKEGOC_OFFSET))(this);
	}

	/*
	::NBBACDHJNKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBBACDHJNKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBACDHJNKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 POMFKFMBLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_POMFKFMBLPB_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_CCANKPOGMJD_OFFSET))(this);
	}

	::System::Int32 MAGNGDMPKPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_MAGNGDMPKPE_OFFSET))(this);
	}

	::System::String* AFHGHNFGPEF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBACDHJNKO_AFHGHNFGPEF_OFFSET))(this);
	}

	/*
	static ::NBBACDHJNKO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NBBACDHJNKO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NBBACDHJNKO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
