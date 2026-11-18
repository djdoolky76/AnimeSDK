#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJEBJDKNNHG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHCMPCIPDBP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHCMPCIPDBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEE70)
#define HHCMPCIPDBP_DNJBCCKPBHF_1_OFFSET UNITYSDK_OFFSET(0x193423D0)
#define HHCMPCIPDBP_DNJBCCKPBHF_OFFSET UNITYSDK_OFFSET(0x19342130)
#define HHCMPCIPDBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHCMPCIPDBP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHCMPCIPDBP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DEE60)
#define HHCMPCIPDBP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEE50)
#define HHCMPCIPDBP___INIT_OFFSET UNITYSDK_OFFSET(0x7DEE30)

inline static constexpr unsigned int HHCMPCIPDBP_TypeDefinitionIndex = 17463;

struct alignas(8) HHCMPCIPDBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCMPCIPDBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HHCMPCIPDBP DNJBCCKPBHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHCMPCIPDBP EIFONLCJOPG)
	{
		return ((::HHCMPCIPDBP(*)(::FlatBuffers::ByteBuffer*, ::HHCMPCIPDBP))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_DNJBCCKPBHF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BJEBJDKNNHG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJEBJDKNNHG&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJEBJDKNNHG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJEBJDKNNHG&))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HHCMPCIPDBP DNJBCCKPBHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHCMPCIPDBP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_DNJBCCKPBHF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HHCMPCIPDBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHCMPCIPDBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCMPCIPDBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
