#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLGEJKOLCKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DCA0)
#define NLGEJKOLCKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLGEJKOLCKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLGEJKOLCKI_NPCKHOHHEPA_1_OFFSET UNITYSDK_OFFSET(0x1CCEE6F0)
#define NLGEJKOLCKI_NPCKHOHHEPA_OFFSET UNITYSDK_OFFSET(0x1CCEE680)
#define NLGEJKOLCKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85DCE0)
#define NLGEJKOLCKI___INIT_OFFSET UNITYSDK_OFFSET(0x85DC80)

inline static constexpr unsigned int NLGEJKOLCKI_TypeDefinitionIndex = 9688;

struct alignas(8) NLGEJKOLCKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGEJKOLCKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLGEJKOLCKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NLGEJKOLCKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLGEJKOLCKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLGEJKOLCKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NLGEJKOLCKI NPCKHOHHEPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLGEJKOLCKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLGEJKOLCKI_NPCKHOHHEPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NLGEJKOLCKI NPCKHOHHEPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLGEJKOLCKI EIFONLCJOPG)
	{
		return ((::NLGEJKOLCKI(*)(::FlatBuffers::ByteBuffer*, ::NLGEJKOLCKI))((::PBYTE)hIl2Cpp + NLGEJKOLCKI_NPCKHOHHEPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGEJKOLCKI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGEJKOLCKI_GHKKNCCLPAN_OFFSET))(this);
	}
};
