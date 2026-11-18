#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CDHGEJMDOPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDHGEJMDOPG_DLEOAPGONGO_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define CDHGEJMDOPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDHGEJMDOPG_GHABPCGFBAM_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define CDHGEJMDOPG_NIMLPNMCEEK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDHGEJMDOPG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADB7930)
#define CDHGEJMDOPG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDHGEJMDOPG_TypeDefinitionIndex = 13061;

struct alignas(4) CDHGEJMDOPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHGEJMDOPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDHGEJMDOPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean DLEOAPGONGO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CDHGEJMDOPG_DLEOAPGONGO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CDHGEJMDOPG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CDHGEJMDOPG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CDHGEJMDOPG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CDHGEJMDOPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDHGEJMDOPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDHGEJMDOPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHABPCGFBAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHGEJMDOPG_GHABPCGFBAM_OFFSET))(this);
	}

	::System::Int32 NIMLPNMCEEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHGEJMDOPG_NIMLPNMCEEK_OFFSET))(this);
	}
};
