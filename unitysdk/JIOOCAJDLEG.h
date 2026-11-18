#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHALPKKKIHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIOOCAJDLEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIOOCAJDLEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BF510)
#define JIOOCAJDLEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIOOCAJDLEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIOOCAJDLEG_JPMGHALFAFJ_1_OFFSET UNITYSDK_OFFSET(0x17C294B0)
#define JIOOCAJDLEG_JPMGHALFAFJ_OFFSET UNITYSDK_OFFSET(0x17C29450)
#define JIOOCAJDLEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BF4F0)
#define JIOOCAJDLEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BF500)
#define JIOOCAJDLEG___INIT_OFFSET UNITYSDK_OFFSET(0x7BF4D0)

inline static constexpr unsigned int JIOOCAJDLEG_TypeDefinitionIndex = 10521;

struct alignas(8) JIOOCAJDLEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIOOCAJDLEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HHALPKKKIHH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHALPKKKIHH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JIOOCAJDLEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIOOCAJDLEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIOOCAJDLEG JPMGHALFAFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIOOCAJDLEG EIFONLCJOPG)
	{
		return ((::JIOOCAJDLEG(*)(::FlatBuffers::ByteBuffer*, ::JIOOCAJDLEG))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_JPMGHALFAFJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JIOOCAJDLEG JPMGHALFAFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIOOCAJDLEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_JPMGHALFAFJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHALPKKKIHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHALPKKKIHH&))((::PBYTE)hIl2Cpp + JIOOCAJDLEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
