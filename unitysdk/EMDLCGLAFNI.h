#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DLEIHKGFDOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMDLCGLAFNI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMDLCGLAFNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7420)
#define EMDLCGLAFNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMDLCGLAFNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMDLCGLAFNI_IDDBGPLMNGC_1_OFFSET UNITYSDK_OFFSET(0x174509F0)
#define EMDLCGLAFNI_IDDBGPLMNGC_OFFSET UNITYSDK_OFFSET(0x17450980)
#define EMDLCGLAFNI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7460)
#define EMDLCGLAFNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7410)
#define EMDLCGLAFNI___INIT_OFFSET UNITYSDK_OFFSET(0x7A73F0)

inline static constexpr unsigned int EMDLCGLAFNI_TypeDefinitionIndex = 10996;

struct alignas(8) EMDLCGLAFNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDLCGLAFNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DLEIHKGFDOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLEIHKGFDOC&))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EMDLCGLAFNI IDDBGPLMNGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMDLCGLAFNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_IDDBGPLMNGC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EMDLCGLAFNI IDDBGPLMNGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMDLCGLAFNI EIFONLCJOPG)
	{
		return ((::EMDLCGLAFNI(*)(::FlatBuffers::ByteBuffer*, ::EMDLCGLAFNI))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_IDDBGPLMNGC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EMDLCGLAFNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMDLCGLAFNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DLEIHKGFDOC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLEIHKGFDOC&, ::System::Int32&))((::PBYTE)hIl2Cpp + EMDLCGLAFNI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
