#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MJDPCCCAGKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OONNOPFGEAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OONNOPFGEAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6AD0)
#define OONNOPFGEAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OONNOPFGEAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OONNOPFGEAN_KJNBGOLALKK_1_OFFSET UNITYSDK_OFFSET(0x1736E640)
#define OONNOPFGEAN_KJNBGOLALKK_OFFSET UNITYSDK_OFFSET(0x1736E5D0)
#define OONNOPFGEAN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6B20)
#define OONNOPFGEAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6B10)
#define OONNOPFGEAN___INIT_OFFSET UNITYSDK_OFFSET(0x7A6AB0)

inline static constexpr unsigned int OONNOPFGEAN_TypeDefinitionIndex = 10942;

struct alignas(8) OONNOPFGEAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNOPFGEAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OONNOPFGEAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OONNOPFGEAN KJNBGOLALKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OONNOPFGEAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OONNOPFGEAN_KJNBGOLALKK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNOPFGEAN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OONNOPFGEAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OONNOPFGEAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OONNOPFGEAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNOPFGEAN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MJDPCCCAGKD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJDPCCCAGKD&, ::System::Int32&))((::PBYTE)hIl2Cpp + OONNOPFGEAN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OONNOPFGEAN KJNBGOLALKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OONNOPFGEAN EIFONLCJOPG)
	{
		return ((::OONNOPFGEAN(*)(::FlatBuffers::ByteBuffer*, ::OONNOPFGEAN))((::PBYTE)hIl2Cpp + OONNOPFGEAN_KJNBGOLALKK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MJDPCCCAGKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MJDPCCCAGKD&))((::PBYTE)hIl2Cpp + OONNOPFGEAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
