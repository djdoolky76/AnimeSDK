#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CNOFAIOIPNK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x76F1A0)
#define CNOFAIOIPNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CNOFAIOIPNK_CLHBIBCMAFK_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define CNOFAIOIPNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNOFAIOIPNK_HOCKHAAPODL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CNOFAIOIPNK_IIOGJOJJDEL_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define CNOFAIOIPNK_KLMMABKPPCP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CNOFAIOIPNK_LLKBLHKCCGM_OFFSET UNITYSDK_OFFSET(0x766790)
#define CNOFAIOIPNK_MFHOFLMBINI_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define CNOFAIOIPNK_MIACFPDNFMK_OFFSET UNITYSDK_OFFSET(0x78A030)
#define CNOFAIOIPNK_NKDCCKAAKGJ_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define CNOFAIOIPNK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CNOFAIOIPNK_TypeDefinitionIndex = 16844;

struct alignas(4) CNOFAIOIPNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNOFAIOIPNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single IIOGJOJJDEL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_IIOGJOJJDEL_OFFSET))(this);
	}

	::System::Single MFHOFLMBINI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_MFHOFLMBINI_OFFSET))(this);
	}

	::System::Int32 HOCKHAAPODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_HOCKHAAPODL_OFFSET))(this);
	}

	::System::Int32 KLMMABKPPCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_KLMMABKPPCP_OFFSET))(this);
	}

	::System::UInt64 ACOEONABOJL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Single NKDCCKAAKGJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_NKDCCKAAKGJ_OFFSET))(this);
	}

	::System::Single CLHBIBCMAFK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_CLHBIBCMAFK_OFFSET))(this);
	}

	::System::Single LLKBLHKCCGM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_LLKBLHKCCGM_OFFSET))(this);
	}

	/*
	::CNOFAIOIPNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNOFAIOIPNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single MIACFPDNFMK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFAIOIPNK_MIACFPDNFMK_OFFSET))(this);
	}
};
