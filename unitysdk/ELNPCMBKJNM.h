#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KPCACIBKDDF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELNPCMBKJNM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ELNPCMBKJNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7390)
#define ELNPCMBKJNM_EJEHMNGJHNI_1_OFFSET UNITYSDK_OFFSET(0x174503C0)
#define ELNPCMBKJNM_EJEHMNGJHNI_OFFSET UNITYSDK_OFFSET(0x17450350)
#define ELNPCMBKJNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELNPCMBKJNM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ELNPCMBKJNM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7370)
#define ELNPCMBKJNM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7380)
#define ELNPCMBKJNM___INIT_OFFSET UNITYSDK_OFFSET(0x7A7350)

inline static constexpr unsigned int ELNPCMBKJNM_TypeDefinitionIndex = 13303;

struct alignas(8) ELNPCMBKJNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELNPCMBKJNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KPCACIBKDDF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPCACIBKDDF&, ::System::Int32&))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ELNPCMBKJNM EJEHMNGJHNI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELNPCMBKJNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_EJEHMNGJHNI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ELNPCMBKJNM EJEHMNGJHNI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ELNPCMBKJNM EIFONLCJOPG)
	{
		return ((::ELNPCMBKJNM(*)(::FlatBuffers::ByteBuffer*, ::ELNPCMBKJNM))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_EJEHMNGJHNI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ELNPCMBKJNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELNPCMBKJNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KPCACIBKDDF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPCACIBKDDF&))((::PBYTE)hIl2Cpp + ELNPCMBKJNM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
