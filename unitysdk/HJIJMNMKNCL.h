#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HJIJMNMKNCL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define HJIJMNMKNCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HJIJMNMKNCL_CLIDAJLEMCI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HJIJMNMKNCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJIJMNMKNCL_HNKECDKGKKP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HJIJMNMKNCL_LELGKJLJHHJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HJIJMNMKNCL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HJIJMNMKNCL_TypeDefinitionIndex = 9206;

struct alignas(4) HJIJMNMKNCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIJMNMKNCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJIJMNMKNCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HNKECDKGKKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIJMNMKNCL_HNKECDKGKKP_OFFSET))(this);
	}

	/*
	::HJIJMNMKNCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJIJMNMKNCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJIJMNMKNCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIJMNMKNCL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LELGKJLJHHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIJMNMKNCL_LELGKJLJHHJ_OFFSET))(this);
	}

	::System::String* CLIDAJLEMCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIJMNMKNCL_CLIDAJLEMCI_OFFSET))(this);
	}
};
