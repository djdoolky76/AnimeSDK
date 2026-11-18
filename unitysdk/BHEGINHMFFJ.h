#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHEGINHMFFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1650)
#define BHEGINHMFFJ_CJEBPMICOJN_1_OFFSET UNITYSDK_OFFSET(0x17EF4C60)
#define BHEGINHMFFJ_CJEBPMICOJN_OFFSET UNITYSDK_OFFSET(0x17EF4B60)
#define BHEGINHMFFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHEGINHMFFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHEGINHMFFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1640)
#define BHEGINHMFFJ___INIT_OFFSET UNITYSDK_OFFSET(0x7C1620)

inline static constexpr unsigned int BHEGINHMFFJ_TypeDefinitionIndex = 14628;

struct alignas(8) BHEGINHMFFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEGINHMFFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEGINHMFFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BHEGINHMFFJ CJEBPMICOJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHEGINHMFFJ EIFONLCJOPG)
	{
		return ((::BHEGINHMFFJ(*)(::FlatBuffers::ByteBuffer*, ::BHEGINHMFFJ))((::PBYTE)hIl2Cpp + BHEGINHMFFJ_CJEBPMICOJN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEGINHMFFJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BHEGINHMFFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHEGINHMFFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEGINHMFFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BHEGINHMFFJ CJEBPMICOJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHEGINHMFFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEGINHMFFJ_CJEBPMICOJN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEGINHMFFJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
