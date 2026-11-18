#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ALPAMOINNOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ALPAMOINNOJ_DMPKFPNFMEA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ALPAMOINNOJ_ELOFCLOLJEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ALPAMOINNOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALPAMOINNOJ_LEBLJECFJCP_OFFSET UNITYSDK_OFFSET(0x754920)
#define ALPAMOINNOJ_NDOPLEPKPEG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ALPAMOINNOJ_NGLANKMBEBG_OFFSET UNITYSDK_OFFSET(0x754970)
#define ALPAMOINNOJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157749E0)
#define ALPAMOINNOJ_PJCPEGKECOK_OFFSET UNITYSDK_OFFSET(0x755E40)
#define ALPAMOINNOJ_PLMPAGMICCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ALPAMOINNOJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ALPAMOINNOJ_TypeDefinitionIndex = 14929;

struct alignas(4) ALPAMOINNOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALPAMOINNOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DMPKFPNFMEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_DMPKFPNFMEA_OFFSET))(this);
	}

	::System::Int32 NDOPLEPKPEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_NDOPLEPKPEG_OFFSET))(this);
	}

	::System::Int32 PJCPEGKECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_PJCPEGKECOK_OFFSET))(this);
	}

	/*
	::ALPAMOINNOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALPAMOINNOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ELOFCLOLJEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_ELOFCLOLJEM_OFFSET))(this);
	}

	/*
	static ::ALPAMOINNOJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 PBHJGJGHHLB, ::System::Int32 PJIPJAFFDAM, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ALPAMOINNOJ(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, PBHJGJGHHLB, PJIPJAFFDAM, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LEBLJECFJCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_LEBLJECFJCP_OFFSET))(this);
	}

	::System::Int32 PLMPAGMICCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_PLMPAGMICCF_OFFSET))(this);
	}

	::System::Int32 NGLANKMBEBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPAMOINNOJ_NGLANKMBEBG_OFFSET))(this);
	}
};
