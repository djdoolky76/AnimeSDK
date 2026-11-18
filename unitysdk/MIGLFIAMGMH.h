#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OIKCNNLKAAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIGLFIAMGMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MIGLFIAMGMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AAED0)
#define MIGLFIAMGMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIGLFIAMGMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MIGLFIAMGMH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813870)
#define MIGLFIAMGMH_MOKMKDGDBIP_1_OFFSET UNITYSDK_OFFSET(0x1CFDE5B0)
#define MIGLFIAMGMH_MOKMKDGDBIP_OFFSET UNITYSDK_OFFSET(0x1CFDE540)
#define MIGLFIAMGMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AAF10)
#define MIGLFIAMGMH___INIT_OFFSET UNITYSDK_OFFSET(0x813850)

inline static constexpr unsigned int MIGLFIAMGMH_TypeDefinitionIndex = 15710;

struct alignas(8) MIGLFIAMGMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIGLFIAMGMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OIKCNNLKAAI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OIKCNNLKAAI&, ::System::Int32&))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MIGLFIAMGMH MOKMKDGDBIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIGLFIAMGMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_MOKMKDGDBIP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MIGLFIAMGMH MOKMKDGDBIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MIGLFIAMGMH EIFONLCJOPG)
	{
		return ((::MIGLFIAMGMH(*)(::FlatBuffers::ByteBuffer*, ::MIGLFIAMGMH))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_MOKMKDGDBIP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MIGLFIAMGMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIGLFIAMGMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OIKCNNLKAAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OIKCNNLKAAI&))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLFIAMGMH_PPOMNIFACOL_OFFSET))(this);
	}
};
