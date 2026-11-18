#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DJNBABOHAJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACLFPNCFGKK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ACLFPNCFGKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1C40)
#define ACLFPNCFGKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACLFPNCFGKK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACLFPNCFGKK_HLHAHJCDOBG_1_OFFSET UNITYSDK_OFFSET(0x194E55E0)
#define ACLFPNCFGKK_HLHAHJCDOBG_OFFSET UNITYSDK_OFFSET(0x194E5570)
#define ACLFPNCFGKK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E1C20)
#define ACLFPNCFGKK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1C30)
#define ACLFPNCFGKK___INIT_OFFSET UNITYSDK_OFFSET(0x7E1C00)

inline static constexpr unsigned int ACLFPNCFGKK_TypeDefinitionIndex = 17489;

struct alignas(8) ACLFPNCFGKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACLFPNCFGKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DJNBABOHAJN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJNBABOHAJN&, ::System::Int32&))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ACLFPNCFGKK HLHAHJCDOBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACLFPNCFGKK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_HLHAHJCDOBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DJNBABOHAJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJNBABOHAJN&))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ACLFPNCFGKK HLHAHJCDOBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACLFPNCFGKK EIFONLCJOPG)
	{
		return ((::ACLFPNCFGKK(*)(::FlatBuffers::ByteBuffer*, ::ACLFPNCFGKK))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_HLHAHJCDOBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ACLFPNCFGKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACLFPNCFGKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACLFPNCFGKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
