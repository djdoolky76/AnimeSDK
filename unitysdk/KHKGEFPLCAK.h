#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDEGNKINJFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHKGEFPLCAK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHKGEFPLCAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758A80)
#define KHKGEFPLCAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHKGEFPLCAK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHKGEFPLCAK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758AC0)
#define KHKGEFPLCAK_MCDFJPDPLJB_1_OFFSET UNITYSDK_OFFSET(0x15301F80)
#define KHKGEFPLCAK_MCDFJPDPLJB_OFFSET UNITYSDK_OFFSET(0x15301E40)
#define KHKGEFPLCAK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758A70)
#define KHKGEFPLCAK___INIT_OFFSET UNITYSDK_OFFSET(0x758A50)

inline static constexpr unsigned int KHKGEFPLCAK_TypeDefinitionIndex = 13181;

struct alignas(8) KHKGEFPLCAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKGEFPLCAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KHKGEFPLCAK MCDFJPDPLJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHKGEFPLCAK EIFONLCJOPG)
	{
		return ((::KHKGEFPLCAK(*)(::FlatBuffers::ByteBuffer*, ::KHKGEFPLCAK))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_MCDFJPDPLJB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDEGNKINJFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDEGNKINJFH&))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KHKGEFPLCAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHKGEFPLCAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KHKGEFPLCAK MCDFJPDPLJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHKGEFPLCAK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_MCDFJPDPLJB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KDEGNKINJFH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDEGNKINJFH&, ::System::Int32&))((::PBYTE)hIl2Cpp + KHKGEFPLCAK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
