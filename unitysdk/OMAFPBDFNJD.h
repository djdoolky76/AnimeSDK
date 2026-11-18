#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BIAINDAOIAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMAFPBDFNJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OMAFPBDFNJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803980)
#define OMAFPBDFNJD_FKHCHCJEOIK_1_OFFSET UNITYSDK_OFFSET(0x1AB38BA0)
#define OMAFPBDFNJD_FKHCHCJEOIK_OFFSET UNITYSDK_OFFSET(0x1AB38B30)
#define OMAFPBDFNJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMAFPBDFNJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OMAFPBDFNJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8039D0)
#define OMAFPBDFNJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8039C0)
#define OMAFPBDFNJD___INIT_OFFSET UNITYSDK_OFFSET(0x803960)

inline static constexpr unsigned int OMAFPBDFNJD_TypeDefinitionIndex = 14854;

struct alignas(8) OMAFPBDFNJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMAFPBDFNJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OMAFPBDFNJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMAFPBDFNJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BIAINDAOIAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIAINDAOIAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BIAINDAOIAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIAINDAOIAP&))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OMAFPBDFNJD FKHCHCJEOIK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMAFPBDFNJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_FKHCHCJEOIK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OMAFPBDFNJD FKHCHCJEOIK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OMAFPBDFNJD EIFONLCJOPG)
	{
		return ((::OMAFPBDFNJD(*)(::FlatBuffers::ByteBuffer*, ::OMAFPBDFNJD))((::PBYTE)hIl2Cpp + OMAFPBDFNJD_FKHCHCJEOIK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
