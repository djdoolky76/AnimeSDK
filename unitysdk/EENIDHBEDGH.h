#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHFDMIHMHCG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EENIDHBEDGH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EENIDHBEDGH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE040)
#define EENIDHBEDGH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EENIDHBEDGH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EENIDHBEDGH_JLCIDCFCGDA_1_OFFSET UNITYSDK_OFFSET(0x19C0E9C0)
#define EENIDHBEDGH_JLCIDCFCGDA_OFFSET UNITYSDK_OFFSET(0x19C0E920)
#define EENIDHBEDGH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE030)
#define EENIDHBEDGH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE020)
#define EENIDHBEDGH___INIT_OFFSET UNITYSDK_OFFSET(0x7EE000)

inline static constexpr unsigned int EENIDHBEDGH_TypeDefinitionIndex = 14672;

struct alignas(8) EENIDHBEDGH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIDHBEDGH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EENIDHBEDGH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHFDMIHMHCG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHFDMIHMHCG&))((::PBYTE)hIl2Cpp + EENIDHBEDGH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIDHBEDGH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FHFDMIHMHCG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHFDMIHMHCG&, ::System::Int32&))((::PBYTE)hIl2Cpp + EENIDHBEDGH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENIDHBEDGH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EENIDHBEDGH JLCIDCFCGDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EENIDHBEDGH EIFONLCJOPG)
	{
		return ((::EENIDHBEDGH(*)(::FlatBuffers::ByteBuffer*, ::EENIDHBEDGH))((::PBYTE)hIl2Cpp + EENIDHBEDGH_JLCIDCFCGDA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EENIDHBEDGH JLCIDCFCGDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EENIDHBEDGH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EENIDHBEDGH_JLCIDCFCGDA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EENIDHBEDGH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EENIDHBEDGH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EENIDHBEDGH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
