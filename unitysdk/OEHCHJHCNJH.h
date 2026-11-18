#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEHCHJHCNJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F800)
#define OEHCHJHCNJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEHCHJHCNJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEHCHJHCNJH_KBPNBILFIPN_1_OFFSET UNITYSDK_OFFSET(0x1C09EB10)
#define OEHCHJHCNJH_KBPNBILFIPN_OFFSET UNITYSDK_OFFSET(0x1C09EA70)
#define OEHCHJHCNJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F840)
#define OEHCHJHCNJH___INIT_OFFSET UNITYSDK_OFFSET(0x81F7E0)

inline static constexpr unsigned int OEHCHJHCNJH_TypeDefinitionIndex = 12610;

struct alignas(8) OEHCHJHCNJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCHJHCNJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEHCHJHCNJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCHJHCNJH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OEHCHJHCNJH KBPNBILFIPN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEHCHJHCNJH EIFONLCJOPG)
	{
		return ((::OEHCHJHCNJH(*)(::FlatBuffers::ByteBuffer*, ::OEHCHJHCNJH))((::PBYTE)hIl2Cpp + OEHCHJHCNJH_KBPNBILFIPN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OEHCHJHCNJH KBPNBILFIPN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEHCHJHCNJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEHCHJHCNJH_KBPNBILFIPN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OEHCHJHCNJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEHCHJHCNJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEHCHJHCNJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCHJHCNJH_PPOMNIFACOL_OFFSET))(this);
	}
};
