#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAJHHABHAMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E6E0)
#define PAJHHABHAMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAJHHABHAMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PAJHHABHAMK_HGHKDNDJOJL_1_OFFSET UNITYSDK_OFFSET(0x1CD06A40)
#define PAJHHABHAMK_HGHKDNDJOJL_OFFSET UNITYSDK_OFFSET(0x1CD069A0)
#define PAJHHABHAMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E6D0)
#define PAJHHABHAMK___INIT_OFFSET UNITYSDK_OFFSET(0x85E6B0)

inline static constexpr unsigned int PAJHHABHAMK_TypeDefinitionIndex = 17745;

struct alignas(8) PAJHHABHAMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHHABHAMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAJHHABHAMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHHABHAMK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PAJHHABHAMK HGHKDNDJOJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PAJHHABHAMK EIFONLCJOPG)
	{
		return ((::PAJHHABHAMK(*)(::FlatBuffers::ByteBuffer*, ::PAJHHABHAMK))((::PBYTE)hIl2Cpp + PAJHHABHAMK_HGHKDNDJOJL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PAJHHABHAMK HGHKDNDJOJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAJHHABHAMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAJHHABHAMK_HGHKDNDJOJL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PAJHHABHAMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAJHHABHAMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAJHHABHAMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJHHABHAMK_GHKKNCCLPAN_OFFSET))(this);
	}
};
