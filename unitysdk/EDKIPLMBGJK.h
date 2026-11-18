#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IOOKGIKFOFE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDKIPLMBGJK_AJKHPJNLMDH_1_OFFSET UNITYSDK_OFFSET(0x157675A0)
#define EDKIPLMBGJK_AJKHPJNLMDH_OFFSET UNITYSDK_OFFSET(0x15767530)
#define EDKIPLMBGJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EDKIPLMBGJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763320)
#define EDKIPLMBGJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDKIPLMBGJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDKIPLMBGJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x763360)
#define EDKIPLMBGJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x763370)
#define EDKIPLMBGJK___INIT_OFFSET UNITYSDK_OFFSET(0x763300)

inline static constexpr unsigned int EDKIPLMBGJK_TypeDefinitionIndex = 9805;

struct alignas(8) EDKIPLMBGJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDKIPLMBGJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EDKIPLMBGJK AJKHPJNLMDH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDKIPLMBGJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_AJKHPJNLMDH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EDKIPLMBGJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDKIPLMBGJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IOOKGIKFOFE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOOKGIKFOFE&, ::System::Int32&))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EDKIPLMBGJK AJKHPJNLMDH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDKIPLMBGJK EIFONLCJOPG)
	{
		return ((::EDKIPLMBGJK(*)(::FlatBuffers::ByteBuffer*, ::EDKIPLMBGJK))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_AJKHPJNLMDH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IOOKGIKFOFE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOOKGIKFOFE&))((::PBYTE)hIl2Cpp + EDKIPLMBGJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
