#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFCGIEEECIB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIBKKLMHDMC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIBKKLMHDMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1E20)
#define AIBKKLMHDMC_BMBFKJBBNHM_1_OFFSET UNITYSDK_OFFSET(0x194EA330)
#define AIBKKLMHDMC_BMBFKJBBNHM_OFFSET UNITYSDK_OFFSET(0x194EA290)
#define AIBKKLMHDMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIBKKLMHDMC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIBKKLMHDMC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E1E70)
#define AIBKKLMHDMC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1E60)
#define AIBKKLMHDMC___INIT_OFFSET UNITYSDK_OFFSET(0x7E1E00)

inline static constexpr unsigned int AIBKKLMHDMC_TypeDefinitionIndex = 17729;

struct alignas(8) AIBKKLMHDMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIBKKLMHDMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AIBKKLMHDMC BMBFKJBBNHM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIBKKLMHDMC EIFONLCJOPG)
	{
		return ((::AIBKKLMHDMC(*)(::FlatBuffers::ByteBuffer*, ::AIBKKLMHDMC))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_BMBFKJBBNHM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AIBKKLMHDMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIBKKLMHDMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AIBKKLMHDMC BMBFKJBBNHM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIBKKLMHDMC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_BMBFKJBBNHM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IFCGIEEECIB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFCGIEEECIB&))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IFCGIEEECIB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFCGIEEECIB&, ::System::Int32&))((::PBYTE)hIl2Cpp + AIBKKLMHDMC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
