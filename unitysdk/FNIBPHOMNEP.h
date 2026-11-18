#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CIALPHHFGDF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNIBPHOMNEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNIBPHOMNEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D4E0)
#define FNIBPHOMNEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNIBPHOMNEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNIBPHOMNEP_MKEBIMDBBLJ_1_OFFSET UNITYSDK_OFFSET(0x1B4CAD70)
#define FNIBPHOMNEP_MKEBIMDBBLJ_OFFSET UNITYSDK_OFFSET(0x1B4CACD0)
#define FNIBPHOMNEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D520)
#define FNIBPHOMNEP___INIT_OFFSET UNITYSDK_OFFSET(0x80D4C0)

inline static constexpr unsigned int FNIBPHOMNEP_TypeDefinitionIndex = 16232;

struct alignas(8) FNIBPHOMNEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNIBPHOMNEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FNIBPHOMNEP MKEBIMDBBLJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNIBPHOMNEP EIFONLCJOPG)
	{
		return ((::FNIBPHOMNEP(*)(::FlatBuffers::ByteBuffer*, ::FNIBPHOMNEP))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_MKEBIMDBBLJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FNIBPHOMNEP MKEBIMDBBLJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNIBPHOMNEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_MKEBIMDBBLJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FNIBPHOMNEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNIBPHOMNEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CIALPHHFGDF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIALPHHFGDF&))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIBPHOMNEP_PPOMNIFACOL_OFFSET))(this);
	}
};
