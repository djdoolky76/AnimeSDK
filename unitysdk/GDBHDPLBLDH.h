#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHHBBLACMEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDBHDPLBLDH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDBHDPLBLDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7568C0)
#define GDBHDPLBLDH_DFHGCGCMAJI_1_OFFSET UNITYSDK_OFFSET(0x152CB2C0)
#define GDBHDPLBLDH_DFHGCGCMAJI_OFFSET UNITYSDK_OFFSET(0x152CB040)
#define GDBHDPLBLDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDBHDPLBLDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDBHDPLBLDH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7568B0)
#define GDBHDPLBLDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7568A0)
#define GDBHDPLBLDH___INIT_OFFSET UNITYSDK_OFFSET(0x756880)

inline static constexpr unsigned int GDBHDPLBLDH_TypeDefinitionIndex = 14405;

struct alignas(8) GDBHDPLBLDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDBHDPLBLDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHHBBLACMEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHHBBLACMEI&))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GDBHDPLBLDH DFHGCGCMAJI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDBHDPLBLDH EIFONLCJOPG)
	{
		return ((::GDBHDPLBLDH(*)(::FlatBuffers::ByteBuffer*, ::GDBHDPLBLDH))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_DFHGCGCMAJI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 PBHJGJGHHLB, ::System::Int32 DADIDBMHLOI, ::FHHBBLACMEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::FHHBBLACMEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_LLGCOCLACNA_OFFSET))(this, PBHJGJGHHLB, DADIDBMHLOI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GDBHDPLBLDH DFHGCGCMAJI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDBHDPLBLDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_DFHGCGCMAJI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GDBHDPLBLDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDBHDPLBLDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDBHDPLBLDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
