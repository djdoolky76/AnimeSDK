#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JBGKOOAFEBJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JBGKOOAFEBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JBGKOOAFEBJ_BKJLECKHPKA_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JBGKOOAFEBJ_FIODAAJLOAN_OFFSET UNITYSDK_OFFSET(0x761240)
#define JBGKOOAFEBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBGKOOAFEBJ_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JBGKOOAFEBJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JBGKOOAFEBJ_TypeDefinitionIndex = 17461;

struct alignas(4) JBGKOOAFEBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::JBGKOOAFEBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBGKOOAFEBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FIODAAJLOAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ_FIODAAJLOAN_OFFSET))(this);
	}

	::System::Boolean BKJLECKHPKA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JBGKOOAFEBJ_BKJLECKHPKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
