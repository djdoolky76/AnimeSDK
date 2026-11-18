#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GONODIJFCFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHLDPDNJPCJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MHLDPDNJPCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C41B0)
#define MHLDPDNJPCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHLDPDNJPCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHLDPDNJPCJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C41A0)
#define MHLDPDNJPCJ_MJAPAMAPAEM_1_OFFSET UNITYSDK_OFFSET(0x17FC67A0)
#define MHLDPDNJPCJ_MJAPAMAPAEM_OFFSET UNITYSDK_OFFSET(0x17FC6730)
#define MHLDPDNJPCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C41F0)
#define MHLDPDNJPCJ___INIT_OFFSET UNITYSDK_OFFSET(0x7C4180)

inline static constexpr unsigned int MHLDPDNJPCJ_TypeDefinitionIndex = 13600;

struct alignas(8) MHLDPDNJPCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GONODIJFCFH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GONODIJFCFH&, ::System::Int32&))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MHLDPDNJPCJ MJAPAMAPAEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHLDPDNJPCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_MJAPAMAPAEM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MHLDPDNJPCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHLDPDNJPCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GONODIJFCFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GONODIJFCFH&))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MHLDPDNJPCJ MJAPAMAPAEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHLDPDNJPCJ EIFONLCJOPG)
	{
		return ((::MHLDPDNJPCJ(*)(::FlatBuffers::ByteBuffer*, ::MHLDPDNJPCJ))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_MJAPAMAPAEM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDPDNJPCJ_PPOMNIFACOL_OFFSET))(this);
	}
};
