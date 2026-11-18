#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMMPAKIJIOH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APGOFENBBDA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define APGOFENBBDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECC20)
#define APGOFENBBDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APGOFENBBDA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APGOFENBBDA_JLKIEKGGIAP_1_OFFSET UNITYSDK_OFFSET(0x19BDE2F0)
#define APGOFENBBDA_JLKIEKGGIAP_OFFSET UNITYSDK_OFFSET(0x19BDE290)
#define APGOFENBBDA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ECC60)
#define APGOFENBBDA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECC70)
#define APGOFENBBDA___INIT_OFFSET UNITYSDK_OFFSET(0x7ECC00)

inline static constexpr unsigned int APGOFENBBDA_TypeDefinitionIndex = 12539;

struct alignas(8) APGOFENBBDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOFENBBDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APGOFENBBDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOFENBBDA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMMPAKIJIOH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMMPAKIJIOH&))((::PBYTE)hIl2Cpp + APGOFENBBDA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::APGOFENBBDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APGOFENBBDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APGOFENBBDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMMPAKIJIOH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMMPAKIJIOH&, ::System::Int32&))((::PBYTE)hIl2Cpp + APGOFENBBDA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::APGOFENBBDA JLKIEKGGIAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APGOFENBBDA EIFONLCJOPG)
	{
		return ((::APGOFENBBDA(*)(::FlatBuffers::ByteBuffer*, ::APGOFENBBDA))((::PBYTE)hIl2Cpp + APGOFENBBDA_JLKIEKGGIAP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APGOFENBBDA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::APGOFENBBDA JLKIEKGGIAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APGOFENBBDA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APGOFENBBDA_JLKIEKGGIAP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
