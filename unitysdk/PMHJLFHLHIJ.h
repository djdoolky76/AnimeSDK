#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MIFHAEPNCHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMHJLFHLHIJ_BCABHELIMPM_1_OFFSET UNITYSDK_OFFSET(0x1EE09970)
#define PMHJLFHLHIJ_BCABHELIMPM_OFFSET UNITYSDK_OFFSET(0x1EE09900)
#define PMHJLFHLHIJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PMHJLFHLHIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9384C0)
#define PMHJLFHLHIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMHJLFHLHIJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMHJLFHLHIJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938500)
#define PMHJLFHLHIJ___INIT_OFFSET UNITYSDK_OFFSET(0x9384A0)

inline static constexpr unsigned int PMHJLFHLHIJ_TypeDefinitionIndex = 10181;

struct alignas(8) PMHJLFHLHIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PMHJLFHLHIJ BCABHELIMPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHJLFHLHIJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_BCABHELIMPM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PMHJLFHLHIJ BCABHELIMPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMHJLFHLHIJ EIFONLCJOPG)
	{
		return ((::PMHJLFHLHIJ(*)(::FlatBuffers::ByteBuffer*, ::PMHJLFHLHIJ))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_BCABHELIMPM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PMHJLFHLHIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHJLFHLHIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MIFHAEPNCHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIFHAEPNCHA&))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJLFHLHIJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
