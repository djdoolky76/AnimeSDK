#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MHMPGMLGOHM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCBCDOOAFPD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OCBCDOOAFPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802FA0)
#define OCBCDOOAFPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCBCDOOAFPD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OCBCDOOAFPD_IKDJINCIBKB_1_OFFSET UNITYSDK_OFFSET(0x1AB25DD0)
#define OCBCDOOAFPD_IKDJINCIBKB_OFFSET UNITYSDK_OFFSET(0x1AB25D30)
#define OCBCDOOAFPD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x802F90)
#define OCBCDOOAFPD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802FE0)
#define OCBCDOOAFPD___INIT_OFFSET UNITYSDK_OFFSET(0x802F70)

inline static constexpr unsigned int OCBCDOOAFPD_TypeDefinitionIndex = 16122;

struct alignas(8) OCBCDOOAFPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBCDOOAFPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MHMPGMLGOHM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHMPGMLGOHM&, ::System::Int32&))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OCBCDOOAFPD IKDJINCIBKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OCBCDOOAFPD EIFONLCJOPG)
	{
		return ((::OCBCDOOAFPD(*)(::FlatBuffers::ByteBuffer*, ::OCBCDOOAFPD))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_IKDJINCIBKB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OCBCDOOAFPD IKDJINCIBKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCBCDOOAFPD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_IKDJINCIBKB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MHMPGMLGOHM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHMPGMLGOHM&))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OCBCDOOAFPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCBCDOOAFPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBCDOOAFPD_PPOMNIFACOL_OFFSET))(this);
	}
};
