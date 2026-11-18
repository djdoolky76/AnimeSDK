#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IGLDPLCELOD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGLDPLCELOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGLDPLCELOD_BKJLECKHPKA_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define IGLDPLCELOD_DGDINACLCOG_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define IGLDPLCELOD_FIODAAJLOAN_OFFSET UNITYSDK_OFFSET(0x761240)
#define IGLDPLCELOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGLDPLCELOD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IGLDPLCELOD_KAHLCJKJFNN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define IGLDPLCELOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGLDPLCELOD_TypeDefinitionIndex = 11690;

struct alignas(4) IGLDPLCELOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLDPLCELOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGLDPLCELOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLDPLCELOD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::IGLDPLCELOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGLDPLCELOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGLDPLCELOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean DGDINACLCOG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGLDPLCELOD_DGDINACLCOG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BKJLECKHPKA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IGLDPLCELOD_BKJLECKHPKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLDPLCELOD_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 FIODAAJLOAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLDPLCELOD_FIODAAJLOAN_OFFSET))(this);
	}

	::System::Int32 KAHLCJKJFNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLDPLCELOD_KAHLCJKJFNN_OFFSET))(this);
	}
};
