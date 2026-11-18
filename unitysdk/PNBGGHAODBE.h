#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNBGGHAODBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNBGGHAODBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNBGGHAODBE_IFLLPMDKGME_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PNBGGHAODBE_NIFIOCFLOEO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PNBGGHAODBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF92840)
#define PNBGGHAODBE_OKHOIAAPMLD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNBGGHAODBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNBGGHAODBE_TypeDefinitionIndex = 14740;

struct alignas(4) PNBGGHAODBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGGHAODBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNBGGHAODBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFLLPMDKGME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGGHAODBE_IFLLPMDKGME_OFFSET))(this);
	}

	::System::Int32 OKHOIAAPMLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGGHAODBE_OKHOIAAPMLD_OFFSET))(this);
	}

	/*
	static ::PNBGGHAODBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PNBGGHAODBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PNBGGHAODBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PNBGGHAODBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNBGGHAODBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNBGGHAODBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NIFIOCFLOEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBGGHAODBE_NIFIOCFLOEO_OFFSET))(this);
	}
};
