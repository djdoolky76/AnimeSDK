#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CNODMPIKDNC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECOHMLKCMAP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ECOHMLKCMAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDF70)
#define ECOHMLKCMAP_BMNICKBGBJN_1_OFFSET UNITYSDK_OFFSET(0x19C0DE50)
#define ECOHMLKCMAP_BMNICKBGBJN_OFFSET UNITYSDK_OFFSET(0x19C0DDE0)
#define ECOHMLKCMAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECOHMLKCMAP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ECOHMLKCMAP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EDFB0)
#define ECOHMLKCMAP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDF60)
#define ECOHMLKCMAP___INIT_OFFSET UNITYSDK_OFFSET(0x7EDF40)

inline static constexpr unsigned int ECOHMLKCMAP_TypeDefinitionIndex = 13244;

struct alignas(8) ECOHMLKCMAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECOHMLKCMAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ECOHMLKCMAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECOHMLKCMAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CNODMPIKDNC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNODMPIKDNC&))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ECOHMLKCMAP BMNICKBGBJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECOHMLKCMAP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_BMNICKBGBJN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CNODMPIKDNC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNODMPIKDNC&, ::System::Int32&))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ECOHMLKCMAP BMNICKBGBJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ECOHMLKCMAP EIFONLCJOPG)
	{
		return ((::ECOHMLKCMAP(*)(::FlatBuffers::ByteBuffer*, ::ECOHMLKCMAP))((::PBYTE)hIl2Cpp + ECOHMLKCMAP_BMNICKBGBJN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
