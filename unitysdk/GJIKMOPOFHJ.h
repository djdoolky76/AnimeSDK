#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPDGHLJKHJG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJIKMOPOFHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJIKMOPOFHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779620)
#define GJIKMOPOFHJ_BKMMLMMGOJN_1_OFFSET UNITYSDK_OFFSET(0x160E5120)
#define GJIKMOPOFHJ_BKMMLMMGOJN_OFFSET UNITYSDK_OFFSET(0x160E50B0)
#define GJIKMOPOFHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJIKMOPOFHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJIKMOPOFHJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779610)
#define GJIKMOPOFHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779600)
#define GJIKMOPOFHJ___INIT_OFFSET UNITYSDK_OFFSET(0x7795E0)

inline static constexpr unsigned int GJIKMOPOFHJ_TypeDefinitionIndex = 11211;

struct alignas(8) GJIKMOPOFHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MPDGHLJKHJG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPDGHLJKHJG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GJIKMOPOFHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJIKMOPOFHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GJIKMOPOFHJ BKMMLMMGOJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJIKMOPOFHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_BKMMLMMGOJN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPDGHLJKHJG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPDGHLJKHJG&))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GJIKMOPOFHJ BKMMLMMGOJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJIKMOPOFHJ EIFONLCJOPG)
	{
		return ((::GJIKMOPOFHJ(*)(::FlatBuffers::ByteBuffer*, ::GJIKMOPOFHJ))((::PBYTE)hIl2Cpp + GJIKMOPOFHJ_BKMMLMMGOJN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
