#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCMMOHEMLHD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEJKPOMOBJA_AEDBGAGJBGL_1_OFFSET UNITYSDK_OFFSET(0x1BA85DB0)
#define LEJKPOMOBJA_AEDBGAGJBGL_OFFSET UNITYSDK_OFFSET(0x1BA85D10)
#define LEJKPOMOBJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LEJKPOMOBJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819A60)
#define LEJKPOMOBJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEJKPOMOBJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LEJKPOMOBJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819AA0)
#define LEJKPOMOBJA___INIT_OFFSET UNITYSDK_OFFSET(0x819A40)

inline static constexpr unsigned int LEJKPOMOBJA_TypeDefinitionIndex = 15930;

struct alignas(8) LEJKPOMOBJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEJKPOMOBJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LEJKPOMOBJA AEDBGAGJBGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEJKPOMOBJA EIFONLCJOPG)
	{
		return ((::LEJKPOMOBJA(*)(::FlatBuffers::ByteBuffer*, ::LEJKPOMOBJA))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_AEDBGAGJBGL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LEJKPOMOBJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEJKPOMOBJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LEJKPOMOBJA AEDBGAGJBGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEJKPOMOBJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_AEDBGAGJBGL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCMMOHEMLHD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCMMOHEMLHD&))((::PBYTE)hIl2Cpp + LEJKPOMOBJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
