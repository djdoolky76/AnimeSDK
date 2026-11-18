#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKEJPIONECD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFDCLNABDKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GFDCLNABDKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78ADE0)
#define GFDCLNABDKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFDCLNABDKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFDCLNABDKB_LGHMCNCNBJO_1_OFFSET UNITYSDK_OFFSET(0x166474B0)
#define GFDCLNABDKB_LGHMCNCNBJO_OFFSET UNITYSDK_OFFSET(0x16647250)
#define GFDCLNABDKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78AE30)
#define GFDCLNABDKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78AE20)
#define GFDCLNABDKB___INIT_OFFSET UNITYSDK_OFFSET(0x78ADC0)

inline static constexpr unsigned int GFDCLNABDKB_TypeDefinitionIndex = 12722;

struct alignas(8) GFDCLNABDKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCLNABDKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDCLNABDKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKEJPIONECD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKEJPIONECD&))((::PBYTE)hIl2Cpp + GFDCLNABDKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GFDCLNABDKB LGHMCNCNBJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFDCLNABDKB EIFONLCJOPG)
	{
		return ((::GFDCLNABDKB(*)(::FlatBuffers::ByteBuffer*, ::GFDCLNABDKB))((::PBYTE)hIl2Cpp + GFDCLNABDKB_LGHMCNCNBJO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GFDCLNABDKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDCLNABDKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDCLNABDKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCLNABDKB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCLNABDKB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MKEJPIONECD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKEJPIONECD&, ::System::Int32&))((::PBYTE)hIl2Cpp + GFDCLNABDKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GFDCLNABDKB LGHMCNCNBJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDCLNABDKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDCLNABDKB_LGHMCNCNBJO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
