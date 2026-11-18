#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GJJHGFIKNLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GJJHGFIKNLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJJHGFIKNLG_JKCBKJPCDJM_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define GJJHGFIKNLG_MPIDGDJCDMO_OFFSET UNITYSDK_OFFSET(0x762670)
#define GJJHGFIKNLG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GJJHGFIKNLG_TypeDefinitionIndex = 15456;

struct alignas(4) GJJHGFIKNLG
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJHGFIKNLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJJHGFIKNLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GJJHGFIKNLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJJHGFIKNLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJJHGFIKNLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MPIDGDJCDMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJHGFIKNLG_MPIDGDJCDMO_OFFSET))(this);
	}

	::System::Int32 JKCBKJPCDJM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJHGFIKNLG_JKCBKJPCDJM_OFFSET))(this);
	}
};
