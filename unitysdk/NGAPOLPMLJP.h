#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NGAPOLPMLJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NGAPOLPMLJP_GAEHNCNAJGL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NGAPOLPMLJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGAPOLPMLJP_HFGFJDDJLOC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NGAPOLPMLJP_IPIAEGPFOCF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NGAPOLPMLJP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFEB520)
#define NGAPOLPMLJP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NGAPOLPMLJP_TypeDefinitionIndex = 9165;

struct alignas(4) NGAPOLPMLJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAPOLPMLJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGAPOLPMLJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HFGFJDDJLOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAPOLPMLJP_HFGFJDDJLOC_OFFSET))(this);
	}

	::System::String* GAEHNCNAJGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAPOLPMLJP_GAEHNCNAJGL_OFFSET))(this);
	}

	/*
	::NGAPOLPMLJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGAPOLPMLJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGAPOLPMLJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGAPOLPMLJP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NGAPOLPMLJP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NGAPOLPMLJP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IPIAEGPFOCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAPOLPMLJP_IPIAEGPFOCF_OFFSET))(this);
	}
};
