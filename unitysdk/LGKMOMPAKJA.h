#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGKMOMPAKJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801E80)
#define LGKMOMPAKJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGKMOMPAKJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGKMOMPAKJA_HGIMMPADOFE_1_OFFSET UNITYSDK_OFFSET(0x1AAFB0F0)
#define LGKMOMPAKJA_HGIMMPADOFE_OFFSET UNITYSDK_OFFSET(0x1AAFB050)
#define LGKMOMPAKJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x801E70)
#define LGKMOMPAKJA___INIT_OFFSET UNITYSDK_OFFSET(0x801E50)

inline static constexpr unsigned int LGKMOMPAKJA_TypeDefinitionIndex = 10733;

struct alignas(8) LGKMOMPAKJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMOMPAKJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGKMOMPAKJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGKMOMPAKJA HGIMMPADOFE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGKMOMPAKJA EIFONLCJOPG)
	{
		return ((::LGKMOMPAKJA(*)(::FlatBuffers::ByteBuffer*, ::LGKMOMPAKJA))((::PBYTE)hIl2Cpp + LGKMOMPAKJA_HGIMMPADOFE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LGKMOMPAKJA HGIMMPADOFE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGKMOMPAKJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGKMOMPAKJA_HGIMMPADOFE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMOMPAKJA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMOMPAKJA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LGKMOMPAKJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGKMOMPAKJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGKMOMPAKJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
