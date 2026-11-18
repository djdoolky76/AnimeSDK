#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBAEFOAMOPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4680)
#define GBAEFOAMOPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBAEFOAMOPC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GBAEFOAMOPC_KIFJCAAOMPI_1_OFFSET UNITYSDK_OFFSET(0x18BA0080)
#define GBAEFOAMOPC_KIFJCAAOMPI_OFFSET UNITYSDK_OFFSET(0x18BA0010)
#define GBAEFOAMOPC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D46C0)
#define GBAEFOAMOPC___INIT_OFFSET UNITYSDK_OFFSET(0x7D4660)

inline static constexpr unsigned int GBAEFOAMOPC_TypeDefinitionIndex = 15724;

struct alignas(8) GBAEFOAMOPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAEFOAMOPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBAEFOAMOPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GBAEFOAMOPC KIFJCAAOMPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBAEFOAMOPC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBAEFOAMOPC_KIFJCAAOMPI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GBAEFOAMOPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBAEFOAMOPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBAEFOAMOPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GBAEFOAMOPC KIFJCAAOMPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GBAEFOAMOPC EIFONLCJOPG)
	{
		return ((::GBAEFOAMOPC(*)(::FlatBuffers::ByteBuffer*, ::GBAEFOAMOPC))((::PBYTE)hIl2Cpp + GBAEFOAMOPC_KIFJCAAOMPI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAEFOAMOPC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAEFOAMOPC_GHKKNCCLPAN_OFFSET))(this);
	}
};
