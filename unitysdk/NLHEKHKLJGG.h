#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPMGCCEHJHL.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLHEKHKLJGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFDB0)
#define NLHEKHKLJGG_CLBDOPCGHIF_1_OFFSET UNITYSDK_OFFSET(0x19DC7AB0)
#define NLHEKHKLJGG_CLBDOPCGHIF_OFFSET UNITYSDK_OFFSET(0x19DC7A10)
#define NLHEKHKLJGG_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define NLHEKHKLJGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLHEKHKLJGG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLHEKHKLJGG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFDA0)
#define NLHEKHKLJGG___INIT_OFFSET UNITYSDK_OFFSET(0x7EFD80)

inline static constexpr unsigned int NLHEKHKLJGG_TypeDefinitionIndex = 13976;

struct alignas(8) NLHEKHKLJGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLHEKHKLJGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Nullable_1<::EPMGCCEHJHL> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::EPMGCCEHJHL>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NLHEKHKLJGG CLBDOPCGHIF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLHEKHKLJGG EIFONLCJOPG)
	{
		return ((::NLHEKHKLJGG(*)(::FlatBuffers::ByteBuffer*, ::NLHEKHKLJGG))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_CLBDOPCGHIF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NLHEKHKLJGG CLBDOPCGHIF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLHEKHKLJGG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_CLBDOPCGHIF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NLHEKHKLJGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLHEKHKLJGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLHEKHKLJGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
