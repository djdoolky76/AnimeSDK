#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MALOEEEJELF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGBAAHNJABB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PGBAAHNJABB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820E60)
#define PGBAAHNJABB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGBAAHNJABB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PGBAAHNJABB_HMHFFOJBLDP_1_OFFSET UNITYSDK_OFFSET(0x1C1ACA70)
#define PGBAAHNJABB_HMHFFOJBLDP_OFFSET UNITYSDK_OFFSET(0x1C1AC9D0)
#define PGBAAHNJABB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820E50)
#define PGBAAHNJABB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820EA0)
#define PGBAAHNJABB___INIT_OFFSET UNITYSDK_OFFSET(0x820E30)

inline static constexpr unsigned int PGBAAHNJABB_TypeDefinitionIndex = 13020;

struct alignas(8) PGBAAHNJABB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBAAHNJABB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGBAAHNJABB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MALOEEEJELF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MALOEEEJELF&))((::PBYTE)hIl2Cpp + PGBAAHNJABB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MALOEEEJELF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MALOEEEJELF&, ::System::Int32&))((::PBYTE)hIl2Cpp + PGBAAHNJABB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBAAHNJABB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PGBAAHNJABB HMHFFOJBLDP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PGBAAHNJABB EIFONLCJOPG)
	{
		return ((::PGBAAHNJABB(*)(::FlatBuffers::ByteBuffer*, ::PGBAAHNJABB))((::PBYTE)hIl2Cpp + PGBAAHNJABB_HMHFFOJBLDP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PGBAAHNJABB HMHFFOJBLDP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGBAAHNJABB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGBAAHNJABB_HMHFFOJBLDP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PGBAAHNJABB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGBAAHNJABB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGBAAHNJABB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBAAHNJABB_PPOMNIFACOL_OFFSET))(this);
	}
};
