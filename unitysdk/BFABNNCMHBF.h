#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMCGLIMCNOG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFABNNCMHBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFABNNCMHBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB210)
#define BFABNNCMHBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFABNNCMHBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFABNNCMHBF_GMDAMELHGJF_1_OFFSET UNITYSDK_OFFSET(0x1A578930)
#define BFABNNCMHBF_GMDAMELHGJF_OFFSET UNITYSDK_OFFSET(0x1A5788C0)
#define BFABNNCMHBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB250)
#define BFABNNCMHBF___INIT_OFFSET UNITYSDK_OFFSET(0x7FB1F0)

inline static constexpr unsigned int BFABNNCMHBF_TypeDefinitionIndex = 17309;

struct alignas(8) BFABNNCMHBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFABNNCMHBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFABNNCMHBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BFABNNCMHBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFABNNCMHBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFABNNCMHBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BFABNNCMHBF GMDAMELHGJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFABNNCMHBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFABNNCMHBF_GMDAMELHGJF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFABNNCMHBF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BFABNNCMHBF GMDAMELHGJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFABNNCMHBF EIFONLCJOPG)
	{
		return ((::BFABNNCMHBF(*)(::FlatBuffers::ByteBuffer*, ::BFABNNCMHBF))((::PBYTE)hIl2Cpp + BFABNNCMHBF_GMDAMELHGJF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMCGLIMCNOG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMCGLIMCNOG&))((::PBYTE)hIl2Cpp + BFABNNCMHBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFABNNCMHBF_GHKKNCCLPAN_OFFSET))(this);
	}
};
