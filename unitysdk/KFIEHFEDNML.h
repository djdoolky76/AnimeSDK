#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFIEHFEDNML_BDGDGAHJHNC_1_OFFSET UNITYSDK_OFFSET(0x1A5FA300)
#define KFIEHFEDNML_BDGDGAHJHNC_OFFSET UNITYSDK_OFFSET(0x1A5FA290)
#define KFIEHFEDNML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDC70)
#define KFIEHFEDNML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFIEHFEDNML_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KFIEHFEDNML_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDC60)
#define KFIEHFEDNML___INIT_OFFSET UNITYSDK_OFFSET(0x7FDC40)

inline static constexpr unsigned int KFIEHFEDNML_TypeDefinitionIndex = 14814;

struct alignas(8) KFIEHFEDNML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIEHFEDNML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFIEHFEDNML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KFIEHFEDNML BDGDGAHJHNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFIEHFEDNML(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFIEHFEDNML_BDGDGAHJHNC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIEHFEDNML_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KFIEHFEDNML BDGDGAHJHNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KFIEHFEDNML EIFONLCJOPG)
	{
		return ((::KFIEHFEDNML(*)(::FlatBuffers::ByteBuffer*, ::KFIEHFEDNML))((::PBYTE)hIl2Cpp + KFIEHFEDNML_BDGDGAHJHNC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIEHFEDNML_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KFIEHFEDNML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFIEHFEDNML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFIEHFEDNML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
