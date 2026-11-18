#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EGFJBMBJBMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGFJBMBJBMK_DDFADKIHAPG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGFJBMBJBMK_DPBAFANMMJI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EGFJBMBJBMK_FCOKAJGHMBH_OFFSET UNITYSDK_OFFSET(0x755790)
#define EGFJBMBJBMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGFJBMBJBMK_MHBMHADDLIO_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EGFJBMBJBMK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A59BBC0)
#define EGFJBMBJBMK_OMEENAIGOKL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EGFJBMBJBMK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGFJBMBJBMK_TypeDefinitionIndex = 11317;

struct alignas(4) EGFJBMBJBMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGFJBMBJBMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DPBAFANMMJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_DPBAFANMMJI_OFFSET))(this);
	}

	::System::Int32 OMEENAIGOKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_OMEENAIGOKL_OFFSET))(this);
	}

	/*
	::EGFJBMBJBMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGFJBMBJBMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EGFJBMBJBMK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EGFJBMBJBMK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DDFADKIHAPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_DDFADKIHAPG_OFFSET))(this);
	}

	::System::Int32 FCOKAJGHMBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_FCOKAJGHMBH_OFFSET))(this);
	}

	::System::Boolean MHBMHADDLIO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EGFJBMBJBMK_MHBMHADDLIO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
