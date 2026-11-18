#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOENNLFBFKP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEEJMCEOGPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEEJMCEOGPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9C40)
#define MEEJMCEOGPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEEJMCEOGPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEEJMCEOGPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D9C90)
#define MEEJMCEOGPP_MGMHOGBMLPD_1_OFFSET UNITYSDK_OFFSET(0x19108870)
#define MEEJMCEOGPP_MGMHOGBMLPD_OFFSET UNITYSDK_OFFSET(0x19108800)
#define MEEJMCEOGPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9C80)
#define MEEJMCEOGPP___INIT_OFFSET UNITYSDK_OFFSET(0x7D9C20)

inline static constexpr unsigned int MEEJMCEOGPP_TypeDefinitionIndex = 17585;

struct alignas(8) MEEJMCEOGPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEJMCEOGPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MEEJMCEOGPP MGMHOGBMLPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEEJMCEOGPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_MGMHOGBMLPD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MEEJMCEOGPP MGMHOGBMLPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEEJMCEOGPP EIFONLCJOPG)
	{
		return ((::MEEJMCEOGPP(*)(::FlatBuffers::ByteBuffer*, ::MEEJMCEOGPP))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_MGMHOGBMLPD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOENNLFBFKP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOENNLFBFKP&))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MEEJMCEOGPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEEJMCEOGPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOENNLFBFKP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOENNLFBFKP&, ::System::Int32&))((::PBYTE)hIl2Cpp + MEEJMCEOGPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
