#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLIOAOBONDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHBJOFELCKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OHBJOFELCKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6D00)
#define OHBJOFELCKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHBJOFELCKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OHBJOFELCKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6CE0)
#define OHBJOFELCKJ_NELDIGMKNBM_1_OFFSET UNITYSDK_OFFSET(0x195C5DD0)
#define OHBJOFELCKJ_NELDIGMKNBM_OFFSET UNITYSDK_OFFSET(0x195C5CD0)
#define OHBJOFELCKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6CF0)
#define OHBJOFELCKJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E6CC0)

inline static constexpr unsigned int OHBJOFELCKJ_TypeDefinitionIndex = 11338;

struct alignas(8) OHBJOFELCKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHBJOFELCKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FLIOAOBONDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLIOAOBONDK&))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FLIOAOBONDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLIOAOBONDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OHBJOFELCKJ NELDIGMKNBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OHBJOFELCKJ EIFONLCJOPG)
	{
		return ((::OHBJOFELCKJ(*)(::FlatBuffers::ByteBuffer*, ::OHBJOFELCKJ))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_NELDIGMKNBM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OHBJOFELCKJ NELDIGMKNBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHBJOFELCKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_NELDIGMKNBM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::OHBJOFELCKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHBJOFELCKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHBJOFELCKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
