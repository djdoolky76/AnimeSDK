#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GCJAEJMCOFF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFFGCOOGLCK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EFFGCOOGLCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EABA0)
#define EFFGCOOGLCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFFGCOOGLCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EFFGCOOGLCK_KHEFAGMMDDA_1_OFFSET UNITYSDK_OFFSET(0x19AE3DF0)
#define EFFGCOOGLCK_KHEFAGMMDDA_OFFSET UNITYSDK_OFFSET(0x19AE3D80)
#define EFFGCOOGLCK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EABE0)
#define EFFGCOOGLCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EAB90)
#define EFFGCOOGLCK___INIT_OFFSET UNITYSDK_OFFSET(0x7EAB70)

inline static constexpr unsigned int EFFGCOOGLCK_TypeDefinitionIndex = 16839;

struct alignas(8) EFFGCOOGLCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFFGCOOGLCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EFFGCOOGLCK KHEFAGMMDDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFFGCOOGLCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_KHEFAGMMDDA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EFFGCOOGLCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFFGCOOGLCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GCJAEJMCOFF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCJAEJMCOFF&, ::System::Int32&))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EFFGCOOGLCK KHEFAGMMDDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EFFGCOOGLCK EIFONLCJOPG)
	{
		return ((::EFFGCOOGLCK(*)(::FlatBuffers::ByteBuffer*, ::EFFGCOOGLCK))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_KHEFAGMMDDA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GCJAEJMCOFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GCJAEJMCOFF&))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFGCOOGLCK_GHKKNCCLPAN_OFFSET))(this);
	}
};
