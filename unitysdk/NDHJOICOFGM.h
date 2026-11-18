#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJFOBCJEHGE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDHJOICOFGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDHJOICOFGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805400)
#define NDHJOICOFGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDHJOICOFGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDHJOICOFGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8053F0)
#define NDHJOICOFGM_MFJCJMLPKDO_1_OFFSET UNITYSDK_OFFSET(0x1AD7BE60)
#define NDHJOICOFGM_MFJCJMLPKDO_OFFSET UNITYSDK_OFFSET(0x1AD7BCC0)
#define NDHJOICOFGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8053E0)
#define NDHJOICOFGM___INIT_OFFSET UNITYSDK_OFFSET(0x8053C0)

inline static constexpr unsigned int NDHJOICOFGM_TypeDefinitionIndex = 11374;

struct alignas(8) NDHJOICOFGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJOICOFGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDHJOICOFGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NDHJOICOFGM MFJCJMLPKDO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDHJOICOFGM EIFONLCJOPG)
	{
		return ((::NDHJOICOFGM(*)(::FlatBuffers::ByteBuffer*, ::NDHJOICOFGM))((::PBYTE)hIl2Cpp + NDHJOICOFGM_MFJCJMLPKDO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJOICOFGM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJFOBCJEHGE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJFOBCJEHGE&))((::PBYTE)hIl2Cpp + NDHJOICOFGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NDHJOICOFGM MFJCJMLPKDO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDHJOICOFGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDHJOICOFGM_MFJCJMLPKDO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJFOBCJEHGE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJFOBCJEHGE&, ::System::Int32&))((::PBYTE)hIl2Cpp + NDHJOICOFGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NDHJOICOFGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDHJOICOFGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDHJOICOFGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJOICOFGM_GHKKNCCLPAN_OFFSET))(this);
	}
};
