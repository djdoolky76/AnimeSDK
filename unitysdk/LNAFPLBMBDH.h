#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKHCHKPKIJE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNAFPLBMBDH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LNAFPLBMBDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3BA0)
#define LNAFPLBMBDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNAFPLBMBDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LNAFPLBMBDH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3B90)
#define LNAFPLBMBDH_MFGCHLPAAGP_1_OFFSET UNITYSDK_OFFSET(0x17FBA740)
#define LNAFPLBMBDH_MFGCHLPAAGP_OFFSET UNITYSDK_OFFSET(0x17FBA6D0)
#define LNAFPLBMBDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3BE0)
#define LNAFPLBMBDH___INIT_OFFSET UNITYSDK_OFFSET(0x7C3B70)

inline static constexpr unsigned int LNAFPLBMBDH_TypeDefinitionIndex = 11330;

struct alignas(8) LNAFPLBMBDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNAFPLBMBDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LNAFPLBMBDH MFGCHLPAAGP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNAFPLBMBDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_MFGCHLPAAGP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HKHCHKPKIJE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKHCHKPKIJE&, ::System::Int32&))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LNAFPLBMBDH MFGCHLPAAGP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LNAFPLBMBDH EIFONLCJOPG)
	{
		return ((::LNAFPLBMBDH(*)(::FlatBuffers::ByteBuffer*, ::LNAFPLBMBDH))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_MFGCHLPAAGP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKHCHKPKIJE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKHCHKPKIJE&))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LNAFPLBMBDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNAFPLBMBDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAFPLBMBDH_PPOMNIFACOL_OFFSET))(this);
	}
};
