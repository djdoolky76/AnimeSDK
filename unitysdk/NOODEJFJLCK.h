#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BBBOBHJMGDL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOODEJFJLCK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NOODEJFJLCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8059E0)
#define NOODEJFJLCK_GBBOBLNCJHF_1_OFFSET UNITYSDK_OFFSET(0x1AD859F0)
#define NOODEJFJLCK_GBBOBLNCJHF_OFFSET UNITYSDK_OFFSET(0x1AD85950)
#define NOODEJFJLCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOODEJFJLCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NOODEJFJLCK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8059C0)
#define NOODEJFJLCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8059D0)
#define NOODEJFJLCK___INIT_OFFSET UNITYSDK_OFFSET(0x8059A0)

inline static constexpr unsigned int NOODEJFJLCK_TypeDefinitionIndex = 15445;

struct alignas(8) NOODEJFJLCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOODEJFJLCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOODEJFJLCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOODEJFJLCK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BBBOBHJMGDL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBBOBHJMGDL&, ::System::Int32&))((::PBYTE)hIl2Cpp + NOODEJFJLCK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NOODEJFJLCK GBBOBLNCJHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NOODEJFJLCK EIFONLCJOPG)
	{
		return ((::NOODEJFJLCK(*)(::FlatBuffers::ByteBuffer*, ::NOODEJFJLCK))((::PBYTE)hIl2Cpp + NOODEJFJLCK_GBBOBLNCJHF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BBBOBHJMGDL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBBOBHJMGDL&))((::PBYTE)hIl2Cpp + NOODEJFJLCK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOODEJFJLCK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NOODEJFJLCK GBBOBLNCJHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOODEJFJLCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOODEJFJLCK_GBBOBLNCJHF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NOODEJFJLCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOODEJFJLCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOODEJFJLCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
