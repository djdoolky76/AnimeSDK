#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJJIJLDINFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765F70)
#define DJJIJLDINFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJJIJLDINFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJJIJLDINFG_ICGOIGCMCGN_1_OFFSET UNITYSDK_OFFSET(0x157A4E40)
#define DJJIJLDINFG_ICGOIGCMCGN_OFFSET UNITYSDK_OFFSET(0x157A4DD0)
#define DJJIJLDINFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765F60)
#define DJJIJLDINFG___INIT_OFFSET UNITYSDK_OFFSET(0x765F40)

inline static constexpr unsigned int DJJIJLDINFG_TypeDefinitionIndex = 11702;

struct alignas(8) DJJIJLDINFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJIJLDINFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJJIJLDINFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DJJIJLDINFG ICGOIGCMCGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJJIJLDINFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJJIJLDINFG_ICGOIGCMCGN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJIJLDINFG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJIJLDINFG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DJJIJLDINFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJJIJLDINFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJJIJLDINFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DJJIJLDINFG ICGOIGCMCGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJJIJLDINFG EIFONLCJOPG)
	{
		return ((::DJJIJLDINFG(*)(::FlatBuffers::ByteBuffer*, ::DJJIJLDINFG))((::PBYTE)hIl2Cpp + DJJIJLDINFG_ICGOIGCMCGN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
