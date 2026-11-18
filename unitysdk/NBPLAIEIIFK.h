#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBPLAIEIIFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85D8E0)
#define NBPLAIEIIFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBPLAIEIIFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NBPLAIEIIFK_MHBCFHOMGHC_1_OFFSET UNITYSDK_OFFSET(0x1CCE87C0)
#define NBPLAIEIIFK_MHBCFHOMGHC_OFFSET UNITYSDK_OFFSET(0x1CCE8760)
#define NBPLAIEIIFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85D920)
#define NBPLAIEIIFK___INIT_OFFSET UNITYSDK_OFFSET(0x85D8C0)

inline static constexpr unsigned int NBPLAIEIIFK_TypeDefinitionIndex = 14593;

struct alignas(8) NBPLAIEIIFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPLAIEIIFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBPLAIEIIFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NBPLAIEIIFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBPLAIEIIFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBPLAIEIIFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPLAIEIIFK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NBPLAIEIIFK MHBCFHOMGHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NBPLAIEIIFK EIFONLCJOPG)
	{
		return ((::NBPLAIEIIFK(*)(::FlatBuffers::ByteBuffer*, ::NBPLAIEIIFK))((::PBYTE)hIl2Cpp + NBPLAIEIIFK_MHBCFHOMGHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NBPLAIEIIFK MHBCFHOMGHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBPLAIEIIFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBPLAIEIIFK_MHBCFHOMGHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPLAIEIIFK_PPOMNIFACOL_OFFSET))(this);
	}
};
