#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LFDIELJJGOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LFDIELJJGOO_EALIHMJEFFI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LFDIELJJGOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFDIELJJGOO_GGFNHKLGDPD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LFDIELJJGOO_JNNCOPHAECJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define LFDIELJJGOO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DFA470)
#define LFDIELJJGOO_POFPIGPHOJP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LFDIELJJGOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LFDIELJJGOO_TypeDefinitionIndex = 15153;

struct alignas(4) LFDIELJJGOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIELJJGOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFDIELJJGOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JNNCOPHAECJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIELJJGOO_JNNCOPHAECJ_OFFSET))(this);
	}

	/*
	static ::LFDIELJJGOO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LFDIELJJGOO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LFDIELJJGOO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 POFPIGPHOJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIELJJGOO_POFPIGPHOJP_OFFSET))(this);
	}

	::System::Int32 EALIHMJEFFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIELJJGOO_EALIHMJEFFI_OFFSET))(this);
	}

	/*
	::LFDIELJJGOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFDIELJJGOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFDIELJJGOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GGFNHKLGDPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIELJJGOO_GGFNHKLGDPD_OFFSET))(this);
	}
};
