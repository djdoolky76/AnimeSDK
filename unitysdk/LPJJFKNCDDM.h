#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELHDPPPLPJO.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPJJFKNCDDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF460)
#define LPJJFKNCDDM_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define LPJJFKNCDDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPJJFKNCDDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LPJJFKNCDDM_NBMDLMJDCFI_1_OFFSET UNITYSDK_OFFSET(0x19DAD1B0)
#define LPJJFKNCDDM_NBMDLMJDCFI_OFFSET UNITYSDK_OFFSET(0x19DAD140)
#define LPJJFKNCDDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF4A0)
#define LPJJFKNCDDM___INIT_OFFSET UNITYSDK_OFFSET(0x7EF440)

inline static constexpr unsigned int LPJJFKNCDDM_TypeDefinitionIndex = 16682;

struct alignas(8) LPJJFKNCDDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPJJFKNCDDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LPJJFKNCDDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPJJFKNCDDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LPJJFKNCDDM NBMDLMJDCFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPJJFKNCDDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_NBMDLMJDCFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::ELHDPPPLPJO> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::ELHDPPPLPJO>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::LPJJFKNCDDM NBMDLMJDCFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LPJJFKNCDDM EIFONLCJOPG)
	{
		return ((::LPJJFKNCDDM(*)(::FlatBuffers::ByteBuffer*, ::LPJJFKNCDDM))((::PBYTE)hIl2Cpp + LPJJFKNCDDM_NBMDLMJDCFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
