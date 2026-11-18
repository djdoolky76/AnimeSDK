#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHLKHFANIHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAHMKMKEGLI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DAHMKMKEGLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x788950)
#define DAHMKMKEGLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAHMKMKEGLI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DAHMKMKEGLI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x788990)
#define DAHMKMKEGLI_PJLOIGFAFJC_1_OFFSET UNITYSDK_OFFSET(0x166147A0)
#define DAHMKMKEGLI_PJLOIGFAFJC_OFFSET UNITYSDK_OFFSET(0x16614520)
#define DAHMKMKEGLI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7889A0)
#define DAHMKMKEGLI___INIT_OFFSET UNITYSDK_OFFSET(0x788930)

inline static constexpr unsigned int DAHMKMKEGLI_TypeDefinitionIndex = 10739;

struct alignas(8) DAHMKMKEGLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAHMKMKEGLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHLKHFANIHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHLKHFANIHN&))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DAHMKMKEGLI PJLOIGFAFJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DAHMKMKEGLI EIFONLCJOPG)
	{
		return ((::DAHMKMKEGLI(*)(::FlatBuffers::ByteBuffer*, ::DAHMKMKEGLI))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_PJLOIGFAFJC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DAHMKMKEGLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAHMKMKEGLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 MCFFIHENHKJ, ::EHLKHFANIHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::EHLKHFANIHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, MCFFIHENHKJ, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DAHMKMKEGLI PJLOIGFAFJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAHMKMKEGLI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAHMKMKEGLI_PJLOIGFAFJC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
