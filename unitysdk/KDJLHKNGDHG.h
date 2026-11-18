#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GJCMOELDGOK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDJLHKNGDHG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDJLHKNGDHG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EAF0)
#define KDJLHKNGDHG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDJLHKNGDHG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDJLHKNGDHG_LPIOGHGLEOM_1_OFFSET UNITYSDK_OFFSET(0x1B4FF990)
#define KDJLHKNGDHG_LPIOGHGLEOM_OFFSET UNITYSDK_OFFSET(0x1B4FF920)
#define KDJLHKNGDHG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EB30)
#define KDJLHKNGDHG___INIT_OFFSET UNITYSDK_OFFSET(0x80EAD0)

inline static constexpr unsigned int KDJLHKNGDHG_TypeDefinitionIndex = 9215;

struct alignas(8) KDJLHKNGDHG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJLHKNGDHG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KDJLHKNGDHG LPIOGHGLEOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDJLHKNGDHG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_LPIOGHGLEOM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDJLHKNGDHG LPIOGHGLEOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDJLHKNGDHG EIFONLCJOPG)
	{
		return ((::KDJLHKNGDHG(*)(::FlatBuffers::ByteBuffer*, ::KDJLHKNGDHG))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_LPIOGHGLEOM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GJCMOELDGOK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GJCMOELDGOK&))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KDJLHKNGDHG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDJLHKNGDHG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJLHKNGDHG_PPOMNIFACOL_OFFSET))(this);
	}
};
