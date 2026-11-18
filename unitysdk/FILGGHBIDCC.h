#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBIKMPILCKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FILGGHBIDCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FILGGHBIDCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3610)
#define FILGGHBIDCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FILGGHBIDCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FILGGHBIDCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3600)
#define FILGGHBIDCC_PMDMCKOBAFP_1_OFFSET UNITYSDK_OFFSET(0x1952DFE0)
#define FILGGHBIDCC_PMDMCKOBAFP_OFFSET UNITYSDK_OFFSET(0x1952DD40)
#define FILGGHBIDCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E35F0)
#define FILGGHBIDCC___INIT_OFFSET UNITYSDK_OFFSET(0x7E35D0)

inline static constexpr unsigned int FILGGHBIDCC_TypeDefinitionIndex = 10232;

struct alignas(8) FILGGHBIDCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGGHBIDCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FILGGHBIDCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGGHBIDCC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGGHBIDCC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FILGGHBIDCC PMDMCKOBAFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FILGGHBIDCC EIFONLCJOPG)
	{
		return ((::FILGGHBIDCC(*)(::FlatBuffers::ByteBuffer*, ::FILGGHBIDCC))((::PBYTE)hIl2Cpp + FILGGHBIDCC_PMDMCKOBAFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBIKMPILCKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBIKMPILCKD&))((::PBYTE)hIl2Cpp + FILGGHBIDCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GBIKMPILCKD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBIKMPILCKD&, ::System::Int32&))((::PBYTE)hIl2Cpp + FILGGHBIDCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FILGGHBIDCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FILGGHBIDCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FILGGHBIDCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FILGGHBIDCC PMDMCKOBAFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FILGGHBIDCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FILGGHBIDCC_PMDMCKOBAFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
