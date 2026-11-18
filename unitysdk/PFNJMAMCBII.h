#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MADGGMCPHIM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFNJMAMCBII_AIOAIHBJIAA_1_OFFSET UNITYSDK_OFFSET(0x1C0AC940)
#define PFNJMAMCBII_AIOAIHBJIAA_OFFSET UNITYSDK_OFFSET(0x1C0AC8D0)
#define PFNJMAMCBII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFNJMAMCBII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FB30)
#define PFNJMAMCBII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFNJMAMCBII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFNJMAMCBII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FB70)
#define PFNJMAMCBII___INIT_OFFSET UNITYSDK_OFFSET(0x81FB10)

inline static constexpr unsigned int PFNJMAMCBII_TypeDefinitionIndex = 12852;

struct alignas(8) PFNJMAMCBII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJMAMCBII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNJMAMCBII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PFNJMAMCBII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFNJMAMCBII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNJMAMCBII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MADGGMCPHIM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MADGGMCPHIM&))((::PBYTE)hIl2Cpp + PFNJMAMCBII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PFNJMAMCBII AIOAIHBJIAA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFNJMAMCBII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNJMAMCBII_AIOAIHBJIAA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJMAMCBII_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNJMAMCBII_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PFNJMAMCBII AIOAIHBJIAA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFNJMAMCBII EIFONLCJOPG)
	{
		return ((::PFNJMAMCBII(*)(::FlatBuffers::ByteBuffer*, ::PFNJMAMCBII))((::PBYTE)hIl2Cpp + PFNJMAMCBII_AIOAIHBJIAA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
