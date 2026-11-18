#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HOMLGLCHKHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJPNGLOBEBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LJPNGLOBEBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813490)
#define LJPNGLOBEBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJPNGLOBEBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJPNGLOBEBG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8134D0)
#define LJPNGLOBEBG_MFAICFBMCEJ_1_OFFSET UNITYSDK_OFFSET(0x1B7F2770)
#define LJPNGLOBEBG_MFAICFBMCEJ_OFFSET UNITYSDK_OFFSET(0x1B7F2700)
#define LJPNGLOBEBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813480)
#define LJPNGLOBEBG___INIT_OFFSET UNITYSDK_OFFSET(0x813460)

inline static constexpr unsigned int LJPNGLOBEBG_TypeDefinitionIndex = 15987;

struct alignas(8) LJPNGLOBEBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJPNGLOBEBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HOMLGLCHKHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOMLGLCHKHN&))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LJPNGLOBEBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJPNGLOBEBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HOMLGLCHKHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOMLGLCHKHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LJPNGLOBEBG MFAICFBMCEJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJPNGLOBEBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_MFAICFBMCEJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LJPNGLOBEBG MFAICFBMCEJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJPNGLOBEBG EIFONLCJOPG)
	{
		return ((::LJPNGLOBEBG(*)(::FlatBuffers::ByteBuffer*, ::LJPNGLOBEBG))((::PBYTE)hIl2Cpp + LJPNGLOBEBG_MFAICFBMCEJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
