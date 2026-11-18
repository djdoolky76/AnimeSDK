#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMECPMJLBNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEOLLFHOEIM_AHIOLDOOHLE_1_OFFSET UNITYSDK_OFFSET(0x173793C0)
#define PEOLLFHOEIM_AHIOLDOOHLE_OFFSET UNITYSDK_OFFSET(0x17379350)
#define PEOLLFHOEIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PEOLLFHOEIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6E90)
#define PEOLLFHOEIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEOLLFHOEIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PEOLLFHOEIM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6E70)
#define PEOLLFHOEIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6E80)
#define PEOLLFHOEIM___INIT_OFFSET UNITYSDK_OFFSET(0x7A6E50)

inline static constexpr unsigned int PEOLLFHOEIM_TypeDefinitionIndex = 15271;

struct alignas(8) PEOLLFHOEIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEOLLFHOEIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMECPMJLBNF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMECPMJLBNF&, ::System::Int32&))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PEOLLFHOEIM AHIOLDOOHLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEOLLFHOEIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_AHIOLDOOHLE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PEOLLFHOEIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEOLLFHOEIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PEOLLFHOEIM AHIOLDOOHLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PEOLLFHOEIM EIFONLCJOPG)
	{
		return ((::PEOLLFHOEIM(*)(::FlatBuffers::ByteBuffer*, ::PEOLLFHOEIM))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_AHIOLDOOHLE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMECPMJLBNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMECPMJLBNF&))((::PBYTE)hIl2Cpp + PEOLLFHOEIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
