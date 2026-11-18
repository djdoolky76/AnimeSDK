#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKPGMDLBJNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHBHLFJADCH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHBHLFJADCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789FC0)
#define FHBHLFJADCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHBHLFJADCH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHBHLFJADCH_HBJCFBGLIJP_1_OFFSET UNITYSDK_OFFSET(0x16639530)
#define FHBHLFJADCH_HBJCFBGLIJP_OFFSET UNITYSDK_OFFSET(0x16639470)
#define FHBHLFJADCH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789FB0)
#define FHBHLFJADCH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78A000)
#define FHBHLFJADCH___INIT_OFFSET UNITYSDK_OFFSET(0x789F90)

inline static constexpr unsigned int FHBHLFJADCH_TypeDefinitionIndex = 10067;

struct alignas(8) FHBHLFJADCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHLFJADCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHBHLFJADCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AKPGMDLBJNM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKPGMDLBJNM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHBHLFJADCH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FHBHLFJADCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHBHLFJADCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHBHLFJADCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHBHLFJADCH HBJCFBGLIJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHBHLFJADCH EIFONLCJOPG)
	{
		return ((::FHBHLFJADCH(*)(::FlatBuffers::ByteBuffer*, ::FHBHLFJADCH))((::PBYTE)hIl2Cpp + FHBHLFJADCH_HBJCFBGLIJP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHLFJADCH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHLFJADCH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKPGMDLBJNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKPGMDLBJNM&))((::PBYTE)hIl2Cpp + FHBHLFJADCH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FHBHLFJADCH HBJCFBGLIJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHBHLFJADCH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHBHLFJADCH_HBJCFBGLIJP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
