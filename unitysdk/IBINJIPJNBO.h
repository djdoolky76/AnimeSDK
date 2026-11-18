#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEFOIGJLPEB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBINJIPJNBO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBINJIPJNBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8830)
#define IBINJIPJNBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBINJIPJNBO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBINJIPJNBO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8810)
#define IBINJIPJNBO_MEFNMPMJABA_1_OFFSET UNITYSDK_OFFSET(0x1A4F5320)
#define IBINJIPJNBO_MEFNMPMJABA_OFFSET UNITYSDK_OFFSET(0x1A4F52B0)
#define IBINJIPJNBO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8820)
#define IBINJIPJNBO___INIT_OFFSET UNITYSDK_OFFSET(0x7F87F0)

inline static constexpr unsigned int IBINJIPJNBO_TypeDefinitionIndex = 12331;

struct alignas(8) IBINJIPJNBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBINJIPJNBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBINJIPJNBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FEFOIGJLPEB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEFOIGJLPEB&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBINJIPJNBO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IBINJIPJNBO MEFNMPMJABA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBINJIPJNBO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBINJIPJNBO_MEFNMPMJABA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IBINJIPJNBO MEFNMPMJABA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBINJIPJNBO EIFONLCJOPG)
	{
		return ((::IBINJIPJNBO(*)(::FlatBuffers::ByteBuffer*, ::IBINJIPJNBO))((::PBYTE)hIl2Cpp + IBINJIPJNBO_MEFNMPMJABA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBINJIPJNBO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEFOIGJLPEB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEFOIGJLPEB&))((::PBYTE)hIl2Cpp + IBINJIPJNBO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBINJIPJNBO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IBINJIPJNBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBINJIPJNBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBINJIPJNBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
