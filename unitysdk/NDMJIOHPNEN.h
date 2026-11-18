#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NDMJIOHPNEN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDMJIOHPNEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDMJIOHPNEN_BKJLECKHPKA_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NDMJIOHPNEN_DGDINACLCOG_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NDMJIOHPNEN_FIODAAJLOAN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NDMJIOHPNEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDMJIOHPNEN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define NDMJIOHPNEN_KAHLCJKJFNN_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NDMJIOHPNEN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0C3370)
#define NDMJIOHPNEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDMJIOHPNEN_TypeDefinitionIndex = 13345;

struct alignas(4) NDMJIOHPNEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDMJIOHPNEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FIODAAJLOAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_FIODAAJLOAN_OFFSET))(this);
	}

	/*
	::NDMJIOHPNEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDMJIOHPNEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDMJIOHPNEN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDMJIOHPNEN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BKJLECKHPKA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_BKJLECKHPKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KAHLCJKJFNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_KAHLCJKJFNN_OFFSET))(this);
	}

	::System::Boolean DGDINACLCOG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_DGDINACLCOG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMJIOHPNEN_HKELPCLHLEC_OFFSET))(this);
	}
};
