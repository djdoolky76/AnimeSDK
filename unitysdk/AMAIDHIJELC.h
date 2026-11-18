#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ONOGDANEGBB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMAIDHIJELC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMAIDHIJELC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4940)
#define AMAIDHIJELC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMAIDHIJELC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMAIDHIJELC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F4990)
#define AMAIDHIJELC_PDBOEAIFBDC_1_OFFSET UNITYSDK_OFFSET(0x1A161200)
#define AMAIDHIJELC_PDBOEAIFBDC_OFFSET UNITYSDK_OFFSET(0x1A161140)
#define AMAIDHIJELC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4980)
#define AMAIDHIJELC___INIT_OFFSET UNITYSDK_OFFSET(0x7F4920)

inline static constexpr unsigned int AMAIDHIJELC_TypeDefinitionIndex = 17336;

struct alignas(8) AMAIDHIJELC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAIDHIJELC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMAIDHIJELC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AMAIDHIJELC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMAIDHIJELC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMAIDHIJELC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ONOGDANEGBB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONOGDANEGBB&))((::PBYTE)hIl2Cpp + AMAIDHIJELC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AMAIDHIJELC PDBOEAIFBDC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMAIDHIJELC EIFONLCJOPG)
	{
		return ((::AMAIDHIJELC(*)(::FlatBuffers::ByteBuffer*, ::AMAIDHIJELC))((::PBYTE)hIl2Cpp + AMAIDHIJELC_PDBOEAIFBDC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAIDHIJELC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAIDHIJELC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AMAIDHIJELC PDBOEAIFBDC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMAIDHIJELC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMAIDHIJELC_PDBOEAIFBDC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ONOGDANEGBB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ONOGDANEGBB&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMAIDHIJELC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
