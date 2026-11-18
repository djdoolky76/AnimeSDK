#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OMHIFBAABEJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OMHIFBAABEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMHIFBAABEJ_CAJMBBGNNED_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define OMHIFBAABEJ_DIPCNJBJNFI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OMHIFBAABEJ_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMHIFBAABEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMHIFBAABEJ_NILELEBPLLK_OFFSET UNITYSDK_OFFSET(0x761240)
#define OMHIFBAABEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMHIFBAABEJ_TypeDefinitionIndex = 9438;

struct alignas(4) OMHIFBAABEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMHIFBAABEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NILELEBPLLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_NILELEBPLLK_OFFSET))(this);
	}

	::System::Boolean CAJMBBGNNED(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_CAJMBBGNNED_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OMHIFBAABEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMHIFBAABEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DIPCNJBJNFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_DIPCNJBJNFI_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHIFBAABEJ_DNKLBHKEDEM_OFFSET))(this);
	}
};
