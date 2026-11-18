#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMPOCALBAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOHGLGMEOIN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOHGLGMEOIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2DE0)
#define DOHGLGMEOIN_BJGADIPCLKG_1_OFFSET UNITYSDK_OFFSET(0x19513890)
#define DOHGLGMEOIN_BJGADIPCLKG_OFFSET UNITYSDK_OFFSET(0x19513820)
#define DOHGLGMEOIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOHGLGMEOIN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOHGLGMEOIN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2E30)
#define DOHGLGMEOIN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2E20)
#define DOHGLGMEOIN___INIT_OFFSET UNITYSDK_OFFSET(0x7E2DC0)

inline static constexpr unsigned int DOHGLGMEOIN_TypeDefinitionIndex = 14551;

struct alignas(8) DOHGLGMEOIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOHGLGMEOIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DOHGLGMEOIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOHGLGMEOIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IFMPOCALBAN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMPOCALBAN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IFMPOCALBAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMPOCALBAN&))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DOHGLGMEOIN BJGADIPCLKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOHGLGMEOIN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_BJGADIPCLKG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DOHGLGMEOIN BJGADIPCLKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOHGLGMEOIN EIFONLCJOPG)
	{
		return ((::DOHGLGMEOIN(*)(::FlatBuffers::ByteBuffer*, ::DOHGLGMEOIN))((::PBYTE)hIl2Cpp + DOHGLGMEOIN_BJGADIPCLKG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
