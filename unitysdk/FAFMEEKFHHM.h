#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGEKAADAOOJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAFMEEKFHHM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FAFMEEKFHHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2B20)
#define FAFMEEKFHHM_EJHJHEOOLJL_1_OFFSET UNITYSDK_OFFSET(0x17AAD630)
#define FAFMEEKFHHM_EJHJHEOOLJL_OFFSET UNITYSDK_OFFSET(0x17AAD5C0)
#define FAFMEEKFHHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FAFMEEKFHHM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FAFMEEKFHHM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2B70)
#define FAFMEEKFHHM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2B60)
#define FAFMEEKFHHM___INIT_OFFSET UNITYSDK_OFFSET(0x7B2B00)

inline static constexpr unsigned int FAFMEEKFHHM_TypeDefinitionIndex = 12355;

struct alignas(8) FAFMEEKFHHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAFMEEKFHHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FAFMEEKFHHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAFMEEKFHHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGEKAADAOOJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGEKAADAOOJ&))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KGEKAADAOOJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGEKAADAOOJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FAFMEEKFHHM EJHJHEOOLJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAFMEEKFHHM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_EJHJHEOOLJL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FAFMEEKFHHM EJHJHEOOLJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FAFMEEKFHHM EIFONLCJOPG)
	{
		return ((::FAFMEEKFHHM(*)(::FlatBuffers::ByteBuffer*, ::FAFMEEKFHHM))((::PBYTE)hIl2Cpp + FAFMEEKFHHM_EJHJHEOOLJL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
