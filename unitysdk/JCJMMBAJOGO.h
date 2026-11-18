#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNIDDAILHLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCJMMBAJOGO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCJMMBAJOGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80ACC0)
#define JCJMMBAJOGO_DEDLIPIPJEC_1_OFFSET UNITYSDK_OFFSET(0x1B1380E0)
#define JCJMMBAJOGO_DEDLIPIPJEC_OFFSET UNITYSDK_OFFSET(0x1B138040)
#define JCJMMBAJOGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCJMMBAJOGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCJMMBAJOGO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80AD00)
#define JCJMMBAJOGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AD10)
#define JCJMMBAJOGO___INIT_OFFSET UNITYSDK_OFFSET(0x80ACA0)

inline static constexpr unsigned int JCJMMBAJOGO_TypeDefinitionIndex = 16472;

struct alignas(8) JCJMMBAJOGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCJMMBAJOGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JCJMMBAJOGO DEDLIPIPJEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCJMMBAJOGO EIFONLCJOPG)
	{
		return ((::JCJMMBAJOGO(*)(::FlatBuffers::ByteBuffer*, ::JCJMMBAJOGO))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_DEDLIPIPJEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JCJMMBAJOGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCJMMBAJOGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JCJMMBAJOGO DEDLIPIPJEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCJMMBAJOGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_DEDLIPIPJEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNIDDAILHLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNIDDAILHLJ&))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNIDDAILHLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNIDDAILHLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJMMBAJOGO_PPOMNIFACOL_OFFSET))(this);
	}
};
