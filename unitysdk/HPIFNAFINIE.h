#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EOLPIDFMDKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPIFNAFINIE_AFNFPBDDMGC_1_OFFSET UNITYSDK_OFFSET(0x1B619920)
#define HPIFNAFINIE_AFNFPBDDMGC_OFFSET UNITYSDK_OFFSET(0x1B619880)
#define HPIFNAFINIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPIFNAFINIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F4F0)
#define HPIFNAFINIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPIFNAFINIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPIFNAFINIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F4E0)
#define HPIFNAFINIE___INIT_OFFSET UNITYSDK_OFFSET(0x80F4C0)

inline static constexpr unsigned int HPIFNAFINIE_TypeDefinitionIndex = 10868;

struct alignas(8) HPIFNAFINIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIFNAFINIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPIFNAFINIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIFNAFINIE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HPIFNAFINIE AFNFPBDDMGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPIFNAFINIE EIFONLCJOPG)
	{
		return ((::HPIFNAFINIE(*)(::FlatBuffers::ByteBuffer*, ::HPIFNAFINIE))((::PBYTE)hIl2Cpp + HPIFNAFINIE_AFNFPBDDMGC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIFNAFINIE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HPIFNAFINIE AFNFPBDDMGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPIFNAFINIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPIFNAFINIE_AFNFPBDDMGC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EOLPIDFMDKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOLPIDFMDKK&))((::PBYTE)hIl2Cpp + HPIFNAFINIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HPIFNAFINIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPIFNAFINIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPIFNAFINIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
