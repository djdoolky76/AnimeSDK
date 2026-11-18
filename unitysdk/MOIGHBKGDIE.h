#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOIGHBKGDIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6660)
#define MOIGHBKGDIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOIGHBKGDIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MOIGHBKGDIE_OEAJHJGKHJE_1_OFFSET UNITYSDK_OFFSET(0x195AC190)
#define MOIGHBKGDIE_OEAJHJGKHJE_OFFSET UNITYSDK_OFFSET(0x195AC120)
#define MOIGHBKGDIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6650)
#define MOIGHBKGDIE___INIT_OFFSET UNITYSDK_OFFSET(0x7E6630)

inline static constexpr unsigned int MOIGHBKGDIE_TypeDefinitionIndex = 11706;

struct alignas(8) MOIGHBKGDIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIGHBKGDIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIGHBKGDIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIGHBKGDIE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MOIGHBKGDIE OEAJHJGKHJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOIGHBKGDIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIGHBKGDIE_OEAJHJGKHJE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIGHBKGDIE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MOIGHBKGDIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOIGHBKGDIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIGHBKGDIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MOIGHBKGDIE OEAJHJGKHJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MOIGHBKGDIE EIFONLCJOPG)
	{
		return ((::MOIGHBKGDIE(*)(::FlatBuffers::ByteBuffer*, ::MOIGHBKGDIE))((::PBYTE)hIl2Cpp + MOIGHBKGDIE_OEAJHJGKHJE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
