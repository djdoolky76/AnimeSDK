#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOLAOEBMPEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812CE0)
#define JOLAOEBMPEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOLAOEBMPEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JOLAOEBMPEC_KPKMAGNPKBJ_1_OFFSET UNITYSDK_OFFSET(0x1B7DEAD0)
#define JOLAOEBMPEC_KPKMAGNPKBJ_OFFSET UNITYSDK_OFFSET(0x1B7DEA60)
#define JOLAOEBMPEC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812D20)
#define JOLAOEBMPEC___INIT_OFFSET UNITYSDK_OFFSET(0x812CC0)

inline static constexpr unsigned int JOLAOEBMPEC_TypeDefinitionIndex = 13286;

struct alignas(8) JOLAOEBMPEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOEBMPEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOLAOEBMPEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JOLAOEBMPEC KPKMAGNPKBJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOLAOEBMPEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOLAOEBMPEC_KPKMAGNPKBJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOEBMPEC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JOLAOEBMPEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOLAOEBMPEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOLAOEBMPEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JOLAOEBMPEC KPKMAGNPKBJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JOLAOEBMPEC EIFONLCJOPG)
	{
		return ((::JOLAOEBMPEC(*)(::FlatBuffers::ByteBuffer*, ::JOLAOEBMPEC))((::PBYTE)hIl2Cpp + JOLAOEBMPEC_KPKMAGNPKBJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAOEBMPEC_PPOMNIFACOL_OFFSET))(this);
	}
};
