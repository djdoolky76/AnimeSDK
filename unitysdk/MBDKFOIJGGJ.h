#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPMANAELFGE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBDKFOIJGGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MBDKFOIJGGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5880)
#define MBDKFOIJGGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBDKFOIJGGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MBDKFOIJGGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A58C0)
#define MBDKFOIJGGJ_POAFINDLNJD_1_OFFSET UNITYSDK_OFFSET(0x17340750)
#define MBDKFOIJGGJ_POAFINDLNJD_OFFSET UNITYSDK_OFFSET(0x173406E0)
#define MBDKFOIJGGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A58D0)
#define MBDKFOIJGGJ___INIT_OFFSET UNITYSDK_OFFSET(0x7A5860)

inline static constexpr unsigned int MBDKFOIJGGJ_TypeDefinitionIndex = 13939;

struct alignas(8) MBDKFOIJGGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MBDKFOIJGGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBDKFOIJGGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPMANAELFGE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPMANAELFGE&))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JPMANAELFGE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPMANAELFGE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MBDKFOIJGGJ POAFINDLNJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBDKFOIJGGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_POAFINDLNJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MBDKFOIJGGJ POAFINDLNJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MBDKFOIJGGJ EIFONLCJOPG)
	{
		return ((::MBDKFOIJGGJ(*)(::FlatBuffers::ByteBuffer*, ::MBDKFOIJGGJ))((::PBYTE)hIl2Cpp + MBDKFOIJGGJ_POAFINDLNJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
