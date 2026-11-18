#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CLHFKNIAAMB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CLHFKNIAAMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLHFKNIAAMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLHFKNIAAMB_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CLHFKNIAAMB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define CLHFKNIAAMB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AD16C0)
#define CLHFKNIAAMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLHFKNIAAMB_TypeDefinitionIndex = 15654;

struct alignas(4) CLHFKNIAAMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFKNIAAMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLHFKNIAAMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CLHFKNIAAMB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CLHFKNIAAMB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLHFKNIAAMB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFKNIAAMB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::CLHFKNIAAMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLHFKNIAAMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLHFKNIAAMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFKNIAAMB_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHFKNIAAMB_HJFCIELMJPA_OFFSET))(this);
	}
};
