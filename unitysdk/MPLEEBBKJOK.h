#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPLEEBBKJOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7DE0)
#define MPLEEBBKJOK_CDCIHHMPEKK_1_OFFSET UNITYSDK_OFFSET(0x18E13E70)
#define MPLEEBBKJOK_CDCIHHMPEKK_OFFSET UNITYSDK_OFFSET(0x18E13E00)
#define MPLEEBBKJOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPLEEBBKJOK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPLEEBBKJOK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7E20)
#define MPLEEBBKJOK___INIT_OFFSET UNITYSDK_OFFSET(0x7D7DC0)

inline static constexpr unsigned int MPLEEBBKJOK_TypeDefinitionIndex = 11818;

struct alignas(8) MPLEEBBKJOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLEEBBKJOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLEEBBKJOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLEEBBKJOK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MPLEEBBKJOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPLEEBBKJOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLEEBBKJOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MPLEEBBKJOK CDCIHHMPEKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPLEEBBKJOK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLEEBBKJOK_CDCIHHMPEKK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MPLEEBBKJOK CDCIHHMPEKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPLEEBBKJOK EIFONLCJOPG)
	{
		return ((::MPLEEBBKJOK(*)(::FlatBuffers::ByteBuffer*, ::MPLEEBBKJOK))((::PBYTE)hIl2Cpp + MPLEEBBKJOK_CDCIHHMPEKK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLEEBBKJOK_PPOMNIFACOL_OFFSET))(this);
	}
};
