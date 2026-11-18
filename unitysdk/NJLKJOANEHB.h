#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OPDKBBGGFHP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJLKJOANEHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJLKJOANEHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF1B0)
#define NJLKJOANEHB_CNFKIFBBNCP_1_OFFSET UNITYSDK_OFFSET(0x1D0CA810)
#define NJLKJOANEHB_CNFKIFBBNCP_OFFSET UNITYSDK_OFFSET(0x1D0CA7A0)
#define NJLKJOANEHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJLKJOANEHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJLKJOANEHB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF1A0)
#define NJLKJOANEHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF1F0)
#define NJLKJOANEHB___INIT_OFFSET UNITYSDK_OFFSET(0x8AF180)

inline static constexpr unsigned int NJLKJOANEHB_TypeDefinitionIndex = 12182;

struct alignas(8) NJLKJOANEHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLKJOANEHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLKJOANEHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OPDKBBGGFHP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OPDKBBGGFHP&))((::PBYTE)hIl2Cpp + NJLKJOANEHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OPDKBBGGFHP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OPDKBBGGFHP&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJLKJOANEHB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NJLKJOANEHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLKJOANEHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLKJOANEHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLKJOANEHB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLKJOANEHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NJLKJOANEHB CNFKIFBBNCP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLKJOANEHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLKJOANEHB_CNFKIFBBNCP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NJLKJOANEHB CNFKIFBBNCP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJLKJOANEHB EIFONLCJOPG)
	{
		return ((::NJLKJOANEHB(*)(::FlatBuffers::ByteBuffer*, ::NJLKJOANEHB))((::PBYTE)hIl2Cpp + NJLKJOANEHB_CNFKIFBBNCP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
