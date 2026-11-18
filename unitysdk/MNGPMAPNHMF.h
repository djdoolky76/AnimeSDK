#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPHAOBDJFOK.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNGPMAPNHMF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DF10)
#define MNGPMAPNHMF_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define MNGPMAPNHMF_EPBLIBJDMDI_1_OFFSET UNITYSDK_OFFSET(0x1BF63860)
#define MNGPMAPNHMF_EPBLIBJDMDI_OFFSET UNITYSDK_OFFSET(0x1BF63800)
#define MNGPMAPNHMF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNGPMAPNHMF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNGPMAPNHMF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DF50)
#define MNGPMAPNHMF___INIT_OFFSET UNITYSDK_OFFSET(0x81DEF0)

inline static constexpr unsigned int MNGPMAPNHMF_TypeDefinitionIndex = 12422;

struct alignas(8) MNGPMAPNHMF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNGPMAPNHMF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MNGPMAPNHMF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNGPMAPNHMF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::NPHAOBDJFOK> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::NPHAOBDJFOK>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::MNGPMAPNHMF EPBLIBJDMDI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNGPMAPNHMF EIFONLCJOPG)
	{
		return ((::MNGPMAPNHMF(*)(::FlatBuffers::ByteBuffer*, ::MNGPMAPNHMF))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_EPBLIBJDMDI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MNGPMAPNHMF EPBLIBJDMDI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNGPMAPNHMF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_EPBLIBJDMDI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGPMAPNHMF_PPOMNIFACOL_OFFSET))(this);
	}
};
