#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCLLAFJGPII.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PANFAHFMOKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PANFAHFMOKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0250)
#define PANFAHFMOKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PANFAHFMOKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PANFAHFMOKE_LCMLBLHFNJL_1_OFFSET UNITYSDK_OFFSET(0x19DD5FA0)
#define PANFAHFMOKE_LCMLBLHFNJL_OFFSET UNITYSDK_OFFSET(0x19DD5F40)
#define PANFAHFMOKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0290)
#define PANFAHFMOKE___INIT_OFFSET UNITYSDK_OFFSET(0x7F0230)

inline static constexpr unsigned int PANFAHFMOKE_TypeDefinitionIndex = 16807;

struct alignas(8) PANFAHFMOKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANFAHFMOKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PANFAHFMOKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCLLAFJGPII& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCLLAFJGPII&))((::PBYTE)hIl2Cpp + PANFAHFMOKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PANFAHFMOKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PANFAHFMOKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PANFAHFMOKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANFAHFMOKE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PANFAHFMOKE LCMLBLHFNJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PANFAHFMOKE EIFONLCJOPG)
	{
		return ((::PANFAHFMOKE(*)(::FlatBuffers::ByteBuffer*, ::PANFAHFMOKE))((::PBYTE)hIl2Cpp + PANFAHFMOKE_LCMLBLHFNJL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANFAHFMOKE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PANFAHFMOKE LCMLBLHFNJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PANFAHFMOKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PANFAHFMOKE_LCMLBLHFNJL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
