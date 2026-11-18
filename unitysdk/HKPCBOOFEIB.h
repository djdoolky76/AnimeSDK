#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HKPCBOOFEIB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HKPCBOOFEIB_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HKPCBOOFEIB_BGLOMIDKDNL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HKPCBOOFEIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HKPCBOOFEIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKPCBOOFEIB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A8F4C0)
#define HKPCBOOFEIB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HKPCBOOFEIB_TypeDefinitionIndex = 12729;

struct alignas(4) HKPCBOOFEIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCBOOFEIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKPCBOOFEIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCBOOFEIB_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	static ::HKPCBOOFEIB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HKPCBOOFEIB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HKPCBOOFEIB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HKPCBOOFEIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKPCBOOFEIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKPCBOOFEIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCBOOFEIB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* BGLOMIDKDNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPCBOOFEIB_BGLOMIDKDNL_OFFSET))(this);
	}
};
