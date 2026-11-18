#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HIAAHKAGMEM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCFCDJFMEJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCFCDJFMEJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9A20)
#define LCFCDJFMEJF_BMLCMHPAEKN_1_OFFSET UNITYSDK_OFFSET(0x190F85C0)
#define LCFCDJFMEJF_BMLCMHPAEKN_OFFSET UNITYSDK_OFFSET(0x190F8500)
#define LCFCDJFMEJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCFCDJFMEJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCFCDJFMEJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D9A70)
#define LCFCDJFMEJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9A60)
#define LCFCDJFMEJF___INIT_OFFSET UNITYSDK_OFFSET(0x7D9A00)

inline static constexpr unsigned int LCFCDJFMEJF_TypeDefinitionIndex = 13570;

struct alignas(8) LCFCDJFMEJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCFCDJFMEJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HIAAHKAGMEM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HIAAHKAGMEM&))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LCFCDJFMEJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCFCDJFMEJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LCFCDJFMEJF BMLCMHPAEKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCFCDJFMEJF EIFONLCJOPG)
	{
		return ((::LCFCDJFMEJF(*)(::FlatBuffers::ByteBuffer*, ::LCFCDJFMEJF))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_BMLCMHPAEKN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LCFCDJFMEJF BMLCMHPAEKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCFCDJFMEJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_BMLCMHPAEKN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HIAAHKAGMEM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HIAAHKAGMEM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCFCDJFMEJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
