#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ONGBCHHBOHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACHEGMOGECO_AEDIGGGOFAA_1_OFFSET UNITYSDK_OFFSET(0x1571B9D0)
#define ACHEGMOGECO_AEDIGGGOFAA_OFFSET UNITYSDK_OFFSET(0x1571B930)
#define ACHEGMOGECO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ACHEGMOGECO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x760A80)
#define ACHEGMOGECO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACHEGMOGECO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACHEGMOGECO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x760A60)
#define ACHEGMOGECO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x760A70)
#define ACHEGMOGECO___INIT_OFFSET UNITYSDK_OFFSET(0x760A40)

inline static constexpr unsigned int ACHEGMOGECO_TypeDefinitionIndex = 10403;

struct alignas(8) ACHEGMOGECO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHEGMOGECO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACHEGMOGECO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHEGMOGECO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ONGBCHHBOHI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONGBCHHBOHI&, ::System::Int32&))((::PBYTE)hIl2Cpp + ACHEGMOGECO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ACHEGMOGECO AEDIGGGOFAA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACHEGMOGECO EIFONLCJOPG)
	{
		return ((::ACHEGMOGECO(*)(::FlatBuffers::ByteBuffer*, ::ACHEGMOGECO))((::PBYTE)hIl2Cpp + ACHEGMOGECO_AEDIGGGOFAA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHEGMOGECO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ACHEGMOGECO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACHEGMOGECO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACHEGMOGECO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ONGBCHHBOHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONGBCHHBOHI&))((::PBYTE)hIl2Cpp + ACHEGMOGECO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ACHEGMOGECO AEDIGGGOFAA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACHEGMOGECO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACHEGMOGECO_AEDIGGGOFAA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
