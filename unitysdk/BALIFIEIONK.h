#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKHINKAEEMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BALIFIEIONK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BALIFIEIONK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9550)
#define BALIFIEIONK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BALIFIEIONK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BALIFIEIONK_KFKBAGKGKLC_1_OFFSET UNITYSDK_OFFSET(0x1A527410)
#define BALIFIEIONK_KFKBAGKGKLC_OFFSET UNITYSDK_OFFSET(0x1A5273A0)
#define BALIFIEIONK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9540)
#define BALIFIEIONK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9530)
#define BALIFIEIONK___INIT_OFFSET UNITYSDK_OFFSET(0x7F9510)

inline static constexpr unsigned int BALIFIEIONK_TypeDefinitionIndex = 9777;

struct alignas(8) BALIFIEIONK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALIFIEIONK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BALIFIEIONK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALIFIEIONK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BALIFIEIONK KFKBAGKGKLC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BALIFIEIONK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BALIFIEIONK_KFKBAGKGKLC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HKHINKAEEMD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKHINKAEEMD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BALIFIEIONK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BALIFIEIONK KFKBAGKGKLC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BALIFIEIONK EIFONLCJOPG)
	{
		return ((::BALIFIEIONK(*)(::FlatBuffers::ByteBuffer*, ::BALIFIEIONK))((::PBYTE)hIl2Cpp + BALIFIEIONK_KFKBAGKGKLC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BALIFIEIONK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BALIFIEIONK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BALIFIEIONK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALIFIEIONK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKHINKAEEMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKHINKAEEMD&))((::PBYTE)hIl2Cpp + BALIFIEIONK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
