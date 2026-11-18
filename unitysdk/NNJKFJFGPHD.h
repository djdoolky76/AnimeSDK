#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DAPEHNFOGIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNJKFJFGPHD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNJKFJFGPHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6A90)
#define NNJKFJFGPHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNJKFJFGPHD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNJKFJFGPHD_HCLCKIIACPP_1_OFFSET UNITYSDK_OFFSET(0x195BDE80)
#define NNJKFJFGPHD_HCLCKIIACPP_OFFSET UNITYSDK_OFFSET(0x195BDE10)
#define NNJKFJFGPHD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6AD0)
#define NNJKFJFGPHD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6A80)
#define NNJKFJFGPHD___INIT_OFFSET UNITYSDK_OFFSET(0x7E6A60)

inline static constexpr unsigned int NNJKFJFGPHD_TypeDefinitionIndex = 13341;

struct alignas(8) NNJKFJFGPHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJKFJFGPHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NNJKFJFGPHD HCLCKIIACPP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNJKFJFGPHD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_HCLCKIIACPP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NNJKFJFGPHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNJKFJFGPHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DAPEHNFOGIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAPEHNFOGIN&))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DAPEHNFOGIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAPEHNFOGIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NNJKFJFGPHD HCLCKIIACPP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNJKFJFGPHD EIFONLCJOPG)
	{
		return ((::NNJKFJFGPHD(*)(::FlatBuffers::ByteBuffer*, ::NNJKFJFGPHD))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_HCLCKIIACPP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJKFJFGPHD_GHKKNCCLPAN_OFFSET))(this);
	}
};
