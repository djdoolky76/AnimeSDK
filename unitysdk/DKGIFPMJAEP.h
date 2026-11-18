#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKGIFPMJAEP_AHCPHAOFDEC_1_OFFSET UNITYSDK_OFFSET(0x157A6790)
#define DKGIFPMJAEP_AHCPHAOFDEC_OFFSET UNITYSDK_OFFSET(0x157A6730)
#define DKGIFPMJAEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766140)
#define DKGIFPMJAEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKGIFPMJAEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DKGIFPMJAEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766180)
#define DKGIFPMJAEP___INIT_OFFSET UNITYSDK_OFFSET(0x766120)

inline static constexpr unsigned int DKGIFPMJAEP_TypeDefinitionIndex = 14769;

struct alignas(8) DKGIFPMJAEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGIFPMJAEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKGIFPMJAEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DKGIFPMJAEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKGIFPMJAEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKGIFPMJAEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DKGIFPMJAEP AHCPHAOFDEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DKGIFPMJAEP EIFONLCJOPG)
	{
		return ((::DKGIFPMJAEP(*)(::FlatBuffers::ByteBuffer*, ::DKGIFPMJAEP))((::PBYTE)hIl2Cpp + DKGIFPMJAEP_AHCPHAOFDEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DKGIFPMJAEP AHCPHAOFDEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKGIFPMJAEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKGIFPMJAEP_AHCPHAOFDEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGIFPMJAEP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGIFPMJAEP_PPOMNIFACOL_OFFSET))(this);
	}
};
