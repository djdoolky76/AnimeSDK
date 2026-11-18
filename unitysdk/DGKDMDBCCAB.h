#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGKDMDBCCAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDC80)
#define DGKDMDBCCAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGKDMDBCCAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DGKDMDBCCAB_NMPDBMFAMNE_1_OFFSET UNITYSDK_OFFSET(0x19C05FC0)
#define DGKDMDBCCAB_NMPDBMFAMNE_OFFSET UNITYSDK_OFFSET(0x19C05F60)
#define DGKDMDBCCAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDCC0)
#define DGKDMDBCCAB___INIT_OFFSET UNITYSDK_OFFSET(0x7EDC60)

inline static constexpr unsigned int DGKDMDBCCAB_TypeDefinitionIndex = 9922;

struct alignas(8) DGKDMDBCCAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKDMDBCCAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGKDMDBCCAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DGKDMDBCCAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGKDMDBCCAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGKDMDBCCAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKDMDBCCAB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKDMDBCCAB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DGKDMDBCCAB NMPDBMFAMNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DGKDMDBCCAB EIFONLCJOPG)
	{
		return ((::DGKDMDBCCAB(*)(::FlatBuffers::ByteBuffer*, ::DGKDMDBCCAB))((::PBYTE)hIl2Cpp + DGKDMDBCCAB_NMPDBMFAMNE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DGKDMDBCCAB NMPDBMFAMNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGKDMDBCCAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGKDMDBCCAB_NMPDBMFAMNE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
