#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHCOEPILIFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE660)
#define GHCOEPILIFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHCOEPILIFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHCOEPILIFE_HLDCGECCBEK_1_OFFSET UNITYSDK_OFFSET(0x19330EE0)
#define GHCOEPILIFE_HLDCGECCBEK_OFFSET UNITYSDK_OFFSET(0x19330E40)
#define GHCOEPILIFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE650)
#define GHCOEPILIFE___INIT_OFFSET UNITYSDK_OFFSET(0x7DE630)

inline static constexpr unsigned int GHCOEPILIFE_TypeDefinitionIndex = 9424;

struct alignas(8) GHCOEPILIFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCOEPILIFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHCOEPILIFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCOEPILIFE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCOEPILIFE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GHCOEPILIFE HLDCGECCBEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHCOEPILIFE EIFONLCJOPG)
	{
		return ((::GHCOEPILIFE(*)(::FlatBuffers::ByteBuffer*, ::GHCOEPILIFE))((::PBYTE)hIl2Cpp + GHCOEPILIFE_HLDCGECCBEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GHCOEPILIFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHCOEPILIFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHCOEPILIFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GHCOEPILIFE HLDCGECCBEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHCOEPILIFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHCOEPILIFE_HLDCGECCBEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
