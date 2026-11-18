#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFJELANDEDO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBBEAKGDAFC_ADFOPDEODPD_1_OFFSET UNITYSDK_OFFSET(0x195B20A0)
#define NBBEAKGDAFC_ADFOPDEODPD_OFFSET UNITYSDK_OFFSET(0x195B2000)
#define NBBEAKGDAFC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NBBEAKGDAFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E67E0)
#define NBBEAKGDAFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBBEAKGDAFC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NBBEAKGDAFC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6820)
#define NBBEAKGDAFC___INIT_OFFSET UNITYSDK_OFFSET(0x7E67C0)

inline static constexpr unsigned int NBBEAKGDAFC_TypeDefinitionIndex = 15506;

struct alignas(8) NBBEAKGDAFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBEAKGDAFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NBBEAKGDAFC ADFOPDEODPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NBBEAKGDAFC EIFONLCJOPG)
	{
		return ((::NBBEAKGDAFC(*)(::FlatBuffers::ByteBuffer*, ::NBBEAKGDAFC))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_ADFOPDEODPD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NBBEAKGDAFC ADFOPDEODPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBBEAKGDAFC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_ADFOPDEODPD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NBBEAKGDAFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBBEAKGDAFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NFJELANDEDO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFJELANDEDO&))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBEAKGDAFC_PPOMNIFACOL_OFFSET))(this);
	}
};
