#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMDFOKAOGGA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNMBCEPELDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LNMBCEPELDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x804E40)
#define LNMBCEPELDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNMBCEPELDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LNMBCEPELDK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x804E80)
#define LNMBCEPELDK_MCOAPKKHLGH_1_OFFSET UNITYSDK_OFFSET(0x1AD68920)
#define LNMBCEPELDK_MCOAPKKHLGH_OFFSET UNITYSDK_OFFSET(0x1AD688C0)
#define LNMBCEPELDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x804E30)
#define LNMBCEPELDK___INIT_OFFSET UNITYSDK_OFFSET(0x804E10)

inline static constexpr unsigned int LNMBCEPELDK_TypeDefinitionIndex = 13133;

struct alignas(8) LNMBCEPELDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMBCEPELDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNMBCEPELDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMDFOKAOGGA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMDFOKAOGGA&))((::PBYTE)hIl2Cpp + LNMBCEPELDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMBCEPELDK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LNMBCEPELDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNMBCEPELDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNMBCEPELDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OMDFOKAOGGA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMDFOKAOGGA&, ::System::Int32&))((::PBYTE)hIl2Cpp + LNMBCEPELDK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LNMBCEPELDK MCOAPKKHLGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LNMBCEPELDK EIFONLCJOPG)
	{
		return ((::LNMBCEPELDK(*)(::FlatBuffers::ByteBuffer*, ::LNMBCEPELDK))((::PBYTE)hIl2Cpp + LNMBCEPELDK_MCOAPKKHLGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LNMBCEPELDK MCOAPKKHLGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNMBCEPELDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNMBCEPELDK_MCOAPKKHLGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMBCEPELDK_GHKKNCCLPAN_OFFSET))(this);
	}
};
