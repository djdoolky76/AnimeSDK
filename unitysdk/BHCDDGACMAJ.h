#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HAMKKALFGBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHCDDGACMAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHCDDGACMAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x761610)
#define BHCDDGACMAJ_CHMINAHDEEM_1_OFFSET UNITYSDK_OFFSET(0x15729FC0)
#define BHCDDGACMAJ_CHMINAHDEEM_OFFSET UNITYSDK_OFFSET(0x15729F20)
#define BHCDDGACMAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHCDDGACMAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHCDDGACMAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x761600)
#define BHCDDGACMAJ___INIT_OFFSET UNITYSDK_OFFSET(0x7615E0)

inline static constexpr unsigned int BHCDDGACMAJ_TypeDefinitionIndex = 16979;

struct alignas(8) BHCDDGACMAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCDDGACMAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HAMKKALFGBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAMKKALFGBK&))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BHCDDGACMAJ CHMINAHDEEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHCDDGACMAJ EIFONLCJOPG)
	{
		return ((::BHCDDGACMAJ(*)(::FlatBuffers::ByteBuffer*, ::BHCDDGACMAJ))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_CHMINAHDEEM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BHCDDGACMAJ CHMINAHDEEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHCDDGACMAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_CHMINAHDEEM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BHCDDGACMAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHCDDGACMAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCDDGACMAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
