#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFLKHLIIIOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8137E0)
#define MFLKHLIIIOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFLKHLIIIOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFLKHLIIIOG_KFDAHGMBMAG_1_OFFSET UNITYSDK_OFFSET(0x1B7F9830)
#define MFLKHLIIIOG_KFDAHGMBMAG_OFFSET UNITYSDK_OFFSET(0x1B7F97D0)
#define MFLKHLIIIOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813820)
#define MFLKHLIIIOG___INIT_OFFSET UNITYSDK_OFFSET(0x8137C0)

inline static constexpr unsigned int MFLKHLIIIOG_TypeDefinitionIndex = 16245;

struct alignas(8) MFLKHLIIIOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLKHLIIIOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLKHLIIIOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MFLKHLIIIOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFLKHLIIIOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLKHLIIIOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLKHLIIIOG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MFLKHLIIIOG KFDAHGMBMAG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFLKHLIIIOG EIFONLCJOPG)
	{
		return ((::MFLKHLIIIOG(*)(::FlatBuffers::ByteBuffer*, ::MFLKHLIIIOG))((::PBYTE)hIl2Cpp + MFLKHLIIIOG_KFDAHGMBMAG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLKHLIIIOG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MFLKHLIIIOG KFDAHGMBMAG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFLKHLIIIOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLKHLIIIOG_KFDAHGMBMAG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
