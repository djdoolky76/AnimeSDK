#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BCAFOJDHJIA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BCAFOJDHJIA_AGJJHNDAHEG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BCAFOJDHJIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BCAFOJDHJIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCAFOJDHJIA_KDKMKNHINKA_OFFSET UNITYSDK_OFFSET(0x754920)
#define BCAFOJDHJIA_NLLBGAEDMPP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BCAFOJDHJIA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A76CC0)
#define BCAFOJDHJIA_PGIKMGJJKNP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BCAFOJDHJIA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BCAFOJDHJIA_TypeDefinitionIndex = 9874;

struct alignas(4) BCAFOJDHJIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCAFOJDHJIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BCAFOJDHJIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCAFOJDHJIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PGIKMGJJKNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_PGIKMGJJKNP_OFFSET))(this);
	}

	::System::Int32 NLLBGAEDMPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_NLLBGAEDMPP_OFFSET))(this);
	}

	::System::Int32 AGJJHNDAHEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_AGJJHNDAHEG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::BCAFOJDHJIA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BCAFOJDHJIA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KDKMKNHINKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAFOJDHJIA_KDKMKNHINKA_OFFSET))(this);
	}
};
