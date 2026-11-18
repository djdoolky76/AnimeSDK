#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEOMJEAOGIJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOCAEEMFAIA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MOCAEEMFAIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85D840)
#define MOCAEEMFAIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOCAEEMFAIA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MOCAEEMFAIA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85D880)
#define MOCAEEMFAIA_NGDEHHCNJOL_1_OFFSET UNITYSDK_OFFSET(0x1CCE57D0)
#define MOCAEEMFAIA_NGDEHHCNJOL_OFFSET UNITYSDK_OFFSET(0x1CCE5710)
#define MOCAEEMFAIA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85D890)
#define MOCAEEMFAIA___INIT_OFFSET UNITYSDK_OFFSET(0x85D820)

inline static constexpr unsigned int MOCAEEMFAIA_TypeDefinitionIndex = 16182;

struct alignas(8) MOCAEEMFAIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOCAEEMFAIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEOMJEAOGIJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEOMJEAOGIJ&))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MOCAEEMFAIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOCAEEMFAIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DEOMJEAOGIJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEOMJEAOGIJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MOCAEEMFAIA NGDEHHCNJOL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MOCAEEMFAIA EIFONLCJOPG)
	{
		return ((::MOCAEEMFAIA(*)(::FlatBuffers::ByteBuffer*, ::MOCAEEMFAIA))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_NGDEHHCNJOL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MOCAEEMFAIA NGDEHHCNJOL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOCAEEMFAIA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_NGDEHHCNJOL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCAEEMFAIA_GHKKNCCLPAN_OFFSET))(this);
	}
};
