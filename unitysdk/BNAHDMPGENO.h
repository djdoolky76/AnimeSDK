#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BNAHDMPGENO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BNAHDMPGENO_CCLDKNGHPGB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BNAHDMPGENO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNAHDMPGENO_GPFJDFDHJPJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BNAHDMPGENO_JJADMJBFMAE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BNAHDMPGENO_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define BNAHDMPGENO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A537180)
#define BNAHDMPGENO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BNAHDMPGENO_TypeDefinitionIndex = 14693;

struct alignas(4) BNAHDMPGENO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAHDMPGENO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNAHDMPGENO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GPFJDFDHJPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAHDMPGENO_GPFJDFDHJPJ_OFFSET))(this);
	}

	::System::Int32 JJADMJBFMAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAHDMPGENO_JJADMJBFMAE_OFFSET))(this);
	}

	/*
	::BNAHDMPGENO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNAHDMPGENO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNAHDMPGENO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BNAHDMPGENO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BNAHDMPGENO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BNAHDMPGENO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CCLDKNGHPGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAHDMPGENO_CCLDKNGHPGB_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAHDMPGENO_LNOBBAIGKJL_OFFSET))(this);
	}
};
