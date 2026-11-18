#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCAHLDENMEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMBNFFGLLHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMBNFFGLLHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9DD0)
#define CMBNFFGLLHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMBNFFGLLHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMBNFFGLLHE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9E10)
#define CMBNFFGLLHE_MHLKPOHOEGP_1_OFFSET UNITYSDK_OFFSET(0x1A547E60)
#define CMBNFFGLLHE_MHLKPOHOEGP_OFFSET UNITYSDK_OFFSET(0x1A547DC0)
#define CMBNFFGLLHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9DC0)
#define CMBNFFGLLHE___INIT_OFFSET UNITYSDK_OFFSET(0x7F9DA0)

inline static constexpr unsigned int CMBNFFGLLHE_TypeDefinitionIndex = 14103;

struct alignas(8) CMBNFFGLLHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMBNFFGLLHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCAHLDENMEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCAHLDENMEI&))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CMBNFFGLLHE MHLKPOHOEGP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMBNFFGLLHE EIFONLCJOPG)
	{
		return ((::CMBNFFGLLHE(*)(::FlatBuffers::ByteBuffer*, ::CMBNFFGLLHE))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_MHLKPOHOEGP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CMBNFFGLLHE MHLKPOHOEGP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMBNFFGLLHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_MHLKPOHOEGP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CMBNFFGLLHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMBNFFGLLHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCAHLDENMEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCAHLDENMEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBNFFGLLHE_GHKKNCCLPAN_OFFSET))(this);
	}
};
