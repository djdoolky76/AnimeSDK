#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ICCNICCBNHF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEEBPHPGLPO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEEBPHPGLPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0B40)
#define DEEBPHPGLPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEEBPHPGLPO_GFOHEPNGHHB_1_OFFSET UNITYSDK_OFFSET(0x187970D0)
#define DEEBPHPGLPO_GFOHEPNGHHB_OFFSET UNITYSDK_OFFSET(0x18796FD0)
#define DEEBPHPGLPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEEBPHPGLPO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0B90)
#define DEEBPHPGLPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0B80)
#define DEEBPHPGLPO___INIT_OFFSET UNITYSDK_OFFSET(0x7D0B20)

inline static constexpr unsigned int DEEBPHPGLPO_TypeDefinitionIndex = 9866;

struct alignas(8) DEEBPHPGLPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEEBPHPGLPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DEEBPHPGLPO GFOHEPNGHHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEEBPHPGLPO EIFONLCJOPG)
	{
		return ((::DEEBPHPGLPO(*)(::FlatBuffers::ByteBuffer*, ::DEEBPHPGLPO))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_GFOHEPNGHHB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DEEBPHPGLPO GFOHEPNGHHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEEBPHPGLPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_GFOHEPNGHHB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DEEBPHPGLPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEEBPHPGLPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ICCNICCBNHF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICCNICCBNHF&))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ICCNICCBNHF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICCNICCBNHF&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEEBPHPGLPO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
