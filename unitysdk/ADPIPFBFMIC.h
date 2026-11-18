#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PKCNMKDMONJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADPIPFBFMIC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ADPIPFBFMIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EC490)
#define ADPIPFBFMIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADPIPFBFMIC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ADPIPFBFMIC_JFFBOAKGADE_1_OFFSET UNITYSDK_OFFSET(0x19BD2390)
#define ADPIPFBFMIC_JFFBOAKGADE_OFFSET UNITYSDK_OFFSET(0x19BD2330)
#define ADPIPFBFMIC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EC480)
#define ADPIPFBFMIC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EC470)
#define ADPIPFBFMIC___INIT_OFFSET UNITYSDK_OFFSET(0x7EC450)

inline static constexpr unsigned int ADPIPFBFMIC_TypeDefinitionIndex = 10455;

struct alignas(8) ADPIPFBFMIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADPIPFBFMIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PKCNMKDMONJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKCNMKDMONJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ADPIPFBFMIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADPIPFBFMIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PKCNMKDMONJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKCNMKDMONJ&))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ADPIPFBFMIC JFFBOAKGADE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ADPIPFBFMIC EIFONLCJOPG)
	{
		return ((::ADPIPFBFMIC(*)(::FlatBuffers::ByteBuffer*, ::ADPIPFBFMIC))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_JFFBOAKGADE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ADPIPFBFMIC JFFBOAKGADE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADPIPFBFMIC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADPIPFBFMIC_JFFBOAKGADE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
