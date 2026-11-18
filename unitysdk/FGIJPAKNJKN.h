#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOLAOMGCHOM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGIJPAKNJKN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FGIJPAKNJKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809820)
#define FGIJPAKNJKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGIJPAKNJKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGIJPAKNJKN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809860)
#define FGIJPAKNJKN_NKKMCJNDDNF_1_OFFSET UNITYSDK_OFFSET(0x1B1047A0)
#define FGIJPAKNJKN_NKKMCJNDDNF_OFFSET UNITYSDK_OFFSET(0x1B104730)
#define FGIJPAKNJKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809870)
#define FGIJPAKNJKN___INIT_OFFSET UNITYSDK_OFFSET(0x809800)

inline static constexpr unsigned int FGIJPAKNJKN_TypeDefinitionIndex = 9296;

struct alignas(8) FGIJPAKNJKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGIJPAKNJKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FGIJPAKNJKN NKKMCJNDDNF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGIJPAKNJKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_NKKMCJNDDNF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FGIJPAKNJKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGIJPAKNJKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JOLAOMGCHOM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOLAOMGCHOM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FGIJPAKNJKN NKKMCJNDDNF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGIJPAKNJKN EIFONLCJOPG)
	{
		return ((::FGIJPAKNJKN(*)(::FlatBuffers::ByteBuffer*, ::FGIJPAKNJKN))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_NKKMCJNDDNF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOLAOMGCHOM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOLAOMGCHOM&))((::PBYTE)hIl2Cpp + FGIJPAKNJKN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
