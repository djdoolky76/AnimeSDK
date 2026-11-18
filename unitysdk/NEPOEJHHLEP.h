#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EKBJPFKAIPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEPOEJHHLEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NEPOEJHHLEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA2F0)
#define NEPOEJHHLEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEPOEJHHLEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NEPOEJHHLEP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DA340)
#define NEPOEJHHLEP_PBKPDAPFDJF_1_OFFSET UNITYSDK_OFFSET(0x19117CB0)
#define NEPOEJHHLEP_PBKPDAPFDJF_OFFSET UNITYSDK_OFFSET(0x19117C50)
#define NEPOEJHHLEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA330)
#define NEPOEJHHLEP___INIT_OFFSET UNITYSDK_OFFSET(0x7DA2D0)

inline static constexpr unsigned int NEPOEJHHLEP_TypeDefinitionIndex = 15242;

struct alignas(8) NEPOEJHHLEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEPOEJHHLEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NEPOEJHHLEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEPOEJHHLEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NEPOEJHHLEP PBKPDAPFDJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NEPOEJHHLEP EIFONLCJOPG)
	{
		return ((::NEPOEJHHLEP(*)(::FlatBuffers::ByteBuffer*, ::NEPOEJHHLEP))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_PBKPDAPFDJF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NEPOEJHHLEP PBKPDAPFDJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEPOEJHHLEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_PBKPDAPFDJF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EKBJPFKAIPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EKBJPFKAIPF&))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EKBJPFKAIPF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EKBJPFKAIPF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NEPOEJHHLEP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
