#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABBKMNDDOLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCGMKCEMMFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OCGMKCEMMFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DFE0)
#define OCGMKCEMMFI_DJHPGADLLKF_1_OFFSET UNITYSDK_OFFSET(0x1CCF7480)
#define OCGMKCEMMFI_DJHPGADLLKF_OFFSET UNITYSDK_OFFSET(0x1CCF7410)
#define OCGMKCEMMFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCGMKCEMMFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OCGMKCEMMFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E030)
#define OCGMKCEMMFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E020)
#define OCGMKCEMMFI___INIT_OFFSET UNITYSDK_OFFSET(0x85DFC0)

inline static constexpr unsigned int OCGMKCEMMFI_TypeDefinitionIndex = 13947;

struct alignas(8) OCGMKCEMMFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCGMKCEMMFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ABBKMNDDOLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABBKMNDDOLL&))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OCGMKCEMMFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCGMKCEMMFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OCGMKCEMMFI DJHPGADLLKF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCGMKCEMMFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_DJHPGADLLKF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OCGMKCEMMFI DJHPGADLLKF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OCGMKCEMMFI EIFONLCJOPG)
	{
		return ((::OCGMKCEMMFI(*)(::FlatBuffers::ByteBuffer*, ::OCGMKCEMMFI))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_DJHPGADLLKF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ABBKMNDDOLL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABBKMNDDOLL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OCGMKCEMMFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
