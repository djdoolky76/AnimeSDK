#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JPJABODOAOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JPJABODOAOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPJABODOAOF_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JPJABODOAOF_HAKOCLOIMJJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JPJABODOAOF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152FABB0)
#define JPJABODOAOF_OFFCLGALMMJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JPJABODOAOF_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JPJABODOAOF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JPJABODOAOF_TypeDefinitionIndex = 10366;

struct alignas(4) JPJABODOAOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJABODOAOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPJABODOAOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJABODOAOF_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::Int32 HAKOCLOIMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJABODOAOF_HAKOCLOIMJJ_OFFSET))(this);
	}

	/*
	static ::JPJABODOAOF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JPJABODOAOF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JPJABODOAOF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::JPJABODOAOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPJABODOAOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPJABODOAOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJABODOAOF_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 OFFCLGALMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJABODOAOF_OFFCLGALMMJ_OFFSET))(this);
	}
};
