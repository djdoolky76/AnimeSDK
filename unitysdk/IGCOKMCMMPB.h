#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEHBFDPLJDI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGCOKMCMMPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IGCOKMCMMPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4FA0)
#define IGCOKMCMMPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGCOKMCMMPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGCOKMCMMPB_HIILNEENKKG_1_OFFSET UNITYSDK_OFFSET(0x18BBAB60)
#define IGCOKMCMMPB_HIILNEENKKG_OFFSET UNITYSDK_OFFSET(0x18BBAAF0)
#define IGCOKMCMMPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4F90)
#define IGCOKMCMMPB___INIT_OFFSET UNITYSDK_OFFSET(0x7D4F70)

inline static constexpr unsigned int IGCOKMCMMPB_TypeDefinitionIndex = 15960;

struct alignas(8) IGCOKMCMMPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGCOKMCMMPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEHBFDPLJDI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEHBFDPLJDI&))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IGCOKMCMMPB HIILNEENKKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGCOKMCMMPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_HIILNEENKKG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IGCOKMCMMPB HIILNEENKKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGCOKMCMMPB EIFONLCJOPG)
	{
		return ((::IGCOKMCMMPB(*)(::FlatBuffers::ByteBuffer*, ::IGCOKMCMMPB))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_HIILNEENKKG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IGCOKMCMMPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGCOKMCMMPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGCOKMCMMPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
