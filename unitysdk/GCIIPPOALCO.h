#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ENBFBKHOHLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCIIPPOALCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GCIIPPOALCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB250)
#define GCIIPPOALCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCIIPPOALCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GCIIPPOALCO_JAPAOABHAFH_1_OFFSET UNITYSDK_OFFSET(0x19AF7C50)
#define GCIIPPOALCO_JAPAOABHAFH_OFFSET UNITYSDK_OFFSET(0x19AF7BE0)
#define GCIIPPOALCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB290)
#define GCIIPPOALCO___INIT_OFFSET UNITYSDK_OFFSET(0x7EB230)

inline static constexpr unsigned int GCIIPPOALCO_TypeDefinitionIndex = 17210;

struct alignas(8) GCIIPPOALCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIIPPOALCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCIIPPOALCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GCIIPPOALCO JAPAOABHAFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCIIPPOALCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCIIPPOALCO_JAPAOABHAFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ENBFBKHOHLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENBFBKHOHLJ&))((::PBYTE)hIl2Cpp + GCIIPPOALCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GCIIPPOALCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCIIPPOALCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCIIPPOALCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIIPPOALCO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIIPPOALCO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GCIIPPOALCO JAPAOABHAFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GCIIPPOALCO EIFONLCJOPG)
	{
		return ((::GCIIPPOALCO(*)(::FlatBuffers::ByteBuffer*, ::GCIIPPOALCO))((::PBYTE)hIl2Cpp + GCIIPPOALCO_JAPAOABHAFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
