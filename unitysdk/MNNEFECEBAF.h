#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNAKIMIMIJK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNNEFECEBAF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNNEFECEBAF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AED10)
#define MNNEFECEBAF_CFPMPOCJJFP_1_OFFSET UNITYSDK_OFFSET(0x1D0BB540)
#define MNNEFECEBAF_CFPMPOCJJFP_OFFSET UNITYSDK_OFFSET(0x1D0BB280)
#define MNNEFECEBAF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNNEFECEBAF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNNEFECEBAF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AED50)
#define MNNEFECEBAF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AED60)
#define MNNEFECEBAF___INIT_OFFSET UNITYSDK_OFFSET(0x8AECF0)

inline static constexpr unsigned int MNNEFECEBAF_TypeDefinitionIndex = 9873;

struct alignas(8) MNNEFECEBAF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNEFECEBAF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNNEFECEBAF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MNNEFECEBAF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNNEFECEBAF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNNEFECEBAF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MNNEFECEBAF CFPMPOCJJFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNNEFECEBAF EIFONLCJOPG)
	{
		return ((::MNNEFECEBAF(*)(::FlatBuffers::ByteBuffer*, ::MNNEFECEBAF))((::PBYTE)hIl2Cpp + MNNEFECEBAF_CFPMPOCJJFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNEFECEBAF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNAKIMIMIJK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNAKIMIMIJK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNNEFECEBAF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNAKIMIMIJK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNAKIMIMIJK&))((::PBYTE)hIl2Cpp + MNNEFECEBAF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MNNEFECEBAF CFPMPOCJJFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNNEFECEBAF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNNEFECEBAF_CFPMPOCJJFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNEFECEBAF_PPOMNIFACOL_OFFSET))(this);
	}
};
