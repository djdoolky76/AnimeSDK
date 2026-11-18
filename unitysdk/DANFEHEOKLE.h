#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KIAIBCPBCII.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DANFEHEOKLE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DANFEHEOKLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB790)
#define DANFEHEOKLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DANFEHEOKLE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DANFEHEOKLE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB780)
#define DANFEHEOKLE_MEKDEMKBGMB_1_OFFSET UNITYSDK_OFFSET(0x1A58C670)
#define DANFEHEOKLE_MEKDEMKBGMB_OFFSET UNITYSDK_OFFSET(0x1A58C5D0)
#define DANFEHEOKLE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB770)
#define DANFEHEOKLE___INIT_OFFSET UNITYSDK_OFFSET(0x7FB750)

inline static constexpr unsigned int DANFEHEOKLE_TypeDefinitionIndex = 9836;

struct alignas(8) DANFEHEOKLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANFEHEOKLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANFEHEOKLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANFEHEOKLE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANFEHEOKLE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KIAIBCPBCII& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIAIBCPBCII&, ::System::Int32&))((::PBYTE)hIl2Cpp + DANFEHEOKLE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DANFEHEOKLE MEKDEMKBGMB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DANFEHEOKLE EIFONLCJOPG)
	{
		return ((::DANFEHEOKLE(*)(::FlatBuffers::ByteBuffer*, ::DANFEHEOKLE))((::PBYTE)hIl2Cpp + DANFEHEOKLE_MEKDEMKBGMB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KIAIBCPBCII& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIAIBCPBCII&))((::PBYTE)hIl2Cpp + DANFEHEOKLE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DANFEHEOKLE MEKDEMKBGMB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DANFEHEOKLE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANFEHEOKLE_MEKDEMKBGMB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DANFEHEOKLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DANFEHEOKLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANFEHEOKLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
