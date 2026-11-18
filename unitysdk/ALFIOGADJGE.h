#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IIHDLAPIEJE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALFIOGADJGE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ALFIOGADJGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x825960)
#define ALFIOGADJGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALFIOGADJGE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ALFIOGADJGE_LCBDBDDJMMN_1_OFFSET UNITYSDK_OFFSET(0x1C50A5F0)
#define ALFIOGADJGE_LCBDBDDJMMN_OFFSET UNITYSDK_OFFSET(0x1C50A580)
#define ALFIOGADJGE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x825940)
#define ALFIOGADJGE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x825950)
#define ALFIOGADJGE___INIT_OFFSET UNITYSDK_OFFSET(0x825920)

inline static constexpr unsigned int ALFIOGADJGE_TypeDefinitionIndex = 16322;

struct alignas(8) ALFIOGADJGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFIOGADJGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALFIOGADJGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IIHDLAPIEJE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IIHDLAPIEJE&, ::System::Int32&))((::PBYTE)hIl2Cpp + ALFIOGADJGE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IIHDLAPIEJE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IIHDLAPIEJE&))((::PBYTE)hIl2Cpp + ALFIOGADJGE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFIOGADJGE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ALFIOGADJGE LCBDBDDJMMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALFIOGADJGE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALFIOGADJGE_LCBDBDDJMMN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ALFIOGADJGE LCBDBDDJMMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ALFIOGADJGE EIFONLCJOPG)
	{
		return ((::ALFIOGADJGE(*)(::FlatBuffers::ByteBuffer*, ::ALFIOGADJGE))((::PBYTE)hIl2Cpp + ALFIOGADJGE_LCBDBDDJMMN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFIOGADJGE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ALFIOGADJGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALFIOGADJGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALFIOGADJGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
