#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/APIPJAKCFAC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAHDMANBEDH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NAHDMANBEDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6710)
#define NAHDMANBEDH_CCDGFJDOHCO_1_OFFSET UNITYSDK_OFFSET(0x195AEEB0)
#define NAHDMANBEDH_CCDGFJDOHCO_OFFSET UNITYSDK_OFFSET(0x195AEBB0)
#define NAHDMANBEDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAHDMANBEDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NAHDMANBEDH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6750)
#define NAHDMANBEDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6700)
#define NAHDMANBEDH___INIT_OFFSET UNITYSDK_OFFSET(0x7E66E0)

inline static constexpr unsigned int NAHDMANBEDH_TypeDefinitionIndex = 12486;

struct alignas(8) NAHDMANBEDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHDMANBEDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAHDMANBEDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NAHDMANBEDH CCDGFJDOHCO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NAHDMANBEDH EIFONLCJOPG)
	{
		return ((::NAHDMANBEDH(*)(::FlatBuffers::ByteBuffer*, ::NAHDMANBEDH))((::PBYTE)hIl2Cpp + NAHDMANBEDH_CCDGFJDOHCO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::APIPJAKCFAC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::APIPJAKCFAC&))((::PBYTE)hIl2Cpp + NAHDMANBEDH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHDMANBEDH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NAHDMANBEDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAHDMANBEDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAHDMANBEDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::APIPJAKCFAC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::APIPJAKCFAC&, ::System::Int32&))((::PBYTE)hIl2Cpp + NAHDMANBEDH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NAHDMANBEDH CCDGFJDOHCO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAHDMANBEDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAHDMANBEDH_CCDGFJDOHCO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHDMANBEDH_GHKKNCCLPAN_OFFSET))(this);
	}
};
