#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPANOCFFLAL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOHDJPDEDEK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HOHDJPDEDEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x757120)
#define HOHDJPDEDEK_EAJKPGDKIHP_1_OFFSET UNITYSDK_OFFSET(0x152DE180)
#define HOHDJPDEDEK_EAJKPGDKIHP_OFFSET UNITYSDK_OFFSET(0x152DE120)
#define HOHDJPDEDEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOHDJPDEDEK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HOHDJPDEDEK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x757160)
#define HOHDJPDEDEK___INIT_OFFSET UNITYSDK_OFFSET(0x757100)

inline static constexpr unsigned int HOHDJPDEDEK_TypeDefinitionIndex = 11621;

struct alignas(8) HOHDJPDEDEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOHDJPDEDEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HOHDJPDEDEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOHDJPDEDEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HOHDJPDEDEK EAJKPGDKIHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HOHDJPDEDEK EIFONLCJOPG)
	{
		return ((::HOHDJPDEDEK(*)(::FlatBuffers::ByteBuffer*, ::HOHDJPDEDEK))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_EAJKPGDKIHP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HOHDJPDEDEK EAJKPGDKIHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOHDJPDEDEK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_EAJKPGDKIHP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPANOCFFLAL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPANOCFFLAL&))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHDJPDEDEK_PPOMNIFACOL_OFFSET))(this);
	}
};
