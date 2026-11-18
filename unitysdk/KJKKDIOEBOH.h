#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KJKKDIOEBOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KJKKDIOEBOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJKKDIOEBOH_JFLGCOEHGNO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KJKKDIOEBOH_JJDKPDEMAPH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KJKKDIOEBOH_LFHGEGFGHLM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KJKKDIOEBOH_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KJKKDIOEBOH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5FBBE0)
#define KJKKDIOEBOH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KJKKDIOEBOH_TypeDefinitionIndex = 10323;

struct alignas(4) KJKKDIOEBOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJKKDIOEBOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KJKKDIOEBOH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KJKKDIOEBOH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_NFDDMGBFGNI_OFFSET))(this);
	}

	/*
	::KJKKDIOEBOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJKKDIOEBOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JFLGCOEHGNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_JFLGCOEHGNO_OFFSET))(this);
	}

	::System::Int32 JJDKPDEMAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_JJDKPDEMAPH_OFFSET))(this);
	}

	::System::String* LFHGEGFGHLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKKDIOEBOH_LFHGEGFGHLM_OFFSET))(this);
	}
};
