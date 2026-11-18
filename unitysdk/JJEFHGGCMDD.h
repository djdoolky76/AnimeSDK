#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JJEFHGGCMDD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJEFHGGCMDD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJEFHGGCMDD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJEFHGGCMDD_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JJEFHGGCMDD_HPGMILGBBJA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JJEFHGGCMDD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1748DC90)
#define JJEFHGGCMDD_PECDODLKJGP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JJEFHGGCMDD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJEFHGGCMDD_TypeDefinitionIndex = 16569;

struct alignas(4) JJEFHGGCMDD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJEFHGGCMDD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_HJFCIELMJPA_OFFSET))(this);
	}

	::System::Int32 HPGMILGBBJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_HPGMILGBBJA_OFFSET))(this);
	}

	::System::String* PECDODLKJGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_PECDODLKJGP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JJEFHGGCMDD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJEFHGGCMDD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JJEFHGGCMDD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JJEFHGGCMDD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JJEFHGGCMDD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
