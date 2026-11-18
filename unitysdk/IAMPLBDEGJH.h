#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHJOCKEPIBC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAMPLBDEGJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IAMPLBDEGJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8770)
#define IAMPLBDEGJH_BJGLKMCBMFK_1_OFFSET UNITYSDK_OFFSET(0x1A4F4A20)
#define IAMPLBDEGJH_BJGLKMCBMFK_OFFSET UNITYSDK_OFFSET(0x1A4F4960)
#define IAMPLBDEGJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAMPLBDEGJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IAMPLBDEGJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F87C0)
#define IAMPLBDEGJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F87B0)
#define IAMPLBDEGJH___INIT_OFFSET UNITYSDK_OFFSET(0x7F8750)

inline static constexpr unsigned int IAMPLBDEGJH_TypeDefinitionIndex = 16891;

struct alignas(8) IAMPLBDEGJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAMPLBDEGJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IAMPLBDEGJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAMPLBDEGJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IAMPLBDEGJH BJGLKMCBMFK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IAMPLBDEGJH EIFONLCJOPG)
	{
		return ((::IAMPLBDEGJH(*)(::FlatBuffers::ByteBuffer*, ::IAMPLBDEGJH))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_BJGLKMCBMFK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IAMPLBDEGJH BJGLKMCBMFK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAMPLBDEGJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_BJGLKMCBMFK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CHJOCKEPIBC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHJOCKEPIBC&, ::System::Int32&))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHJOCKEPIBC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHJOCKEPIBC&))((::PBYTE)hIl2Cpp + IAMPLBDEGJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
