#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NBGGMDGIIHP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBFKMNKNBFD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBFKMNKNBFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819930)
#define LBFKMNKNBFD_DNCBCMACLMM_1_OFFSET UNITYSDK_OFFSET(0x1BA81A20)
#define LBFKMNKNBFD_DNCBCMACLMM_OFFSET UNITYSDK_OFFSET(0x1BA819B0)
#define LBFKMNKNBFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBFKMNKNBFD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBFKMNKNBFD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819970)
#define LBFKMNKNBFD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819980)
#define LBFKMNKNBFD___INIT_OFFSET UNITYSDK_OFFSET(0x819910)

inline static constexpr unsigned int LBFKMNKNBFD_TypeDefinitionIndex = 10299;

struct alignas(8) LBFKMNKNBFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBFKMNKNBFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LBFKMNKNBFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBFKMNKNBFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NBGGMDGIIHP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBGGMDGIIHP&, ::System::Int32&))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LBFKMNKNBFD DNCBCMACLMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBFKMNKNBFD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_DNCBCMACLMM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LBFKMNKNBFD DNCBCMACLMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBFKMNKNBFD EIFONLCJOPG)
	{
		return ((::LBFKMNKNBFD(*)(::FlatBuffers::ByteBuffer*, ::LBFKMNKNBFD))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_DNCBCMACLMM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NBGGMDGIIHP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBGGMDGIIHP&))((::PBYTE)hIl2Cpp + LBFKMNKNBFD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
