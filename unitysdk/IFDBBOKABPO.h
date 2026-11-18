#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHBBIAOBPKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFDBBOKABPO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFDBBOKABPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A85A0)
#define IFDBBOKABPO_ELOMCLNDDAC_1_OFFSET UNITYSDK_OFFSET(0x1747D000)
#define IFDBBOKABPO_ELOMCLNDDAC_OFFSET UNITYSDK_OFFSET(0x1747CF60)
#define IFDBBOKABPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFDBBOKABPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFDBBOKABPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8590)
#define IFDBBOKABPO___INIT_OFFSET UNITYSDK_OFFSET(0x7A8570)

inline static constexpr unsigned int IFDBBOKABPO_TypeDefinitionIndex = 15056;

struct alignas(8) IFDBBOKABPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDBBOKABPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFDBBOKABPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDBBOKABPO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHBBIAOBPKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHBBIAOBPKD&))((::PBYTE)hIl2Cpp + IFDBBOKABPO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDBBOKABPO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IFDBBOKABPO ELOMCLNDDAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFDBBOKABPO EIFONLCJOPG)
	{
		return ((::IFDBBOKABPO(*)(::FlatBuffers::ByteBuffer*, ::IFDBBOKABPO))((::PBYTE)hIl2Cpp + IFDBBOKABPO_ELOMCLNDDAC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IFDBBOKABPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFDBBOKABPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFDBBOKABPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFDBBOKABPO ELOMCLNDDAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFDBBOKABPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFDBBOKABPO_ELOMCLNDDAC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
