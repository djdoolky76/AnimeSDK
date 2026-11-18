#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFOJOOPBGKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLKELEMOOLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLKELEMOOLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DD30)
#define HLKELEMOOLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLKELEMOOLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLKELEMOOLM_KAOLPBOLHHL_1_OFFSET UNITYSDK_OFFSET(0x1B4E38D0)
#define HLKELEMOOLM_KAOLPBOLHHL_OFFSET UNITYSDK_OFFSET(0x1B4E3860)
#define HLKELEMOOLM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80DD20)
#define HLKELEMOOLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DD10)
#define HLKELEMOOLM___INIT_OFFSET UNITYSDK_OFFSET(0x80DCF0)

inline static constexpr unsigned int HLKELEMOOLM_TypeDefinitionIndex = 16403;

struct alignas(8) HLKELEMOOLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKELEMOOLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKELEMOOLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HLKELEMOOLM KAOLPBOLHHL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLKELEMOOLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKELEMOOLM_KAOLPBOLHHL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKELEMOOLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HLKELEMOOLM KAOLPBOLHHL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLKELEMOOLM EIFONLCJOPG)
	{
		return ((::HLKELEMOOLM(*)(::FlatBuffers::ByteBuffer*, ::HLKELEMOOLM))((::PBYTE)hIl2Cpp + HLKELEMOOLM_KAOLPBOLHHL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFOJOOPBGKM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFOJOOPBGKM&, ::System::Int32&))((::PBYTE)hIl2Cpp + HLKELEMOOLM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HLKELEMOOLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLKELEMOOLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLKELEMOOLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKELEMOOLM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFOJOOPBGKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFOJOOPBGKM&))((::PBYTE)hIl2Cpp + HLKELEMOOLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
