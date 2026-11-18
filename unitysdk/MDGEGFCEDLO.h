#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLJPKEIEOEC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDGEGFCEDLO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MDGEGFCEDLO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DC30)
#define MDGEGFCEDLO_DLPEAJFLDNI_1_OFFSET UNITYSDK_OFFSET(0x1BF5C140)
#define MDGEGFCEDLO_DLPEAJFLDNI_OFFSET UNITYSDK_OFFSET(0x1BF5C040)
#define MDGEGFCEDLO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDGEGFCEDLO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MDGEGFCEDLO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DC20)
#define MDGEGFCEDLO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DC70)
#define MDGEGFCEDLO___INIT_OFFSET UNITYSDK_OFFSET(0x81DC00)

inline static constexpr unsigned int MDGEGFCEDLO_TypeDefinitionIndex = 11118;

struct alignas(8) MDGEGFCEDLO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGEGFCEDLO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLJPKEIEOEC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLJPKEIEOEC&))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLJPKEIEOEC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLJPKEIEOEC&, ::System::Int32&))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MDGEGFCEDLO DLPEAJFLDNI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MDGEGFCEDLO EIFONLCJOPG)
	{
		return ((::MDGEGFCEDLO(*)(::FlatBuffers::ByteBuffer*, ::MDGEGFCEDLO))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_DLPEAJFLDNI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MDGEGFCEDLO DLPEAJFLDNI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDGEGFCEDLO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_DLPEAJFLDNI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MDGEGFCEDLO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDGEGFCEDLO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEGFCEDLO_PPOMNIFACOL_OFFSET))(this);
	}
};
