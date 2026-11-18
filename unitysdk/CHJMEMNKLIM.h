#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHJMEMNKLIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762000)
#define CHJMEMNKLIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHJMEMNKLIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CHJMEMNKLIM_NNDDEGCKIIP_1_OFFSET UNITYSDK_OFFSET(0x1573ECC0)
#define CHJMEMNKLIM_NNDDEGCKIIP_OFFSET UNITYSDK_OFFSET(0x1573EC20)
#define CHJMEMNKLIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x761FF0)
#define CHJMEMNKLIM___INIT_OFFSET UNITYSDK_OFFSET(0x761FD0)

inline static constexpr unsigned int CHJMEMNKLIM_TypeDefinitionIndex = 15466;

struct alignas(8) CHJMEMNKLIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJMEMNKLIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJMEMNKLIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJMEMNKLIM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJMEMNKLIM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CHJMEMNKLIM NNDDEGCKIIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CHJMEMNKLIM EIFONLCJOPG)
	{
		return ((::CHJMEMNKLIM(*)(::FlatBuffers::ByteBuffer*, ::CHJMEMNKLIM))((::PBYTE)hIl2Cpp + CHJMEMNKLIM_NNDDEGCKIIP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CHJMEMNKLIM NNDDEGCKIIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHJMEMNKLIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJMEMNKLIM_NNDDEGCKIIP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CHJMEMNKLIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHJMEMNKLIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHJMEMNKLIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
