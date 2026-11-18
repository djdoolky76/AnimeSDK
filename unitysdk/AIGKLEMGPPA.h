#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGAIFJMJHFC.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIGKLEMGPPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9BD0)
#define AIGKLEMGPPA_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define AIGKLEMGPPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIGKLEMGPPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIGKLEMGPPA_KLNKPICOIAA_1_OFFSET UNITYSDK_OFFSET(0x19ABBA10)
#define AIGKLEMGPPA_KLNKPICOIAA_OFFSET UNITYSDK_OFFSET(0x19ABB9A0)
#define AIGKLEMGPPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9BC0)
#define AIGKLEMGPPA___INIT_OFFSET UNITYSDK_OFFSET(0x7E9BA0)

inline static constexpr unsigned int AIGKLEMGPPA_TypeDefinitionIndex = 9333;

struct alignas(8) AIGKLEMGPPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIGKLEMGPPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::LGAIFJMJHFC> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::LGAIFJMJHFC>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::AIGKLEMGPPA KLNKPICOIAA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIGKLEMGPPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_KLNKPICOIAA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AIGKLEMGPPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIGKLEMGPPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AIGKLEMGPPA KLNKPICOIAA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIGKLEMGPPA EIFONLCJOPG)
	{
		return ((::AIGKLEMGPPA(*)(::FlatBuffers::ByteBuffer*, ::AIGKLEMGPPA))((::PBYTE)hIl2Cpp + AIGKLEMGPPA_KLNKPICOIAA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
