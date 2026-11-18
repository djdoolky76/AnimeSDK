#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MAFLMGCIALM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIJMOILFDOJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NIJMOILFDOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E180)
#define NIJMOILFDOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIJMOILFDOJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NIJMOILFDOJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E1D0)
#define NIJMOILFDOJ_OFNHGHNEBEN_1_OFFSET UNITYSDK_OFFSET(0x1BF6D740)
#define NIJMOILFDOJ_OFNHGHNEBEN_OFFSET UNITYSDK_OFFSET(0x1BF6D640)
#define NIJMOILFDOJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E1C0)
#define NIJMOILFDOJ___INIT_OFFSET UNITYSDK_OFFSET(0x81E160)

inline static constexpr unsigned int NIJMOILFDOJ_TypeDefinitionIndex = 14445;

struct alignas(8) NIJMOILFDOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIJMOILFDOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NIJMOILFDOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIJMOILFDOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NIJMOILFDOJ OFNHGHNEBEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NIJMOILFDOJ EIFONLCJOPG)
	{
		return ((::NIJMOILFDOJ(*)(::FlatBuffers::ByteBuffer*, ::NIJMOILFDOJ))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_OFNHGHNEBEN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MAFLMGCIALM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAFLMGCIALM&))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NIJMOILFDOJ OFNHGHNEBEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIJMOILFDOJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_OFNHGHNEBEN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MAFLMGCIALM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAFLMGCIALM&, ::System::Int32&))((::PBYTE)hIl2Cpp + NIJMOILFDOJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
