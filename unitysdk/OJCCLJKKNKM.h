#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPCADMPOHML.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJCCLJKKNKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C650)
#define OJCCLJKKNKM_BMDIKKEDOJL_1_OFFSET UNITYSDK_OFFSET(0x1B33F660)
#define OJCCLJKKNKM_BMDIKKEDOJL_OFFSET UNITYSDK_OFFSET(0x1B33F5F0)
#define OJCCLJKKNKM_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define OJCCLJKKNKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OJCCLJKKNKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OJCCLJKKNKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C690)
#define OJCCLJKKNKM___INIT_OFFSET UNITYSDK_OFFSET(0x80C630)

inline static constexpr unsigned int OJCCLJKKNKM_TypeDefinitionIndex = 13896;

struct alignas(8) OJCCLJKKNKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJCCLJKKNKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OJCCLJKKNKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJCCLJKKNKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OJCCLJKKNKM BMDIKKEDOJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJCCLJKKNKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_BMDIKKEDOJL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OJCCLJKKNKM BMDIKKEDOJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OJCCLJKKNKM EIFONLCJOPG)
	{
		return ((::OJCCLJKKNKM(*)(::FlatBuffers::ByteBuffer*, ::OJCCLJKKNKM))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_BMDIKKEDOJL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Nullable_1<::LPCADMPOHML> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::LPCADMPOHML>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJCCLJKKNKM_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}
};
