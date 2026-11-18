#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IHBMDCEBMGE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKCOEGCNINN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AKCOEGCNINN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1520)
#define AKCOEGCNINN_FPFMAEKADND_1_OFFSET UNITYSDK_OFFSET(0x17A72460)
#define AKCOEGCNINN_FPFMAEKADND_OFFSET UNITYSDK_OFFSET(0x17A723F0)
#define AKCOEGCNINN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKCOEGCNINN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKCOEGCNINN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1510)
#define AKCOEGCNINN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1560)
#define AKCOEGCNINN___INIT_OFFSET UNITYSDK_OFFSET(0x7B14F0)

inline static constexpr unsigned int AKCOEGCNINN_TypeDefinitionIndex = 12736;

struct alignas(8) AKCOEGCNINN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOEGCNINN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKCOEGCNINN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IHBMDCEBMGE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IHBMDCEBMGE&, ::System::Int32&))((::PBYTE)hIl2Cpp + AKCOEGCNINN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOEGCNINN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IHBMDCEBMGE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IHBMDCEBMGE&))((::PBYTE)hIl2Cpp + AKCOEGCNINN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AKCOEGCNINN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKCOEGCNINN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKCOEGCNINN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOEGCNINN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AKCOEGCNINN FPFMAEKADND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKCOEGCNINN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKCOEGCNINN_FPFMAEKADND_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::AKCOEGCNINN FPFMAEKADND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKCOEGCNINN EIFONLCJOPG)
	{
		return ((::AKCOEGCNINN(*)(::FlatBuffers::ByteBuffer*, ::AKCOEGCNINN))((::PBYTE)hIl2Cpp + AKCOEGCNINN_FPFMAEKADND_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
