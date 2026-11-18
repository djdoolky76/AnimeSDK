#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OIPDHKLENKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MILAAOODKGD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MILAAOODKGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802440)
#define MILAAOODKGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MILAAOODKGD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MILAAOODKGD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x802480)
#define MILAAOODKGD_NMDDIIOMMLB_1_OFFSET UNITYSDK_OFFSET(0x1AB0C4B0)
#define MILAAOODKGD_NMDDIIOMMLB_OFFSET UNITYSDK_OFFSET(0x1AB0C440)
#define MILAAOODKGD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802430)
#define MILAAOODKGD___INIT_OFFSET UNITYSDK_OFFSET(0x802410)

inline static constexpr unsigned int MILAAOODKGD_TypeDefinitionIndex = 9401;

struct alignas(8) MILAAOODKGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILAAOODKGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MILAAOODKGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OIPDHKLENKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OIPDHKLENKB&))((::PBYTE)hIl2Cpp + MILAAOODKGD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILAAOODKGD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MILAAOODKGD NMDDIIOMMLB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MILAAOODKGD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MILAAOODKGD_NMDDIIOMMLB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MILAAOODKGD NMDDIIOMMLB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MILAAOODKGD EIFONLCJOPG)
	{
		return ((::MILAAOODKGD(*)(::FlatBuffers::ByteBuffer*, ::MILAAOODKGD))((::PBYTE)hIl2Cpp + MILAAOODKGD_NMDDIIOMMLB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MILAAOODKGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MILAAOODKGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MILAAOODKGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OIPDHKLENKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OIPDHKLENKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MILAAOODKGD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILAAOODKGD_GHKKNCCLPAN_OFFSET))(this);
	}
};
