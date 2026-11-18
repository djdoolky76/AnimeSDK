#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNNGACIMEAM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNAINNLHDBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LNAINNLHDBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801FF0)
#define LNAINNLHDBI_DCIGAFOHKMF_1_OFFSET UNITYSDK_OFFSET(0x1AB01210)
#define LNAINNLHDBI_DCIGAFOHKMF_OFFSET UNITYSDK_OFFSET(0x1AB01150)
#define LNAINNLHDBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNAINNLHDBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LNAINNLHDBI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x801FE0)
#define LNAINNLHDBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802030)
#define LNAINNLHDBI___INIT_OFFSET UNITYSDK_OFFSET(0x801FC0)

inline static constexpr unsigned int LNAINNLHDBI_TypeDefinitionIndex = 11881;

struct alignas(8) LNAINNLHDBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAINNLHDBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNAINNLHDBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNNGACIMEAM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNNGACIMEAM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LNAINNLHDBI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LNAINNLHDBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNAINNLHDBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNAINNLHDBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LNAINNLHDBI DCIGAFOHKMF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LNAINNLHDBI EIFONLCJOPG)
	{
		return ((::LNAINNLHDBI(*)(::FlatBuffers::ByteBuffer*, ::LNAINNLHDBI))((::PBYTE)hIl2Cpp + LNAINNLHDBI_DCIGAFOHKMF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNNGACIMEAM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNNGACIMEAM&))((::PBYTE)hIl2Cpp + LNAINNLHDBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAINNLHDBI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LNAINNLHDBI DCIGAFOHKMF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNAINNLHDBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNAINNLHDBI_DCIGAFOHKMF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAINNLHDBI_GHKKNCCLPAN_OFFSET))(this);
	}
};
