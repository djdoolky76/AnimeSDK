#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FOELDAFLODP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FOELDAFLODP_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FOELDAFLODP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOELDAFLODP_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FOELDAFLODP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A7B360)
#define FOELDAFLODP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FOELDAFLODP_TypeDefinitionIndex = 12572;

struct alignas(4) FOELDAFLODP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOELDAFLODP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOELDAFLODP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FOELDAFLODP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOELDAFLODP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOELDAFLODP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FOELDAFLODP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FOELDAFLODP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOELDAFLODP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOELDAFLODP_CCANKPOGMJD_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOELDAFLODP_NFDDMGBFGNI_OFFSET))(this);
	}
};
