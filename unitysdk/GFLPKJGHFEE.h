#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KEEONNGCFGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFLPKJGHFEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GFLPKJGHFEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B150)
#define GFLPKJGHFEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFLPKJGHFEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFLPKJGHFEE_HNHMAIEDNAF_1_OFFSET UNITYSDK_OFFSET(0x1BAC9610)
#define GFLPKJGHFEE_HNHMAIEDNAF_OFFSET UNITYSDK_OFFSET(0x1BAC95A0)
#define GFLPKJGHFEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B1A0)
#define GFLPKJGHFEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B190)
#define GFLPKJGHFEE___INIT_OFFSET UNITYSDK_OFFSET(0x81B130)

inline static constexpr unsigned int GFLPKJGHFEE_TypeDefinitionIndex = 9498;

struct alignas(8) GFLPKJGHFEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFLPKJGHFEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GFLPKJGHFEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFLPKJGHFEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GFLPKJGHFEE HNHMAIEDNAF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFLPKJGHFEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_HNHMAIEDNAF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KEEONNGCFGO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEEONNGCFGO&, ::System::Int32&))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GFLPKJGHFEE HNHMAIEDNAF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFLPKJGHFEE EIFONLCJOPG)
	{
		return ((::GFLPKJGHFEE(*)(::FlatBuffers::ByteBuffer*, ::GFLPKJGHFEE))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_HNHMAIEDNAF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KEEONNGCFGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEEONNGCFGO&))((::PBYTE)hIl2Cpp + GFLPKJGHFEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
