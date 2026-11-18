#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPCEHDEAHML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDF10)
#define KPCEHDEAHML_EOIOMEPFGGG_1_OFFSET UNITYSDK_OFFSET(0x1A5FEE90)
#define KPCEHDEAHML_EOIOMEPFGGG_OFFSET UNITYSDK_OFFSET(0x1A5FEE30)
#define KPCEHDEAHML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPCEHDEAHML_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KPCEHDEAHML_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDF50)
#define KPCEHDEAHML___INIT_OFFSET UNITYSDK_OFFSET(0x7FDEF0)

inline static constexpr unsigned int KPCEHDEAHML_TypeDefinitionIndex = 16731;

struct alignas(8) KPCEHDEAHML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCEHDEAHML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPCEHDEAHML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KPCEHDEAHML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPCEHDEAHML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPCEHDEAHML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCEHDEAHML_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KPCEHDEAHML EOIOMEPFGGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KPCEHDEAHML EIFONLCJOPG)
	{
		return ((::KPCEHDEAHML(*)(::FlatBuffers::ByteBuffer*, ::KPCEHDEAHML))((::PBYTE)hIl2Cpp + KPCEHDEAHML_EOIOMEPFGGG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCEHDEAHML_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KPCEHDEAHML EOIOMEPFGGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPCEHDEAHML(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPCEHDEAHML_EOIOMEPFGGG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
