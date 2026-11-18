#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PEPDJMGBPML.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKHPPFILDAG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BKHPPFILDAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACCB0)
#define BKHPPFILDAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKHPPFILDAG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BKHPPFILDAG_IMBILJLNFIM_1_OFFSET UNITYSDK_OFFSET(0x1775EA30)
#define BKHPPFILDAG_IMBILJLNFIM_OFFSET UNITYSDK_OFFSET(0x1775E730)
#define BKHPPFILDAG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACCA0)
#define BKHPPFILDAG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACC90)
#define BKHPPFILDAG___INIT_OFFSET UNITYSDK_OFFSET(0x7ACC70)

inline static constexpr unsigned int BKHPPFILDAG_TypeDefinitionIndex = 12575;

struct alignas(8) BKHPPFILDAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHPPFILDAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKHPPFILDAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BKHPPFILDAG IMBILJLNFIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BKHPPFILDAG EIFONLCJOPG)
	{
		return ((::BKHPPFILDAG(*)(::FlatBuffers::ByteBuffer*, ::BKHPPFILDAG))((::PBYTE)hIl2Cpp + BKHPPFILDAG_IMBILJLNFIM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHPPFILDAG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PEPDJMGBPML& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEPDJMGBPML&, ::System::Int32&))((::PBYTE)hIl2Cpp + BKHPPFILDAG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHPPFILDAG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BKHPPFILDAG IMBILJLNFIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKHPPFILDAG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKHPPFILDAG_IMBILJLNFIM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PEPDJMGBPML& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEPDJMGBPML&))((::PBYTE)hIl2Cpp + BKHPPFILDAG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BKHPPFILDAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKHPPFILDAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKHPPFILDAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
