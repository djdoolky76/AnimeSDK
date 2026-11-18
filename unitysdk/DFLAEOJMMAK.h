#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DFLAEOJMMAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFLAEOJMMAK_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFLAEOJMMAK_EODEBMONMEL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DFLAEOJMMAK_FDHBCBODOGC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DFLAEOJMMAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFLAEOJMMAK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A553BB0)
#define DFLAEOJMMAK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFLAEOJMMAK_TypeDefinitionIndex = 17067;

struct alignas(4) DFLAEOJMMAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLAEOJMMAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFLAEOJMMAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DFLAEOJMMAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFLAEOJMMAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFLAEOJMMAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FDHBCBODOGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLAEOJMMAK_FDHBCBODOGC_OFFSET))(this);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLAEOJMMAK_ELOAKJLAGOH_OFFSET))(this);
	}

	::System::Int32 EODEBMONMEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLAEOJMMAK_EODEBMONMEL_OFFSET))(this);
	}

	/*
	static ::DFLAEOJMMAK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DFLAEOJMMAK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DFLAEOJMMAK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
