#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBLCIKDGGEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB6C0)
#define OBLCIKDGGEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBLCIKDGGEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBLCIKDGGEI_MHLAFNGAAAJ_1_OFFSET UNITYSDK_OFFSET(0x1CFF5350)
#define OBLCIKDGGEI_MHLAFNGAAAJ_OFFSET UNITYSDK_OFFSET(0x1CFF52E0)
#define OBLCIKDGGEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB700)
#define OBLCIKDGGEI___INIT_OFFSET UNITYSDK_OFFSET(0x8AB6A0)

inline static constexpr unsigned int OBLCIKDGGEI_TypeDefinitionIndex = 15320;

struct alignas(8) OBLCIKDGGEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCIKDGGEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLCIKDGGEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OBLCIKDGGEI MHLAFNGAAAJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBLCIKDGGEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLCIKDGGEI_MHLAFNGAAAJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OBLCIKDGGEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBLCIKDGGEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBLCIKDGGEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCIKDGGEI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OBLCIKDGGEI MHLAFNGAAAJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBLCIKDGGEI EIFONLCJOPG)
	{
		return ((::OBLCIKDGGEI(*)(::FlatBuffers::ByteBuffer*, ::OBLCIKDGGEI))((::PBYTE)hIl2Cpp + OBLCIKDGGEI_MHLAFNGAAAJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLCIKDGGEI_PPOMNIFACOL_OFFSET))(this);
	}
};
