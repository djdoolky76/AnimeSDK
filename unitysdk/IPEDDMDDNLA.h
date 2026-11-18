#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKLPBKHMKBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPEDDMDDNLA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IPEDDMDDNLA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77AAB0)
#define IPEDDMDDNLA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPEDDMDDNLA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IPEDDMDDNLA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77AB00)
#define IPEDDMDDNLA_PKIHEMHMAFD_1_OFFSET UNITYSDK_OFFSET(0x16110F40)
#define IPEDDMDDNLA_PKIHEMHMAFD_OFFSET UNITYSDK_OFFSET(0x16110ED0)
#define IPEDDMDDNLA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77AAF0)
#define IPEDDMDDNLA___INIT_OFFSET UNITYSDK_OFFSET(0x77AA90)

inline static constexpr unsigned int IPEDDMDDNLA_TypeDefinitionIndex = 9452;

struct alignas(8) IPEDDMDDNLA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPEDDMDDNLA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IPEDDMDDNLA PKIHEMHMAFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPEDDMDDNLA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_PKIHEMHMAFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IPEDDMDDNLA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPEDDMDDNLA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKLPBKHMKBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKLPBKHMKBG&))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IPEDDMDDNLA PKIHEMHMAFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IPEDDMDDNLA EIFONLCJOPG)
	{
		return ((::IPEDDMDDNLA(*)(::FlatBuffers::ByteBuffer*, ::IPEDDMDDNLA))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_PKIHEMHMAFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NKLPBKHMKBG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKLPBKHMKBG&, ::System::Int32&))((::PBYTE)hIl2Cpp + IPEDDMDDNLA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
