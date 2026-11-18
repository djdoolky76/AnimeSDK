#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HDBDKPAJPJC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBMPHAFPBHA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBMPHAFPBHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B780)
#define HBMPHAFPBHA_EAEFJCHFCDA_1_OFFSET UNITYSDK_OFFSET(0x1BAD5D40)
#define HBMPHAFPBHA_EAEFJCHFCDA_OFFSET UNITYSDK_OFFSET(0x1BAD5CD0)
#define HBMPHAFPBHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBMPHAFPBHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBMPHAFPBHA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B7D0)
#define HBMPHAFPBHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B7C0)
#define HBMPHAFPBHA___INIT_OFFSET UNITYSDK_OFFSET(0x81B760)

inline static constexpr unsigned int HBMPHAFPBHA_TypeDefinitionIndex = 9747;

struct alignas(8) HBMPHAFPBHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBMPHAFPBHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HBMPHAFPBHA EAEFJCHFCDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBMPHAFPBHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_EAEFJCHFCDA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HBMPHAFPBHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBMPHAFPBHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HBMPHAFPBHA EAEFJCHFCDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBMPHAFPBHA EIFONLCJOPG)
	{
		return ((::HBMPHAFPBHA(*)(::FlatBuffers::ByteBuffer*, ::HBMPHAFPBHA))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_EAEFJCHFCDA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HDBDKPAJPJC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDBDKPAJPJC&))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HDBDKPAJPJC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDBDKPAJPJC&, ::System::Int32&))((::PBYTE)hIl2Cpp + HBMPHAFPBHA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
