#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCKAKFNNFEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFBFJFBCGLP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NFBFJFBCGLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6070)
#define NFBFJFBCGLP_ENANLLDJDKB_1_OFFSET UNITYSDK_OFFSET(0x17350FF0)
#define NFBFJFBCGLP_ENANLLDJDKB_OFFSET UNITYSDK_OFFSET(0x17350F80)
#define NFBFJFBCGLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFBFJFBCGLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NFBFJFBCGLP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6060)
#define NFBFJFBCGLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A60B0)
#define NFBFJFBCGLP___INIT_OFFSET UNITYSDK_OFFSET(0x7A6040)

inline static constexpr unsigned int NFBFJFBCGLP_TypeDefinitionIndex = 12620;

struct alignas(8) NFBFJFBCGLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFBFJFBCGLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCKAKFNNFEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCKAKFNNFEG&))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NFBFJFBCGLP ENANLLDJDKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFBFJFBCGLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_ENANLLDJDKB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DCKAKFNNFEG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCKAKFNNFEG&, ::System::Int32&))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NFBFJFBCGLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFBFJFBCGLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NFBFJFBCGLP ENANLLDJDKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NFBFJFBCGLP EIFONLCJOPG)
	{
		return ((::NFBFJFBCGLP(*)(::FlatBuffers::ByteBuffer*, ::NFBFJFBCGLP))((::PBYTE)hIl2Cpp + NFBFJFBCGLP_ENANLLDJDKB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
