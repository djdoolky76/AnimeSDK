#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCJHLFCHFCG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDJBIHBEGBD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JDJBIHBEGBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E40D0)
#define JDJBIHBEGBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDJBIHBEGBD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JDJBIHBEGBD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4120)
#define JDJBIHBEGBD_OBHGLDGPGFL_1_OFFSET UNITYSDK_OFFSET(0x19546D60)
#define JDJBIHBEGBD_OBHGLDGPGFL_OFFSET UNITYSDK_OFFSET(0x19546CF0)
#define JDJBIHBEGBD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4110)
#define JDJBIHBEGBD___INIT_OFFSET UNITYSDK_OFFSET(0x7E40B0)

inline static constexpr unsigned int JDJBIHBEGBD_TypeDefinitionIndex = 13945;

struct alignas(8) JDJBIHBEGBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDJBIHBEGBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JDJBIHBEGBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDJBIHBEGBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JDJBIHBEGBD OBHGLDGPGFL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDJBIHBEGBD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_OBHGLDGPGFL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DCJHLFCHFCG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCJHLFCHFCG&, ::System::Int32&))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JDJBIHBEGBD OBHGLDGPGFL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JDJBIHBEGBD EIFONLCJOPG)
	{
		return ((::JDJBIHBEGBD(*)(::FlatBuffers::ByteBuffer*, ::JDJBIHBEGBD))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_OBHGLDGPGFL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCJHLFCHFCG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCJHLFCHFCG&))((::PBYTE)hIl2Cpp + JDJBIHBEGBD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
