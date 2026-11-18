#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CNOFAIOIPNK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKEFODEOKOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NKEFODEOKOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F410)
#define NKEFODEOKOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKEFODEOKOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NKEFODEOKOO_KAKNJJECCCP_1_OFFSET UNITYSDK_OFFSET(0x1C0951B0)
#define NKEFODEOKOO_KAKNJJECCCP_OFFSET UNITYSDK_OFFSET(0x1C095140)
#define NKEFODEOKOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F450)
#define NKEFODEOKOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F400)
#define NKEFODEOKOO___INIT_OFFSET UNITYSDK_OFFSET(0x81F3E0)

inline static constexpr unsigned int NKEFODEOKOO_TypeDefinitionIndex = 11353;

struct alignas(8) NKEFODEOKOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEFODEOKOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKEFODEOKOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NKEFODEOKOO KAKNJJECCCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKEFODEOKOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKEFODEOKOO_KAKNJJECCCP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CNOFAIOIPNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNOFAIOIPNK&))((::PBYTE)hIl2Cpp + NKEFODEOKOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NKEFODEOKOO KAKNJJECCCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NKEFODEOKOO EIFONLCJOPG)
	{
		return ((::NKEFODEOKOO(*)(::FlatBuffers::ByteBuffer*, ::NKEFODEOKOO))((::PBYTE)hIl2Cpp + NKEFODEOKOO_KAKNJJECCCP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEFODEOKOO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt64>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEFODEOKOO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NKEFODEOKOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKEFODEOKOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKEFODEOKOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::UInt64 MCOHLHMKLIP, ::CNOFAIOIPNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::CNOFAIOIPNK&))((::PBYTE)hIl2Cpp + NKEFODEOKOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}
};
