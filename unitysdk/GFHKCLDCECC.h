#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CMGDJMMFFKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFHKCLDCECC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GFHKCLDCECC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC6A0)
#define GFHKCLDCECC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFHKCLDCECC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFHKCLDCECC_KMNJMKEJKMH_1_OFFSET UNITYSDK_OFFSET(0x1A5B1710)
#define GFHKCLDCECC_KMNJMKEJKMH_OFFSET UNITYSDK_OFFSET(0x1A5B16A0)
#define GFHKCLDCECC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B100)
#define GFHKCLDCECC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B0F0)
#define GFHKCLDCECC___INIT_OFFSET UNITYSDK_OFFSET(0x7FC680)

inline static constexpr unsigned int GFHKCLDCECC_TypeDefinitionIndex = 13322;

struct alignas(8) GFHKCLDCECC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHKCLDCECC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFHKCLDCECC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CMGDJMMFFKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMGDJMMFFKE&))((::PBYTE)hIl2Cpp + GFHKCLDCECC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GFHKCLDCECC KMNJMKEJKMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFHKCLDCECC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFHKCLDCECC_KMNJMKEJKMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHKCLDCECC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GFHKCLDCECC KMNJMKEJKMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFHKCLDCECC EIFONLCJOPG)
	{
		return ((::GFHKCLDCECC(*)(::FlatBuffers::ByteBuffer*, ::GFHKCLDCECC))((::PBYTE)hIl2Cpp + GFHKCLDCECC_KMNJMKEJKMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GFHKCLDCECC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFHKCLDCECC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFHKCLDCECC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHKCLDCECC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CMGDJMMFFKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMGDJMMFFKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + GFHKCLDCECC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
