#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GGAHAPLOJNH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBBDJHHDNCM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CBBDJHHDNCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1B50)
#define CBBDJHHDNCM_FKLPFHBBDBB_1_OFFSET UNITYSDK_OFFSET(0x19F27C60)
#define CBBDJHHDNCM_FKLPFHBBDBB_OFFSET UNITYSDK_OFFSET(0x19F27BC0)
#define CBBDJHHDNCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBBDJHHDNCM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CBBDJHHDNCM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1B40)
#define CBBDJHHDNCM___INIT_OFFSET UNITYSDK_OFFSET(0x7F1B20)

inline static constexpr unsigned int CBBDJHHDNCM_TypeDefinitionIndex = 13534;

struct alignas(8) CBBDJHHDNCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBBDJHHDNCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CBBDJHHDNCM FKLPFHBBDBB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CBBDJHHDNCM EIFONLCJOPG)
	{
		return ((::CBBDJHHDNCM(*)(::FlatBuffers::ByteBuffer*, ::CBBDJHHDNCM))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_FKLPFHBBDBB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CBBDJHHDNCM FKLPFHBBDBB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBBDJHHDNCM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_FKLPFHBBDBB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GGAHAPLOJNH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGAHAPLOJNH&))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CBBDJHHDNCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBBDJHHDNCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBBDJHHDNCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
