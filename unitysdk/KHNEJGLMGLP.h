#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJCMHPNAICD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHNEJGLMGLP_ACPLCNFIKOG_1_OFFSET UNITYSDK_OFFSET(0x1955C2A0)
#define KHNEJGLMGLP_ACPLCNFIKOG_OFFSET UNITYSDK_OFFSET(0x1955C230)
#define KHNEJGLMGLP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHNEJGLMGLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4900)
#define KHNEJGLMGLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHNEJGLMGLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHNEJGLMGLP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4940)
#define KHNEJGLMGLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4950)
#define KHNEJGLMGLP___INIT_OFFSET UNITYSDK_OFFSET(0x7E48E0)

inline static constexpr unsigned int KHNEJGLMGLP_TypeDefinitionIndex = 16370;

struct alignas(8) KHNEJGLMGLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHNEJGLMGLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KHNEJGLMGLP ACPLCNFIKOG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHNEJGLMGLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_ACPLCNFIKOG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KHNEJGLMGLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHNEJGLMGLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BJCMHPNAICD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJCMHPNAICD&, ::System::Int32&))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJCMHPNAICD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJCMHPNAICD&))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KHNEJGLMGLP ACPLCNFIKOG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHNEJGLMGLP EIFONLCJOPG)
	{
		return ((::KHNEJGLMGLP(*)(::FlatBuffers::ByteBuffer*, ::KHNEJGLMGLP))((::PBYTE)hIl2Cpp + KHNEJGLMGLP_ACPLCNFIKOG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
