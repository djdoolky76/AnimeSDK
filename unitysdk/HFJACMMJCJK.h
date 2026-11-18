#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HFJACMMJCJK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HFJACMMJCJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HFJACMMJCJK_EMLLHHIODFJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define HFJACMMJCJK_GCKCJPKGNFP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HFJACMMJCJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFJACMMJCJK_IKNMBNJIEKM_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define HFJACMMJCJK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HFJACMMJCJK_TypeDefinitionIndex = 15401;

struct alignas(4) HFJACMMJCJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJACMMJCJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFJACMMJCJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EMLLHHIODFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJACMMJCJK_EMLLHHIODFJ_OFFSET))(this);
	}

	::System::Boolean IKNMBNJIEKM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HFJACMMJCJK_IKNMBNJIEKM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HFJACMMJCJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFJACMMJCJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFJACMMJCJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJACMMJCJK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GCKCJPKGNFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJACMMJCJK_GCKCJPKGNFP_OFFSET))(this);
	}
};
