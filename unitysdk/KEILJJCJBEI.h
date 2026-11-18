#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KEILJJCJBEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KEILJJCJBEI_BOPOIPGDNKN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KEILJJCJBEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEILJJCJBEI_LKKMMBIJNFB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KEILJJCJBEI_MGFNLLKPGEA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KEILJJCJBEI_NCJJHGHPKCK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KEILJJCJBEI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B640AF0)
#define KEILJJCJBEI_PLNLLMEGAML_OFFSET UNITYSDK_OFFSET(0x754920)
#define KEILJJCJBEI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KEILJJCJBEI_TypeDefinitionIndex = 12157;

struct alignas(4) KEILJJCJBEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEILJJCJBEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEILJJCJBEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MGFNLLKPGEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEILJJCJBEI_MGFNLLKPGEA_OFFSET))(this);
	}

	::System::Int32 PLNLLMEGAML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEILJJCJBEI_PLNLLMEGAML_OFFSET))(this);
	}

	::System::Int32 NCJJHGHPKCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEILJJCJBEI_NCJJHGHPKCK_OFFSET))(this);
	}

	::System::Int32 BOPOIPGDNKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEILJJCJBEI_BOPOIPGDNKN_OFFSET))(this);
	}

	/*
	static ::KEILJJCJBEI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KEILJJCJBEI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KEILJJCJBEI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LKKMMBIJNFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEILJJCJBEI_LKKMMBIJNFB_OFFSET))(this);
	}

	/*
	::KEILJJCJBEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEILJJCJBEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEILJJCJBEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
