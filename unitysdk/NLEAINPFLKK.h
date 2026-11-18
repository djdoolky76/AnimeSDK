#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OANAHLHNHDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLEAINPFLKK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NLEAINPFLKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F560)
#define NLEAINPFLKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLEAINPFLKK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLEAINPFLKK_JFBKLHOHFJD_1_OFFSET UNITYSDK_OFFSET(0x1C0961A0)
#define NLEAINPFLKK_JFBKLHOHFJD_OFFSET UNITYSDK_OFFSET(0x1C096000)
#define NLEAINPFLKK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F550)
#define NLEAINPFLKK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F540)
#define NLEAINPFLKK___INIT_OFFSET UNITYSDK_OFFSET(0x81F520)

inline static constexpr unsigned int NLEAINPFLKK_TypeDefinitionIndex = 12349;

struct alignas(8) NLEAINPFLKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEAINPFLKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLEAINPFLKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NLEAINPFLKK JFBKLHOHFJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLEAINPFLKK EIFONLCJOPG)
	{
		return ((::NLEAINPFLKK(*)(::FlatBuffers::ByteBuffer*, ::NLEAINPFLKK))((::PBYTE)hIl2Cpp + NLEAINPFLKK_JFBKLHOHFJD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OANAHLHNHDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OANAHLHNHDK&))((::PBYTE)hIl2Cpp + NLEAINPFLKK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEAINPFLKK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEAINPFLKK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NLEAINPFLKK JFBKLHOHFJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLEAINPFLKK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLEAINPFLKK_JFBKLHOHFJD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OANAHLHNHDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OANAHLHNHDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + NLEAINPFLKK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NLEAINPFLKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLEAINPFLKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLEAINPFLKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
