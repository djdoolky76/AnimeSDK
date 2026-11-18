#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGMFMFHJBCM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDEAONEHGOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDEAONEHGOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811B70)
#define GDEAONEHGOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDEAONEHGOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDEAONEHGOO_HOFAHAMMBKB_1_OFFSET UNITYSDK_OFFSET(0x1B7B6430)
#define GDEAONEHGOO_HOFAHAMMBKB_OFFSET UNITYSDK_OFFSET(0x1B7B6390)
#define GDEAONEHGOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811BB0)
#define GDEAONEHGOO___INIT_OFFSET UNITYSDK_OFFSET(0x811B50)

inline static constexpr unsigned int GDEAONEHGOO_TypeDefinitionIndex = 12262;

struct alignas(8) GDEAONEHGOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEAONEHGOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDEAONEHGOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEAONEHGOO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGMFMFHJBCM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGMFMFHJBCM&))((::PBYTE)hIl2Cpp + GDEAONEHGOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GDEAONEHGOO HOFAHAMMBKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDEAONEHGOO EIFONLCJOPG)
	{
		return ((::GDEAONEHGOO(*)(::FlatBuffers::ByteBuffer*, ::GDEAONEHGOO))((::PBYTE)hIl2Cpp + GDEAONEHGOO_HOFAHAMMBKB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GDEAONEHGOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDEAONEHGOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDEAONEHGOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEAONEHGOO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GDEAONEHGOO HOFAHAMMBKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDEAONEHGOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDEAONEHGOO_HOFAHAMMBKB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
