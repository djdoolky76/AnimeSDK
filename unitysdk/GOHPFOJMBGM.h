#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDDIOEJGI.h"

namespace FlatBuffers { class ByteBuffer; }

#define GOHPFOJMBGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GOHPFOJMBGM_GDODEOOCOGO_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define GOHPFOJMBGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOHPFOJMBGM_GNNDKDFJCIA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GOHPFOJMBGM_MMOFNJJPBDP_OFFSET UNITYSDK_OFFSET(0x7A60E0)
#define GOHPFOJMBGM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1933AE30)
#define GOHPFOJMBGM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GOHPFOJMBGM_TypeDefinitionIndex = 15913;

struct alignas(4) GOHPFOJMBGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPFOJMBGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOHPFOJMBGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GNNDKDFJCIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPFOJMBGM_GNNDKDFJCIA_OFFSET))(this);
	}

	::System::Int32 GDODEOOCOGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHPFOJMBGM_GDODEOOCOGO_OFFSET))(this);
	}

	/*
	static ::GOHPFOJMBGM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GOHPFOJMBGM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GOHPFOJMBGM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GOHPFOJMBGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOHPFOJMBGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOHPFOJMBGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MMOFNJJPBDP(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + GOHPFOJMBGM_MMOFNJJPBDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
