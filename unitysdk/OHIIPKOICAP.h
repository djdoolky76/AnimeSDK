#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKMNAKGKFPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHIIPKOICAP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OHIIPKOICAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8036C0)
#define OHIIPKOICAP_EFFPLLFMNGD_1_OFFSET UNITYSDK_OFFSET(0x1AB2D300)
#define OHIIPKOICAP_EFFPLLFMNGD_OFFSET UNITYSDK_OFFSET(0x1AB2D290)
#define OHIIPKOICAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHIIPKOICAP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OHIIPKOICAP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x803710)
#define OHIIPKOICAP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803700)
#define OHIIPKOICAP___INIT_OFFSET UNITYSDK_OFFSET(0x8036A0)

inline static constexpr unsigned int OHIIPKOICAP_TypeDefinitionIndex = 15156;

struct alignas(8) OHIIPKOICAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIIPKOICAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHIIPKOICAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIIPKOICAP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OHIIPKOICAP EFFPLLFMNGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHIIPKOICAP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHIIPKOICAP_EFFPLLFMNGD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OHIIPKOICAP EFFPLLFMNGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OHIIPKOICAP EIFONLCJOPG)
	{
		return ((::OHIIPKOICAP(*)(::FlatBuffers::ByteBuffer*, ::OHIIPKOICAP))((::PBYTE)hIl2Cpp + OHIIPKOICAP_EFFPLLFMNGD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OHIIPKOICAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHIIPKOICAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHIIPKOICAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IKMNAKGKFPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKMNAKGKFPC&))((::PBYTE)hIl2Cpp + OHIIPKOICAP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIIPKOICAP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IKMNAKGKFPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKMNAKGKFPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + OHIIPKOICAP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
