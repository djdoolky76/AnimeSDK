#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOGDEBNCHAB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKFJCBIOJFB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FKFJCBIOJFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809900)
#define FKFJCBIOJFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKFJCBIOJFB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FKFJCBIOJFB_JBGPFKBPBMD_1_OFFSET UNITYSDK_OFFSET(0x1B1093E0)
#define FKFJCBIOJFB_JBGPFKBPBMD_OFFSET UNITYSDK_OFFSET(0x1B109340)
#define FKFJCBIOJFB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8098F0)
#define FKFJCBIOJFB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8098E0)
#define FKFJCBIOJFB___INIT_OFFSET UNITYSDK_OFFSET(0x8098C0)

inline static constexpr unsigned int FKFJCBIOJFB_TypeDefinitionIndex = 14044;

struct alignas(8) FKFJCBIOJFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKFJCBIOJFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOGDEBNCHAB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOGDEBNCHAB&))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JOGDEBNCHAB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOGDEBNCHAB&, ::System::Int32&))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FKFJCBIOJFB JBGPFKBPBMD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FKFJCBIOJFB EIFONLCJOPG)
	{
		return ((::FKFJCBIOJFB(*)(::FlatBuffers::ByteBuffer*, ::FKFJCBIOJFB))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_JBGPFKBPBMD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FKFJCBIOJFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKFJCBIOJFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FKFJCBIOJFB JBGPFKBPBMD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKFJCBIOJFB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKFJCBIOJFB_JBGPFKBPBMD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
