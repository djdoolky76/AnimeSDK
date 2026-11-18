#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMLAJDLIIEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEGFDGPNICF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BEGFDGPNICF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC8A0)
#define BEGFDGPNICF_BNLDBHAHJPO_1_OFFSET UNITYSDK_OFFSET(0x17758C10)
#define BEGFDGPNICF_BNLDBHAHJPO_OFFSET UNITYSDK_OFFSET(0x17758BB0)
#define BEGFDGPNICF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BEGFDGPNICF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BEGFDGPNICF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC8E0)
#define BEGFDGPNICF___INIT_OFFSET UNITYSDK_OFFSET(0x7AC880)

inline static constexpr unsigned int BEGFDGPNICF_TypeDefinitionIndex = 11478;

struct alignas(8) BEGFDGPNICF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGFDGPNICF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEGFDGPNICF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BEGFDGPNICF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEGFDGPNICF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEGFDGPNICF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMLAJDLIIEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMLAJDLIIEG&))((::PBYTE)hIl2Cpp + BEGFDGPNICF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGFDGPNICF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGFDGPNICF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BEGFDGPNICF BNLDBHAHJPO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BEGFDGPNICF EIFONLCJOPG)
	{
		return ((::BEGFDGPNICF(*)(::FlatBuffers::ByteBuffer*, ::BEGFDGPNICF))((::PBYTE)hIl2Cpp + BEGFDGPNICF_BNLDBHAHJPO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BEGFDGPNICF BNLDBHAHJPO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEGFDGPNICF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEGFDGPNICF_BNLDBHAHJPO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
