#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LEBLBIOIPOJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNGCFAFOLKI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNGCFAFOLKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7C90)
#define MNGCFAFOLKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNGCFAFOLKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNGCFAFOLKI_HJGMAPAKNLJ_1_OFFSET UNITYSDK_OFFSET(0x18E113E0)
#define MNGCFAFOLKI_HJGMAPAKNLJ_OFFSET UNITYSDK_OFFSET(0x18E11370)
#define MNGCFAFOLKI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7C70)
#define MNGCFAFOLKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7C80)
#define MNGCFAFOLKI___INIT_OFFSET UNITYSDK_OFFSET(0x7D7C50)

inline static constexpr unsigned int MNGCFAFOLKI_TypeDefinitionIndex = 11006;

struct alignas(8) MNGCFAFOLKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNGCFAFOLKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LEBLBIOIPOJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LEBLBIOIPOJ&))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MNGCFAFOLKI HJGMAPAKNLJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNGCFAFOLKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_HJGMAPAKNLJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LEBLBIOIPOJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LEBLBIOIPOJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MNGCFAFOLKI HJGMAPAKNLJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNGCFAFOLKI EIFONLCJOPG)
	{
		return ((::MNGCFAFOLKI(*)(::FlatBuffers::ByteBuffer*, ::MNGCFAFOLKI))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_HJGMAPAKNLJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MNGCFAFOLKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNGCFAFOLKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGCFAFOLKI_GHKKNCCLPAN_OFFSET))(this);
	}
};
