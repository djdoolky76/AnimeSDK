#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDONIHDHDFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756CE0)
#define HDONIHDHDFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDONIHDHDFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDONIHDHDFK_LFFBENCCEDL_1_OFFSET UNITYSDK_OFFSET(0x152D7B70)
#define HDONIHDHDFK_LFFBENCCEDL_OFFSET UNITYSDK_OFFSET(0x152D7B00)
#define HDONIHDHDFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756D20)
#define HDONIHDHDFK___INIT_OFFSET UNITYSDK_OFFSET(0x756CC0)

inline static constexpr unsigned int HDONIHDHDFK_TypeDefinitionIndex = 17640;

struct alignas(8) HDONIHDHDFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDONIHDHDFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDONIHDHDFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HDONIHDHDFK LFFBENCCEDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDONIHDHDFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDONIHDHDFK_LFFBENCCEDL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HDONIHDHDFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDONIHDHDFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDONIHDHDFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDONIHDHDFK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDONIHDHDFK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HDONIHDHDFK LFFBENCCEDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDONIHDHDFK EIFONLCJOPG)
	{
		return ((::HDONIHDHDFK(*)(::FlatBuffers::ByteBuffer*, ::HDONIHDHDFK))((::PBYTE)hIl2Cpp + HDONIHDHDFK_LFFBENCCEDL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
