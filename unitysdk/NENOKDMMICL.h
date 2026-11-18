#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFFPPKADLNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NENOKDMMICL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NENOKDMMICL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5FE0)
#define NENOKDMMICL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NENOKDMMICL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NENOKDMMICL_HMGKKLHGCOB_1_OFFSET UNITYSDK_OFFSET(0x17350800)
#define NENOKDMMICL_HMGKKLHGCOB_OFFSET UNITYSDK_OFFSET(0x173507A0)
#define NENOKDMMICL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5FD0)
#define NENOKDMMICL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5FC0)
#define NENOKDMMICL___INIT_OFFSET UNITYSDK_OFFSET(0x7A5FA0)

inline static constexpr unsigned int NENOKDMMICL_TypeDefinitionIndex = 13253;

struct alignas(8) NENOKDMMICL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENOKDMMICL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NENOKDMMICL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENOKDMMICL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFFPPKADLNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFFPPKADLNF&))((::PBYTE)hIl2Cpp + NENOKDMMICL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FFFPPKADLNF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFFPPKADLNF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NENOKDMMICL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NENOKDMMICL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NENOKDMMICL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NENOKDMMICL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NENOKDMMICL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NENOKDMMICL HMGKKLHGCOB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NENOKDMMICL EIFONLCJOPG)
	{
		return ((::NENOKDMMICL(*)(::FlatBuffers::ByteBuffer*, ::NENOKDMMICL))((::PBYTE)hIl2Cpp + NENOKDMMICL_HMGKKLHGCOB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NENOKDMMICL HMGKKLHGCOB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NENOKDMMICL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NENOKDMMICL_HMGKKLHGCOB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
