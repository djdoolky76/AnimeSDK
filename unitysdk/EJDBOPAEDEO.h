#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EJDBOPAEDEO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJDBOPAEDEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJDBOPAEDEO_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EJDBOPAEDEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJDBOPAEDEO_GFLOAIEGPAG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EJDBOPAEDEO_KHEADICPOPD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EJDBOPAEDEO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B0FBBC0)
#define EJDBOPAEDEO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJDBOPAEDEO_TypeDefinitionIndex = 13067;

struct alignas(4) EJDBOPAEDEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJDBOPAEDEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GFLOAIEGPAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_GFLOAIEGPAG_OFFSET))(this);
	}

	/*
	::EJDBOPAEDEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJDBOPAEDEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KHEADICPOPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_KHEADICPOPD_OFFSET))(this);
	}

	/*
	static ::EJDBOPAEDEO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 BBBFDPIHEEP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EJDBOPAEDEO(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, BBBFDPIHEEP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDBOPAEDEO_ACOEONABOJL_OFFSET))(this);
	}
};
