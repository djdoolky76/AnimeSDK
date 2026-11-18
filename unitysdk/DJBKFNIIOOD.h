#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DJBKFNIIOOD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DJBKFNIIOOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DJBKFNIIOOD_BKMPOONFPMC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DJBKFNIIOOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJBKFNIIOOD_IAGCCEABPGA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DJBKFNIIOOD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19ADB430)
#define DJBKFNIIOOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DJBKFNIIOOD_TypeDefinitionIndex = 13580;

struct alignas(4) DJBKFNIIOOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBKFNIIOOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJBKFNIIOOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBKFNIIOOD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DJBKFNIIOOD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DJBKFNIIOOD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DJBKFNIIOOD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DJBKFNIIOOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJBKFNIIOOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJBKFNIIOOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IAGCCEABPGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBKFNIIOOD_IAGCCEABPGA_OFFSET))(this);
	}

	::System::Int32 BKMPOONFPMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBKFNIIOOD_BKMPOONFPMC_OFFSET))(this);
	}
};
