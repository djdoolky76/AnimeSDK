#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFHFCJJOOLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8630)
#define IFHFCJJOOLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFHFCJJOOLF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFHFCJJOOLF_NLHDAPFIGNE_1_OFFSET UNITYSDK_OFFSET(0x1747D560)
#define IFHFCJJOOLF_NLHDAPFIGNE_OFFSET UNITYSDK_OFFSET(0x1747D4F0)
#define IFHFCJJOOLF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8620)
#define IFHFCJJOOLF___INIT_OFFSET UNITYSDK_OFFSET(0x7A8600)

inline static constexpr unsigned int IFHFCJJOOLF_TypeDefinitionIndex = 12607;

struct alignas(8) IFHFCJJOOLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFCJJOOLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFHFCJJOOLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFCJJOOLF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IFHFCJJOOLF NLHDAPFIGNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFHFCJJOOLF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFHFCJJOOLF_NLHDAPFIGNE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IFHFCJJOOLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFHFCJJOOLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFHFCJJOOLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFCJJOOLF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IFHFCJJOOLF NLHDAPFIGNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFHFCJJOOLF EIFONLCJOPG)
	{
		return ((::IFHFCJJOOLF(*)(::FlatBuffers::ByteBuffer*, ::IFHFCJJOOLF))((::PBYTE)hIl2Cpp + IFHFCJJOOLF_NLHDAPFIGNE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
