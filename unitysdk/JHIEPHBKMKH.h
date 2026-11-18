#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHIEPHBKMKH_AHEGKACBEOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHIEPHBKMKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHIEPHBKMKH_CIKGGPBDAFN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JHIEPHBKMKH_DALDLKICIIG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JHIEPHBKMKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHIEPHBKMKH_HNLLCCFMEIJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define JHIEPHBKMKH_KBIMHNFKGOO_OFFSET UNITYSDK_OFFSET(0x754970)
#define JHIEPHBKMKH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHIEPHBKMKH_TypeDefinitionIndex = 10116;

struct alignas(4) JHIEPHBKMKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIEPHBKMKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JHIEPHBKMKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHIEPHBKMKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AHEGKACBEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_AHEGKACBEOH_OFFSET))(this);
	}

	::System::String* CIKGGPBDAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_CIKGGPBDAFN_OFFSET))(this);
	}

	::System::String* DALDLKICIIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_DALDLKICIIG_OFFSET))(this);
	}

	::System::Int32 HNLLCCFMEIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_HNLLCCFMEIJ_OFFSET))(this);
	}

	::System::Int32 KBIMHNFKGOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIEPHBKMKH_KBIMHNFKGOO_OFFSET))(this);
	}
};
