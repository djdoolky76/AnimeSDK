#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCBBKGEEMGK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDPOPCMAMBH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EDPOPCMAMBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766550)
#define EDPOPCMAMBH_ECHBMLACHBK_1_OFFSET UNITYSDK_OFFSET(0x157AD370)
#define EDPOPCMAMBH_ECHBMLACHBK_OFFSET UNITYSDK_OFFSET(0x157AD300)
#define EDPOPCMAMBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDPOPCMAMBH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDPOPCMAMBH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x766530)
#define EDPOPCMAMBH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766540)
#define EDPOPCMAMBH___INIT_OFFSET UNITYSDK_OFFSET(0x766510)

inline static constexpr unsigned int EDPOPCMAMBH_TypeDefinitionIndex = 10376;

struct alignas(8) EDPOPCMAMBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDPOPCMAMBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KCBBKGEEMGK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCBBKGEEMGK&, ::System::Int32&))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EDPOPCMAMBH ECHBMLACHBK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDPOPCMAMBH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_ECHBMLACHBK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EDPOPCMAMBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDPOPCMAMBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EDPOPCMAMBH ECHBMLACHBK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDPOPCMAMBH EIFONLCJOPG)
	{
		return ((::EDPOPCMAMBH(*)(::FlatBuffers::ByteBuffer*, ::EDPOPCMAMBH))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_ECHBMLACHBK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCBBKGEEMGK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCBBKGEEMGK&))((::PBYTE)hIl2Cpp + EDPOPCMAMBH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
