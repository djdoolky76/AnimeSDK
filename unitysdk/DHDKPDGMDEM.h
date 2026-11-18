#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KANIJNPOOFG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHDKPDGMDEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHDKPDGMDEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0CA0)
#define DHDKPDGMDEM_DKPGDGNJCOL_1_OFFSET UNITYSDK_OFFSET(0x18799600)
#define DHDKPDGMDEM_DKPGDGNJCOL_OFFSET UNITYSDK_OFFSET(0x18799500)
#define DHDKPDGMDEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHDKPDGMDEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHDKPDGMDEM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0C80)
#define DHDKPDGMDEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0C90)
#define DHDKPDGMDEM___INIT_OFFSET UNITYSDK_OFFSET(0x7D0C60)

inline static constexpr unsigned int DHDKPDGMDEM_TypeDefinitionIndex = 16240;

struct alignas(8) DHDKPDGMDEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHDKPDGMDEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KANIJNPOOFG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KANIJNPOOFG&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DHDKPDGMDEM DKPGDGNJCOL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHDKPDGMDEM EIFONLCJOPG)
	{
		return ((::DHDKPDGMDEM(*)(::FlatBuffers::ByteBuffer*, ::DHDKPDGMDEM))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_DKPGDGNJCOL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KANIJNPOOFG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KANIJNPOOFG&))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DHDKPDGMDEM DKPGDGNJCOL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHDKPDGMDEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_DKPGDGNJCOL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DHDKPDGMDEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHDKPDGMDEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHDKPDGMDEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
