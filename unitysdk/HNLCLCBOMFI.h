#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOHMKGPKKLN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNLCLCBOMFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNLCLCBOMFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BA30)
#define HNLCLCBOMFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNLCLCBOMFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNLCLCBOMFI_KFBOKMFCPPN_1_OFFSET UNITYSDK_OFFSET(0x1BADFDD0)
#define HNLCLCBOMFI_KFBOKMFCPPN_OFFSET UNITYSDK_OFFSET(0x1BADFD60)
#define HNLCLCBOMFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81BA70)
#define HNLCLCBOMFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BA20)
#define HNLCLCBOMFI___INIT_OFFSET UNITYSDK_OFFSET(0x81BA00)

inline static constexpr unsigned int HNLCLCBOMFI_TypeDefinitionIndex = 12821;

struct alignas(8) HNLCLCBOMFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLCLCBOMFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNLCLCBOMFI KFBOKMFCPPN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNLCLCBOMFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_KFBOKMFCPPN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HNLCLCBOMFI KFBOKMFCPPN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNLCLCBOMFI EIFONLCJOPG)
	{
		return ((::HNLCLCBOMFI(*)(::FlatBuffers::ByteBuffer*, ::HNLCLCBOMFI))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_KFBOKMFCPPN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HNLCLCBOMFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNLCLCBOMFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 OPNEHHHAJEO, ::KOHMKGPKKLN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::KOHMKGPKKLN&, ::System::Int32&))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, OPNEHHHAJEO, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOHMKGPKKLN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOHMKGPKKLN&))((::PBYTE)hIl2Cpp + HNLCLCBOMFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
