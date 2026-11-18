#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLMKMPMAGCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFPJIMDJFKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MFPJIMDJFKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81CD60)
#define MFPJIMDJFKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFPJIMDJFKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFPJIMDJFKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81CDB0)
#define MFPJIMDJFKJ_MDMHFAPINDL_1_OFFSET UNITYSDK_OFFSET(0x1BB17E90)
#define MFPJIMDJFKJ_MDMHFAPINDL_OFFSET UNITYSDK_OFFSET(0x1BB17E20)
#define MFPJIMDJFKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81CDA0)
#define MFPJIMDJFKJ___INIT_OFFSET UNITYSDK_OFFSET(0x81CD40)

inline static constexpr unsigned int MFPJIMDJFKJ_TypeDefinitionIndex = 9991;

struct alignas(8) MFPJIMDJFKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MFPJIMDJFKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFPJIMDJFKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MFPJIMDJFKJ MDMHFAPINDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFPJIMDJFKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_MDMHFAPINDL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GLMKMPMAGCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLMKMPMAGCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MFPJIMDJFKJ MDMHFAPINDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFPJIMDJFKJ EIFONLCJOPG)
	{
		return ((::MFPJIMDJFKJ(*)(::FlatBuffers::ByteBuffer*, ::MFPJIMDJFKJ))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_MDMHFAPINDL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLMKMPMAGCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLMKMPMAGCB&))((::PBYTE)hIl2Cpp + MFPJIMDJFKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
