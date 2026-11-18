#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PJMGFIHFLCI_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PJMGFIHFLCI_APBLFOAGGJK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PJMGFIHFLCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PJMGFIHFLCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJMGFIHFLCI_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PJMGFIHFLCI_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PJMGFIHFLCI_OKHJNNEJKDG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PJMGFIHFLCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PJMGFIHFLCI_TypeDefinitionIndex = 16209;

struct alignas(4) PJMGFIHFLCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJMGFIHFLCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::Int32 APBLFOAGGJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_APBLFOAGGJK_OFFSET))(this);
	}

	/*
	::PJMGFIHFLCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJMGFIHFLCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OKHJNNEJKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_OKHJNNEJKDG_OFFSET))(this);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGFIHFLCI_ADBBCNFGHPJ_OFFSET))(this);
	}
};
