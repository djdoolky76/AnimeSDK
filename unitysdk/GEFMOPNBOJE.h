#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGONMKGECKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEFMOPNBOJE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GEFMOPNBOJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC600)
#define GEFMOPNBOJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEFMOPNBOJE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GEFMOPNBOJE_HOMLAJDBEFF_1_OFFSET UNITYSDK_OFFSET(0x1A5B0520)
#define GEFMOPNBOJE_HOMLAJDBEFF_OFFSET UNITYSDK_OFFSET(0x1A5B0480)
#define GEFMOPNBOJE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC5E0)
#define GEFMOPNBOJE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC5F0)
#define GEFMOPNBOJE___INIT_OFFSET UNITYSDK_OFFSET(0x7FC5C0)

inline static constexpr unsigned int GEFMOPNBOJE_TypeDefinitionIndex = 15569;

struct alignas(8) GEFMOPNBOJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEFMOPNBOJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JGONMKGECKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGONMKGECKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGONMKGECKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGONMKGECKB&))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GEFMOPNBOJE HOMLAJDBEFF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GEFMOPNBOJE EIFONLCJOPG)
	{
		return ((::GEFMOPNBOJE(*)(::FlatBuffers::ByteBuffer*, ::GEFMOPNBOJE))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_HOMLAJDBEFF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GEFMOPNBOJE HOMLAJDBEFF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEFMOPNBOJE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_HOMLAJDBEFF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GEFMOPNBOJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEFMOPNBOJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEFMOPNBOJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
