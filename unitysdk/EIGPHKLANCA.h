#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LLEJKOMKPJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIGPHKLANCA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIGPHKLANCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE1B0)
#define EIGPHKLANCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIGPHKLANCA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIGPHKLANCA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE190)
#define EIGPHKLANCA_MALKFBGDNBN_1_OFFSET UNITYSDK_OFFSET(0x19C10870)
#define EIGPHKLANCA_MALKFBGDNBN_OFFSET UNITYSDK_OFFSET(0x19C107D0)
#define EIGPHKLANCA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE1A0)
#define EIGPHKLANCA___INIT_OFFSET UNITYSDK_OFFSET(0x7EE170)

inline static constexpr unsigned int EIGPHKLANCA_TypeDefinitionIndex = 17064;

struct alignas(8) EIGPHKLANCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGPHKLANCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGPHKLANCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LLEJKOMKPJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLEJKOMKPJN&))((::PBYTE)hIl2Cpp + EIGPHKLANCA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EIGPHKLANCA MALKFBGDNBN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIGPHKLANCA EIFONLCJOPG)
	{
		return ((::EIGPHKLANCA(*)(::FlatBuffers::ByteBuffer*, ::EIGPHKLANCA))((::PBYTE)hIl2Cpp + EIGPHKLANCA_MALKFBGDNBN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EIGPHKLANCA MALKFBGDNBN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGPHKLANCA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGPHKLANCA_MALKFBGDNBN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LLEJKOMKPJN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLEJKOMKPJN&, ::System::Int32&))((::PBYTE)hIl2Cpp + EIGPHKLANCA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGPHKLANCA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGPHKLANCA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EIGPHKLANCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGPHKLANCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGPHKLANCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
