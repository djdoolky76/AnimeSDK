#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPNFBNKKNJI_ABMCEMGJAEB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LPNFBNKKNJI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPNFBNKKNJI_BOFLONEPMII_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LPNFBNKKNJI_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPNFBNKKNJI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPNFBNKKNJI_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LPNFBNKKNJI_HNOMNPJOKCH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LPNFBNKKNJI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPNFBNKKNJI_TypeDefinitionIndex = 16583;

struct alignas(4) LPNFBNKKNJI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPNFBNKKNJI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BOFLONEPMII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_BOFLONEPMII_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 HNOMNPJOKCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_HNOMNPJOKCH_OFFSET))(this);
	}

	/*
	::LPNFBNKKNJI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPNFBNKKNJI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ABMCEMGJAEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_ABMCEMGJAEB_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNFBNKKNJI_HDDENLNIPMA_OFFSET))(this);
	}
};
