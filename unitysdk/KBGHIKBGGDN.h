#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IBFCFALOJEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBGHIKBGGDN_AMEKIEJNNED_1_OFFSET UNITYSDK_OFFSET(0x15AB22A0)
#define KBGHIKBGGDN_AMEKIEJNNED_OFFSET UNITYSDK_OFFSET(0x15A8D860)
#define KBGHIKBGGDN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KBGHIKBGGDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76FF80)
#define KBGHIKBGGDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBGHIKBGGDN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KBGHIKBGGDN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76FFC0)
#define KBGHIKBGGDN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76FFD0)
#define KBGHIKBGGDN___INIT_OFFSET UNITYSDK_OFFSET(0x76FF60)

inline static constexpr unsigned int KBGHIKBGGDN_TypeDefinitionIndex = 16832;

struct alignas(8) KBGHIKBGGDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBGHIKBGGDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KBGHIKBGGDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBGHIKBGGDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KBGHIKBGGDN AMEKIEJNNED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBGHIKBGGDN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_AMEKIEJNNED_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KBGHIKBGGDN AMEKIEJNNED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KBGHIKBGGDN EIFONLCJOPG)
	{
		return ((::KBGHIKBGGDN(*)(::FlatBuffers::ByteBuffer*, ::KBGHIKBGGDN))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_AMEKIEJNNED_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IBFCFALOJEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IBFCFALOJEN&))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 AOBCELOKCNE, ::System::Int32 HECCGKOJMJG, ::IBFCFALOJEN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::IBFCFALOJEN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_LLGCOCLACNA_OFFSET))(this, AOBCELOKCNE, HECCGKOJMJG, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHIKBGGDN_PPOMNIFACOL_OFFSET))(this);
	}
};
