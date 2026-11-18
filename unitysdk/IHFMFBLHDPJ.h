#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHFMFBLHDPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F89A0)
#define IHFMFBLHDPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IHFMFBLHDPJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IHFMFBLHDPJ_GJLFNDBBBII_1_OFFSET UNITYSDK_OFFSET(0x1A4F88F0)
#define IHFMFBLHDPJ_GJLFNDBBBII_OFFSET UNITYSDK_OFFSET(0x1A4F8880)
#define IHFMFBLHDPJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8990)
#define IHFMFBLHDPJ___INIT_OFFSET UNITYSDK_OFFSET(0x7F8970)

inline static constexpr unsigned int IHFMFBLHDPJ_TypeDefinitionIndex = 10043;

struct alignas(8) IHFMFBLHDPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IHFMFBLHDPJ GJLFNDBBBII(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHFMFBLHDPJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ_GJLFNDBBBII_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IHFMFBLHDPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHFMFBLHDPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IHFMFBLHDPJ GJLFNDBBBII_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IHFMFBLHDPJ EIFONLCJOPG)
	{
		return ((::IHFMFBLHDPJ(*)(::FlatBuffers::ByteBuffer*, ::IHFMFBLHDPJ))((::PBYTE)hIl2Cpp + IHFMFBLHDPJ_GJLFNDBBBII_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
