#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNNPELFIFLF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDIKCBCCOCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EDIKCBCCOCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2850)
#define EDIKCBCCOCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDIKCBCCOCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDIKCBCCOCD_JJCDHGMABCN_1_OFFSET UNITYSDK_OFFSET(0x17AA5560)
#define EDIKCBCCOCD_JJCDHGMABCN_OFFSET UNITYSDK_OFFSET(0x17AA54F0)
#define EDIKCBCCOCD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2830)
#define EDIKCBCCOCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2840)
#define EDIKCBCCOCD___INIT_OFFSET UNITYSDK_OFFSET(0x7B2810)

inline static constexpr unsigned int EDIKCBCCOCD_TypeDefinitionIndex = 11018;

struct alignas(8) EDIKCBCCOCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDIKCBCCOCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FNNPELFIFLF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNNPELFIFLF&))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FNNPELFIFLF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNNPELFIFLF&, ::System::Int32&))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EDIKCBCCOCD JJCDHGMABCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDIKCBCCOCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_JJCDHGMABCN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EDIKCBCCOCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDIKCBCCOCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EDIKCBCCOCD JJCDHGMABCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDIKCBCCOCD EIFONLCJOPG)
	{
		return ((::EDIKCBCCOCD(*)(::FlatBuffers::ByteBuffer*, ::EDIKCBCCOCD))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_JJCDHGMABCN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKCBCCOCD_GHKKNCCLPAN_OFFSET))(this);
	}
};
