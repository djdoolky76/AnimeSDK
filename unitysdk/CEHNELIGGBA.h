#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOECEAPNEDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEHNELIGGBA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CEHNELIGGBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9BC0)
#define CEHNELIGGBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEHNELIGGBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CEHNELIGGBA_LGJCMAMOMCE_1_OFFSET UNITYSDK_OFFSET(0x1A53D240)
#define CEHNELIGGBA_LGJCMAMOMCE_OFFSET UNITYSDK_OFFSET(0x1A53D1D0)
#define CEHNELIGGBA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9BB0)
#define CEHNELIGGBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9C00)
#define CEHNELIGGBA___INIT_OFFSET UNITYSDK_OFFSET(0x7F9B90)

inline static constexpr unsigned int CEHNELIGGBA_TypeDefinitionIndex = 10423;

struct alignas(8) CEHNELIGGBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHNELIGGBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEHNELIGGBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOECEAPNEDA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOECEAPNEDA&, ::System::Int32&))((::PBYTE)hIl2Cpp + CEHNELIGGBA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CEHNELIGGBA LGJCMAMOMCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEHNELIGGBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEHNELIGGBA_LGJCMAMOMCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CEHNELIGGBA LGJCMAMOMCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CEHNELIGGBA EIFONLCJOPG)
	{
		return ((::CEHNELIGGBA(*)(::FlatBuffers::ByteBuffer*, ::CEHNELIGGBA))((::PBYTE)hIl2Cpp + CEHNELIGGBA_LGJCMAMOMCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CEHNELIGGBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEHNELIGGBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEHNELIGGBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHNELIGGBA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOECEAPNEDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOECEAPNEDA&))((::PBYTE)hIl2Cpp + CEHNELIGGBA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHNELIGGBA_GHKKNCCLPAN_OFFSET))(this);
	}
};
