#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HFHJEOKKPLI_AJHNCGJBCCB_OFFSET UNITYSDK_OFFSET(0x754920)
#define HFHJEOKKPLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HFHJEOKKPLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFHJEOKKPLI_HLIIFOGCNMK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HFHJEOKKPLI_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HFHJEOKKPLI_NJLEDBKAEPF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HFHJEOKKPLI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160F1F10)
#define HFHJEOKKPLI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HFHJEOKKPLI_TypeDefinitionIndex = 15437;

struct alignas(4) HFHJEOKKPLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFHJEOKKPLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 AJHNCGJBCCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_AJHNCGJBCCB_OFFSET))(this);
	}

	::System::Int32 HLIIFOGCNMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_HLIIFOGCNMK_OFFSET))(this);
	}

	/*
	static ::HFHJEOKKPLI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HFHJEOKKPLI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HFHJEOKKPLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFHJEOKKPLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NJLEDBKAEPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHJEOKKPLI_NJLEDBKAEPF_OFFSET))(this);
	}
};
