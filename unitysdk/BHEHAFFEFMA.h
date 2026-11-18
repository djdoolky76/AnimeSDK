#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCKLOCEHDGJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHEHAFFEFMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHEHAFFEFMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7616B0)
#define BHEHAFFEFMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHEHAFFEFMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHEHAFFEFMA_GIBGMFLDALL_1_OFFSET UNITYSDK_OFFSET(0x1572A6C0)
#define BHEHAFFEFMA_GIBGMFLDALL_OFFSET UNITYSDK_OFFSET(0x1572A650)
#define BHEHAFFEFMA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x761690)
#define BHEHAFFEFMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7616A0)
#define BHEHAFFEFMA___INIT_OFFSET UNITYSDK_OFFSET(0x761670)

inline static constexpr unsigned int BHEHAFFEFMA_TypeDefinitionIndex = 11528;

struct alignas(8) BHEHAFFEFMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEHAFFEFMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OCKLOCEHDGJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCKLOCEHDGJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BHEHAFFEFMA GIBGMFLDALL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHEHAFFEFMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_GIBGMFLDALL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OCKLOCEHDGJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCKLOCEHDGJ&))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BHEHAFFEFMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHEHAFFEFMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BHEHAFFEFMA GIBGMFLDALL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHEHAFFEFMA EIFONLCJOPG)
	{
		return ((::BHEHAFFEFMA(*)(::FlatBuffers::ByteBuffer*, ::BHEHAFFEFMA))((::PBYTE)hIl2Cpp + BHEHAFFEFMA_GIBGMFLDALL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
