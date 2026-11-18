#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OAMNHMIDIHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPNNPCNDPGI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPNNPCNDPGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D8240)
#define NPNNPCNDPGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPNNPCNDPGI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPNNPCNDPGI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D8230)
#define NPNNPCNDPGI_NKHPGGHCIHH_1_OFFSET UNITYSDK_OFFSET(0x18E24E30)
#define NPNNPCNDPGI_NKHPGGHCIHH_OFFSET UNITYSDK_OFFSET(0x18E24DC0)
#define NPNNPCNDPGI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D8280)
#define NPNNPCNDPGI___INIT_OFFSET UNITYSDK_OFFSET(0x7D8210)

inline static constexpr unsigned int NPNNPCNDPGI_TypeDefinitionIndex = 17518;

struct alignas(8) NPNNPCNDPGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPNNPCNDPGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OAMNHMIDIHH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAMNHMIDIHH&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NPNNPCNDPGI NKHPGGHCIHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPNNPCNDPGI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_NKHPGGHCIHH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OAMNHMIDIHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OAMNHMIDIHH&))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NPNNPCNDPGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPNNPCNDPGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NPNNPCNDPGI NKHPGGHCIHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPNNPCNDPGI EIFONLCJOPG)
	{
		return ((::NPNNPCNDPGI(*)(::FlatBuffers::ByteBuffer*, ::NPNNPCNDPGI))((::PBYTE)hIl2Cpp + NPNNPCNDPGI_NKHPGGHCIHH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
