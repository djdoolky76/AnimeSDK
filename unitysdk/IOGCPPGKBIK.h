#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNKAJOAEKKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOGCPPGKBIK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOGCPPGKBIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8127A0)
#define IOGCPPGKBIK_FMPNEKHBEIB_1_OFFSET UNITYSDK_OFFSET(0x1B7D3B10)
#define IOGCPPGKBIK_FMPNEKHBEIB_OFFSET UNITYSDK_OFFSET(0x1B7D3AA0)
#define IOGCPPGKBIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOGCPPGKBIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOGCPPGKBIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8127E0)
#define IOGCPPGKBIK___INIT_OFFSET UNITYSDK_OFFSET(0x812780)

inline static constexpr unsigned int IOGCPPGKBIK_TypeDefinitionIndex = 17360;

struct alignas(8) IOGCPPGKBIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGCPPGKBIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IOGCPPGKBIK FMPNEKHBEIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOGCPPGKBIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_FMPNEKHBEIB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IOGCPPGKBIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOGCPPGKBIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HNKAJOAEKKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNKAJOAEKKL&))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IOGCPPGKBIK FMPNEKHBEIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOGCPPGKBIK EIFONLCJOPG)
	{
		return ((::IOGCPPGKBIK(*)(::FlatBuffers::ByteBuffer*, ::IOGCPPGKBIK))((::PBYTE)hIl2Cpp + IOGCPPGKBIK_FMPNEKHBEIB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
