#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MBLJLKAMBPN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDLFJIHGMCE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDLFJIHGMCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED780)
#define CDLFJIHGMCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDLFJIHGMCE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDLFJIHGMCE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ED7C0)
#define CDLFJIHGMCE_OLFOIJCCJKP_1_OFFSET UNITYSDK_OFFSET(0x19BF2480)
#define CDLFJIHGMCE_OLFOIJCCJKP_OFFSET UNITYSDK_OFFSET(0x19BF23E0)
#define CDLFJIHGMCE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED770)
#define CDLFJIHGMCE___INIT_OFFSET UNITYSDK_OFFSET(0x7ED750)

inline static constexpr unsigned int CDLFJIHGMCE_TypeDefinitionIndex = 10889;

struct alignas(8) CDLFJIHGMCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDLFJIHGMCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CDLFJIHGMCE OLFOIJCCJKP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDLFJIHGMCE EIFONLCJOPG)
	{
		return ((::CDLFJIHGMCE(*)(::FlatBuffers::ByteBuffer*, ::CDLFJIHGMCE))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_OLFOIJCCJKP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CDLFJIHGMCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDLFJIHGMCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDLFJIHGMCE OLFOIJCCJKP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDLFJIHGMCE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_OLFOIJCCJKP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MBLJLKAMBPN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBLJLKAMBPN&))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MBLJLKAMBPN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBLJLKAMBPN&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDLFJIHGMCE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
