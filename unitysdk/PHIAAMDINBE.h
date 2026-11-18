#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCHMLFFFDNI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHIAAMDINBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHIAAMDINBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937300)
#define PHIAAMDINBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHIAAMDINBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHIAAMDINBE_HLINCNICDJM_1_OFFSET UNITYSDK_OFFSET(0x1EDBF670)
#define PHIAAMDINBE_HLINCNICDJM_OFFSET UNITYSDK_OFFSET(0x1EDBF470)
#define PHIAAMDINBE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9372F0)
#define PHIAAMDINBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9372E0)
#define PHIAAMDINBE___INIT_OFFSET UNITYSDK_OFFSET(0x9372C0)

inline static constexpr unsigned int PHIAAMDINBE_TypeDefinitionIndex = 10968;

struct alignas(8) PHIAAMDINBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIAAMDINBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHIAAMDINBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIAAMDINBE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OCHMLFFFDNI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCHMLFFFDNI&))((::PBYTE)hIl2Cpp + PHIAAMDINBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PHIAAMDINBE HLINCNICDJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHIAAMDINBE EIFONLCJOPG)
	{
		return ((::PHIAAMDINBE(*)(::FlatBuffers::ByteBuffer*, ::PHIAAMDINBE))((::PBYTE)hIl2Cpp + PHIAAMDINBE_HLINCNICDJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OCHMLFFFDNI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCHMLFFFDNI&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHIAAMDINBE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PHIAAMDINBE HLINCNICDJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHIAAMDINBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHIAAMDINBE_HLINCNICDJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PHIAAMDINBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHIAAMDINBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHIAAMDINBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIAAMDINBE_GHKKNCCLPAN_OFFSET))(this);
	}
};
