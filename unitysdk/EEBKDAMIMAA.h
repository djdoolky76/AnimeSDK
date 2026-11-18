#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PFNOINNHGCN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEBKDAMIMAA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EEBKDAMIMAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7892B0)
#define EEBKDAMIMAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEBKDAMIMAA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EEBKDAMIMAA_KCCDBHKOEGI_1_OFFSET UNITYSDK_OFFSET(0x16624DE0)
#define EEBKDAMIMAA_KCCDBHKOEGI_OFFSET UNITYSDK_OFFSET(0x16624C80)
#define EEBKDAMIMAA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7892F0)
#define EEBKDAMIMAA___INIT_OFFSET UNITYSDK_OFFSET(0x789290)

inline static constexpr unsigned int EEBKDAMIMAA_TypeDefinitionIndex = 16224;

struct alignas(8) EEBKDAMIMAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEBKDAMIMAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EEBKDAMIMAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEBKDAMIMAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EEBKDAMIMAA KCCDBHKOEGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EEBKDAMIMAA EIFONLCJOPG)
	{
		return ((::EEBKDAMIMAA(*)(::FlatBuffers::ByteBuffer*, ::EEBKDAMIMAA))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_KCCDBHKOEGI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PFNOINNHGCN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFNOINNHGCN&))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EEBKDAMIMAA KCCDBHKOEGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEBKDAMIMAA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEBKDAMIMAA_KCCDBHKOEGI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
