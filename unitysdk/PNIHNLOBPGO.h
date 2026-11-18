#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOKPFGKNCAL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNIHNLOBPGO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNIHNLOBPGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0960)
#define PNIHNLOBPGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNIHNLOBPGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNIHNLOBPGO_JBABCGIONKJ_1_OFFSET UNITYSDK_OFFSET(0x19DE5660)
#define PNIHNLOBPGO_JBABCGIONKJ_OFFSET UNITYSDK_OFFSET(0x19DE55F0)
#define PNIHNLOBPGO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F0950)
#define PNIHNLOBPGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0940)
#define PNIHNLOBPGO___INIT_OFFSET UNITYSDK_OFFSET(0x7F0920)

inline static constexpr unsigned int PNIHNLOBPGO_TypeDefinitionIndex = 16192;

struct alignas(8) PNIHNLOBPGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIHNLOBPGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOKPFGKNCAL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOKPFGKNCAL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOKPFGKNCAL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOKPFGKNCAL&))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PNIHNLOBPGO JBABCGIONKJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNIHNLOBPGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_JBABCGIONKJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNIHNLOBPGO JBABCGIONKJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNIHNLOBPGO EIFONLCJOPG)
	{
		return ((::PNIHNLOBPGO(*)(::FlatBuffers::ByteBuffer*, ::PNIHNLOBPGO))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_JBABCGIONKJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PNIHNLOBPGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNIHNLOBPGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNIHNLOBPGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
