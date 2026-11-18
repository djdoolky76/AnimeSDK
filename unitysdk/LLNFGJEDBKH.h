#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LLNFGJEDBKH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LLNFGJEDBKH_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define LLNFGJEDBKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LLNFGJEDBKH_BJACBMEHNKD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LLNFGJEDBKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLNFGJEDBKH_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LLNFGJEDBKH_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LLNFGJEDBKH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1956D330)
#define LLNFGJEDBKH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LLNFGJEDBKH_TypeDefinitionIndex = 17238;

struct alignas(4) LLNFGJEDBKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLNFGJEDBKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_AKJEBFJMGCJ_OFFSET))(this);
	}

	/*
	::LLNFGJEDBKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLNFGJEDBKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BJACBMEHNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_BJACBMEHNKD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_MNBGAIEPADE_OFFSET))(this);
	}

	/*
	static ::LLNFGJEDBKH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LLNFGJEDBKH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LLNFGJEDBKH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
