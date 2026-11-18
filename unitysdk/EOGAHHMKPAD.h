#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EOGAHHMKPAD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EOGAHHMKPAD_BAMNCDALCKP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EOGAHHMKPAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EOGAHHMKPAD_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EOGAHHMKPAD_DEJOLMPNPGB_OFFSET UNITYSDK_OFFSET(0x756440)
#define EOGAHHMKPAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EOGAHHMKPAD_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define EOGAHHMKPAD_KAHCBAJPHCH_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define EOGAHHMKPAD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B858910)
#define EOGAHHMKPAD_OIEHCDHMEKD_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define EOGAHHMKPAD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EOGAHHMKPAD_TypeDefinitionIndex = 14374;

struct alignas(4) EOGAHHMKPAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOGAHHMKPAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KAHCBAJPHCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_KAHCBAJPHCH_OFFSET))(this);
	}

	::System::Int32 DEJOLMPNPGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_DEJOLMPNPGB_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 OIEHCDHMEKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_OIEHCDHMEKD_OFFSET))(this);
	}

	/*
	static ::EOGAHHMKPAD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EOGAHHMKPAD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EOGAHHMKPAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOGAHHMKPAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BAMNCDALCKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_BAMNCDALCKP_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAHHMKPAD_ACOEONABOJL_OFFSET))(this);
	}
};
