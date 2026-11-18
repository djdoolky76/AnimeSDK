#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CPPHADHKBCN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CPPHADHKBCN_AIOIGFMPKII_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define CPPHADHKBCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CPPHADHKBCN_DENBGHPAMIL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CPPHADHKBCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPPHADHKBCN_ICELFLFIBDK_OFFSET UNITYSDK_OFFSET(0x754920)
#define CPPHADHKBCN_IILCHGEPMGI_OFFSET UNITYSDK_OFFSET(0x756360)
#define CPPHADHKBCN_KACFKIIMCAO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CPPHADHKBCN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F35910)
#define CPPHADHKBCN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CPPHADHKBCN_TypeDefinitionIndex = 10900;

struct alignas(4) CPPHADHKBCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHADHKBCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPPHADHKBCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KACFKIIMCAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHADHKBCN_KACFKIIMCAO_OFFSET))(this);
	}

	/*
	::CPPHADHKBCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPPHADHKBCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPPHADHKBCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ICELFLFIBDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHADHKBCN_ICELFLFIBDK_OFFSET))(this);
	}

	/*
	static ::CPPHADHKBCN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CPPHADHKBCN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CPPHADHKBCN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AIOIGFMPKII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHADHKBCN_AIOIGFMPKII_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHADHKBCN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DENBGHPAMIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPHADHKBCN_DENBGHPAMIL_OFFSET))(this);
	}

	::System::Boolean IILCHGEPMGI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CPPHADHKBCN_IILCHGEPMGI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
