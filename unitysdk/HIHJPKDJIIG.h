#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBLLPBNCGJP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIHJPKDJIIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HIHJPKDJIIG_BGFEAJKMKLM_1_OFFSET UNITYSDK_OFFSET(0x1BADA7E0)
#define HIHJPKDJIIG_BGFEAJKMKLM_OFFSET UNITYSDK_OFFSET(0x1BADA740)
#define HIHJPKDJIIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B990)
#define HIHJPKDJIIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HIHJPKDJIIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HIHJPKDJIIG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B980)
#define HIHJPKDJIIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B9D0)
#define HIHJPKDJIIG___INIT_OFFSET UNITYSDK_OFFSET(0x81B960)

inline static constexpr unsigned int HIHJPKDJIIG_TypeDefinitionIndex = 15794;

struct alignas(8) HIHJPKDJIIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIHJPKDJIIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HIHJPKDJIIG BGFEAJKMKLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HIHJPKDJIIG EIFONLCJOPG)
	{
		return ((::HIHJPKDJIIG(*)(::FlatBuffers::ByteBuffer*, ::HIHJPKDJIIG))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_BGFEAJKMKLM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HIHJPKDJIIG BGFEAJKMKLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIHJPKDJIIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_BGFEAJKMKLM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DBLLPBNCGJP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBLLPBNCGJP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DBLLPBNCGJP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBLLPBNCGJP&))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HIHJPKDJIIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIHJPKDJIIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHJPKDJIIG_PPOMNIFACOL_OFFSET))(this);
	}
};
