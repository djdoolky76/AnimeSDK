#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMJHKLHFPIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9A3510)
#define PMJHKLHFPIM_FGIDHMKHAND_1_OFFSET UNITYSDK_OFFSET(0x1FD7BC70)
#define PMJHKLHFPIM_FGIDHMKHAND_OFFSET UNITYSDK_OFFSET(0x1FD7BB70)
#define PMJHKLHFPIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMJHKLHFPIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMJHKLHFPIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9A3550)
#define PMJHKLHFPIM___INIT_OFFSET UNITYSDK_OFFSET(0x9A34F0)

inline static constexpr unsigned int PMJHKLHFPIM_TypeDefinitionIndex = 17658;

struct alignas(8) PMJHKLHFPIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJHKLHFPIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMJHKLHFPIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PMJHKLHFPIM FGIDHMKHAND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMJHKLHFPIM EIFONLCJOPG)
	{
		return ((::PMJHKLHFPIM(*)(::FlatBuffers::ByteBuffer*, ::PMJHKLHFPIM))((::PBYTE)hIl2Cpp + PMJHKLHFPIM_FGIDHMKHAND_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PMJHKLHFPIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMJHKLHFPIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMJHKLHFPIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJHKLHFPIM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PMJHKLHFPIM FGIDHMKHAND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMJHKLHFPIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMJHKLHFPIM_FGIDHMKHAND_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJHKLHFPIM_GHKKNCCLPAN_OFFSET))(this);
	}
};
