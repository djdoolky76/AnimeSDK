#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DDJFCBKNLND.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMIILILKABF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMIILILKABF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820750)
#define NMIILILKABF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMIILILKABF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMIILILKABF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820740)
#define NMIILILKABF_PCLPMAOFFLM_1_OFFSET UNITYSDK_OFFSET(0x1C190830)
#define NMIILILKABF_PCLPMAOFFLM_OFFSET UNITYSDK_OFFSET(0x1C190530)
#define NMIILILKABF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820790)
#define NMIILILKABF___INIT_OFFSET UNITYSDK_OFFSET(0x820720)

inline static constexpr unsigned int NMIILILKABF_TypeDefinitionIndex = 14572;

struct alignas(8) NMIILILKABF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIILILKABF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMIILILKABF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NMIILILKABF PCLPMAOFFLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMIILILKABF EIFONLCJOPG)
	{
		return ((::NMIILILKABF(*)(::FlatBuffers::ByteBuffer*, ::NMIILILKABF))((::PBYTE)hIl2Cpp + NMIILILKABF_PCLPMAOFFLM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DDJFCBKNLND& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDJFCBKNLND&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMIILILKABF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIILILKABF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DDJFCBKNLND& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDJFCBKNLND&))((::PBYTE)hIl2Cpp + NMIILILKABF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NMIILILKABF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMIILILKABF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMIILILKABF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIILILKABF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NMIILILKABF PCLPMAOFFLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMIILILKABF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMIILILKABF_PCLPMAOFFLM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
