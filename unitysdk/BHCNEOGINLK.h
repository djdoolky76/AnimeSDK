#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOCBJFEIDOM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHCNEOGINLK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHCNEOGINLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB360)
#define BHCNEOGINLK_EICKDAMCMDK_1_OFFSET UNITYSDK_OFFSET(0x1A579B70)
#define BHCNEOGINLK_EICKDAMCMDK_OFFSET UNITYSDK_OFFSET(0x1A579B00)
#define BHCNEOGINLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHCNEOGINLK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHCNEOGINLK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB3A0)
#define BHCNEOGINLK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB3B0)
#define BHCNEOGINLK___INIT_OFFSET UNITYSDK_OFFSET(0x7FB340)

inline static constexpr unsigned int BHCNEOGINLK_TypeDefinitionIndex = 10036;

struct alignas(8) BHCNEOGINLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNEOGINLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCNEOGINLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BHCNEOGINLK EICKDAMCMDK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHCNEOGINLK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCNEOGINLK_EICKDAMCMDK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BHCNEOGINLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHCNEOGINLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCNEOGINLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOCBJFEIDOM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOCBJFEIDOM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BHCNEOGINLK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOCBJFEIDOM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOCBJFEIDOM&))((::PBYTE)hIl2Cpp + BHCNEOGINLK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNEOGINLK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNEOGINLK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BHCNEOGINLK EICKDAMCMDK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHCNEOGINLK EIFONLCJOPG)
	{
		return ((::BHCNEOGINLK(*)(::FlatBuffers::ByteBuffer*, ::BHCNEOGINLK))((::PBYTE)hIl2Cpp + BHCNEOGINLK_EICKDAMCMDK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
