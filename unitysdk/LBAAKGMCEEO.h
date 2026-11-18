#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OLHMLABBNLC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBAAKGMCEEO_BFAIICDBNOB_1_OFFSET UNITYSDK_OFFSET(0x1530CBC0)
#define LBAAKGMCEEO_BFAIICDBNOB_OFFSET UNITYSDK_OFFSET(0x1530CB50)
#define LBAAKGMCEEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBAAKGMCEEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758F90)
#define LBAAKGMCEEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBAAKGMCEEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBAAKGMCEEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758FD0)
#define LBAAKGMCEEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758FE0)
#define LBAAKGMCEEO___INIT_OFFSET UNITYSDK_OFFSET(0x758F70)

inline static constexpr unsigned int LBAAKGMCEEO_TypeDefinitionIndex = 15011;

struct alignas(8) LBAAKGMCEEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBAAKGMCEEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LBAAKGMCEEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBAAKGMCEEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LBAAKGMCEEO BFAIICDBNOB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBAAKGMCEEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_BFAIICDBNOB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LBAAKGMCEEO BFAIICDBNOB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBAAKGMCEEO EIFONLCJOPG)
	{
		return ((::LBAAKGMCEEO(*)(::FlatBuffers::ByteBuffer*, ::LBAAKGMCEEO))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_BFAIICDBNOB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OLHMLABBNLC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLHMLABBNLC&, ::System::Int32&))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OLHMLABBNLC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLHMLABBNLC&))((::PBYTE)hIl2Cpp + LBAAKGMCEEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
