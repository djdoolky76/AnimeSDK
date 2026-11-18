#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DGCKIBBBHLH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCJEINKOJKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCJEINKOJKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80AC40)
#define JCJEINKOJKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCJEINKOJKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCJEINKOJKJ_JFDLHLPINNF_1_OFFSET UNITYSDK_OFFSET(0x1B137980)
#define JCJEINKOJKJ_JFDLHLPINNF_OFFSET UNITYSDK_OFFSET(0x1B137910)
#define JCJEINKOJKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80AC30)
#define JCJEINKOJKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AC20)
#define JCJEINKOJKJ___INIT_OFFSET UNITYSDK_OFFSET(0x80AC00)

inline static constexpr unsigned int JCJEINKOJKJ_TypeDefinitionIndex = 9768;

struct alignas(8) JCJEINKOJKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCJEINKOJKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JCJEINKOJKJ JFDLHLPINNF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCJEINKOJKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_JFDLHLPINNF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JCJEINKOJKJ JFDLHLPINNF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCJEINKOJKJ EIFONLCJOPG)
	{
		return ((::JCJEINKOJKJ(*)(::FlatBuffers::ByteBuffer*, ::JCJEINKOJKJ))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_JFDLHLPINNF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DGCKIBBBHLH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DGCKIBBBHLH&))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DGCKIBBBHLH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DGCKIBBBHLH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JCJEINKOJKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCJEINKOJKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJEINKOJKJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
