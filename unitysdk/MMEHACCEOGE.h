#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBMFEODCDCG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMEHACCEOGE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMEHACCEOGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8028D0)
#define MMEHACCEOGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMEHACCEOGE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMEHACCEOGE_GIJIPKEAAFA_1_OFFSET UNITYSDK_OFFSET(0x1AB11280)
#define MMEHACCEOGE_GIJIPKEAAFA_OFFSET UNITYSDK_OFFSET(0x1AB11220)
#define MMEHACCEOGE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x802910)
#define MMEHACCEOGE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802920)
#define MMEHACCEOGE___INIT_OFFSET UNITYSDK_OFFSET(0x8028B0)

inline static constexpr unsigned int MMEHACCEOGE_TypeDefinitionIndex = 13663;

struct alignas(8) MMEHACCEOGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEHACCEOGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMEHACCEOGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MMEHACCEOGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMEHACCEOGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMEHACCEOGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KBMFEODCDCG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBMFEODCDCG&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMEHACCEOGE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBMFEODCDCG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBMFEODCDCG&))((::PBYTE)hIl2Cpp + MMEHACCEOGE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MMEHACCEOGE GIJIPKEAAFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMEHACCEOGE EIFONLCJOPG)
	{
		return ((::MMEHACCEOGE(*)(::FlatBuffers::ByteBuffer*, ::MMEHACCEOGE))((::PBYTE)hIl2Cpp + MMEHACCEOGE_GIJIPKEAAFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MMEHACCEOGE GIJIPKEAAFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMEHACCEOGE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMEHACCEOGE_GIJIPKEAAFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEHACCEOGE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEHACCEOGE_PPOMNIFACOL_OFFSET))(this);
	}
};
