#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NOJIKBHAJNJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NOJIKBHAJNJ_AMAIFCDBPNF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NOJIKBHAJNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NOJIKBHAJNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOJIKBHAJNJ_GIGBMDPMFGL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NOJIKBHAJNJ_LPOIKAILEAL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NOJIKBHAJNJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NOJIKBHAJNJ_TypeDefinitionIndex = 12218;

struct alignas(4) NOJIKBHAJNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AMAIFCDBPNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ_AMAIFCDBPNF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::NOJIKBHAJNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOJIKBHAJNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LPOIKAILEAL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ_LPOIKAILEAL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GIGBMDPMFGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJIKBHAJNJ_GIGBMDPMFGL_OFFSET))(this);
	}
};
