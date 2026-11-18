#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GANMOLIGBAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x755F80)
#define GANMOLIGBAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GANMOLIGBAL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GANMOLIGBAL_JNEDOCPFBJH_1_OFFSET UNITYSDK_OFFSET(0x152C9BF0)
#define GANMOLIGBAL_JNEDOCPFBJH_OFFSET UNITYSDK_OFFSET(0x152C9B80)
#define GANMOLIGBAL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x755F70)
#define GANMOLIGBAL___INIT_OFFSET UNITYSDK_OFFSET(0x755F50)

inline static constexpr unsigned int GANMOLIGBAL_TypeDefinitionIndex = 16285;

struct alignas(8) GANMOLIGBAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANMOLIGBAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GANMOLIGBAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANMOLIGBAL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GANMOLIGBAL JNEDOCPFBJH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GANMOLIGBAL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GANMOLIGBAL_JNEDOCPFBJH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANMOLIGBAL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GANMOLIGBAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GANMOLIGBAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GANMOLIGBAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GANMOLIGBAL JNEDOCPFBJH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GANMOLIGBAL EIFONLCJOPG)
	{
		return ((::GANMOLIGBAL(*)(::FlatBuffers::ByteBuffer*, ::GANMOLIGBAL))((::PBYTE)hIl2Cpp + GANMOLIGBAL_JNEDOCPFBJH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
