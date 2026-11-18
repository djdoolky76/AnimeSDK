#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HANJDMBGIMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMJMLKPBBDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IMJMLKPBBDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E570)
#define IMJMLKPBBDE_CFGHMGKKECK_1_OFFSET UNITYSDK_OFFSET(0x1B4F1040)
#define IMJMLKPBBDE_CFGHMGKKECK_OFFSET UNITYSDK_OFFSET(0x1B4F0FA0)
#define IMJMLKPBBDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMJMLKPBBDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IMJMLKPBBDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E560)
#define IMJMLKPBBDE___INIT_OFFSET UNITYSDK_OFFSET(0x80E540)

inline static constexpr unsigned int IMJMLKPBBDE_TypeDefinitionIndex = 12440;

struct alignas(8) IMJMLKPBBDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJMLKPBBDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HANJDMBGIMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HANJDMBGIMK&))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IMJMLKPBBDE CFGHMGKKECK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IMJMLKPBBDE EIFONLCJOPG)
	{
		return ((::IMJMLKPBBDE(*)(::FlatBuffers::ByteBuffer*, ::IMJMLKPBBDE))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_CFGHMGKKECK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IMJMLKPBBDE CFGHMGKKECK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMJMLKPBBDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_CFGHMGKKECK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IMJMLKPBBDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMJMLKPBBDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJMLKPBBDE_GHKKNCCLPAN_OFFSET))(this);
	}
};
