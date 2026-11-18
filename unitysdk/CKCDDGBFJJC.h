#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DKEHIGCANOL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKCDDGBFJJC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKCDDGBFJJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762280)
#define CKCDDGBFJJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKCDDGBFJJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKCDDGBFJJC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x762260)
#define CKCDDGBFJJC_LNBKHPDHHOO_1_OFFSET UNITYSDK_OFFSET(0x15742800)
#define CKCDDGBFJJC_LNBKHPDHHOO_OFFSET UNITYSDK_OFFSET(0x15742760)
#define CKCDDGBFJJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762270)
#define CKCDDGBFJJC___INIT_OFFSET UNITYSDK_OFFSET(0x762240)

inline static constexpr unsigned int CKCDDGBFJJC_TypeDefinitionIndex = 14111;

struct alignas(8) CKCDDGBFJJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKCDDGBFJJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DKEHIGCANOL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKEHIGCANOL&, ::System::Int32&))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DKEHIGCANOL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKEHIGCANOL&))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CKCDDGBFJJC LNBKHPDHHOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKCDDGBFJJC EIFONLCJOPG)
	{
		return ((::CKCDDGBFJJC(*)(::FlatBuffers::ByteBuffer*, ::CKCDDGBFJJC))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_LNBKHPDHHOO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CKCDDGBFJJC LNBKHPDHHOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKCDDGBFJJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_LNBKHPDHHOO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CKCDDGBFJJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKCDDGBFJJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKCDDGBFJJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
