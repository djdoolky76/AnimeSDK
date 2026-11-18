#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KGJLLNLGJOD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGJLLNLGJOD_ADNIDMMBDHB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KGJLLNLGJOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGJLLNLGJOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGJLLNLGJOD_KNACEBGBMMM_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define KGJLLNLGJOD_NHCIHGHJKBA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KGJLLNLGJOD_PBEJFDAIJEC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define KGJLLNLGJOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGJLLNLGJOD_TypeDefinitionIndex = 11793;

struct alignas(4) KGJLLNLGJOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGJLLNLGJOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KGJLLNLGJOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGJLLNLGJOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PBEJFDAIJEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_PBEJFDAIJEC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ADNIDMMBDHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_ADNIDMMBDHB_OFFSET))(this);
	}

	::System::Boolean KNACEBGBMMM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_KNACEBGBMMM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NHCIHGHJKBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJLLNLGJOD_NHCIHGHJKBA_OFFSET))(this);
	}
};
