#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EOFMKLFEEFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHOBHDIANPD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHOBHDIANPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6D30)
#define KHOBHDIANPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHOBHDIANPD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHOBHDIANPD_MPHHPBIJNMI_1_OFFSET UNITYSDK_OFFSET(0x18DE7F20)
#define KHOBHDIANPD_MPHHPBIJNMI_OFFSET UNITYSDK_OFFSET(0x18DE7EB0)
#define KHOBHDIANPD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6D20)
#define KHOBHDIANPD___INIT_OFFSET UNITYSDK_OFFSET(0x7D6D00)

inline static constexpr unsigned int KHOBHDIANPD_TypeDefinitionIndex = 16384;

struct alignas(8) KHOBHDIANPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOBHDIANPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHOBHDIANPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KHOBHDIANPD MPHHPBIJNMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHOBHDIANPD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHOBHDIANPD_MPHHPBIJNMI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KHOBHDIANPD MPHHPBIJNMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHOBHDIANPD EIFONLCJOPG)
	{
		return ((::KHOBHDIANPD(*)(::FlatBuffers::ByteBuffer*, ::KHOBHDIANPD))((::PBYTE)hIl2Cpp + KHOBHDIANPD_MPHHPBIJNMI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOBHDIANPD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOBHDIANPD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EOFMKLFEEFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOFMKLFEEFH&))((::PBYTE)hIl2Cpp + KHOBHDIANPD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KHOBHDIANPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHOBHDIANPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHOBHDIANPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
