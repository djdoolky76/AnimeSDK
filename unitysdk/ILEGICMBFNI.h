#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILEGICMBFNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814B60)
#define ILEGICMBFNI_CAOABDBMLOE_1_OFFSET UNITYSDK_OFFSET(0x1B88E3D0)
#define ILEGICMBFNI_CAOABDBMLOE_OFFSET UNITYSDK_OFFSET(0x1B88E330)
#define ILEGICMBFNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILEGICMBFNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILEGICMBFNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814B50)
#define ILEGICMBFNI___INIT_OFFSET UNITYSDK_OFFSET(0x814B30)

inline static constexpr unsigned int ILEGICMBFNI_TypeDefinitionIndex = 10249;

struct alignas(8) ILEGICMBFNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEGICMBFNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILEGICMBFNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ILEGICMBFNI CAOABDBMLOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILEGICMBFNI EIFONLCJOPG)
	{
		return ((::ILEGICMBFNI(*)(::FlatBuffers::ByteBuffer*, ::ILEGICMBFNI))((::PBYTE)hIl2Cpp + ILEGICMBFNI_CAOABDBMLOE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ILEGICMBFNI CAOABDBMLOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILEGICMBFNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILEGICMBFNI_CAOABDBMLOE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEGICMBFNI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEGICMBFNI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ILEGICMBFNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILEGICMBFNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILEGICMBFNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
