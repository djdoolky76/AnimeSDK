#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HGDNNEGLJBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJGKHJPAEBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HJGKHJPAEBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8290)
#define HJGKHJPAEBC_EKEKHPMOAKB_1_OFFSET UNITYSDK_OFFSET(0x17476010)
#define HJGKHJPAEBC_EKEKHPMOAKB_OFFSET UNITYSDK_OFFSET(0x17475FA0)
#define HJGKHJPAEBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJGKHJPAEBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJGKHJPAEBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A82D0)
#define HJGKHJPAEBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A82E0)
#define HJGKHJPAEBC___INIT_OFFSET UNITYSDK_OFFSET(0x7A8270)

inline static constexpr unsigned int HJGKHJPAEBC_TypeDefinitionIndex = 16417;

struct alignas(8) HJGKHJPAEBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJGKHJPAEBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HJGKHJPAEBC EKEKHPMOAKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJGKHJPAEBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_EKEKHPMOAKB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HJGKHJPAEBC EKEKHPMOAKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJGKHJPAEBC EIFONLCJOPG)
	{
		return ((::HJGKHJPAEBC(*)(::FlatBuffers::ByteBuffer*, ::HJGKHJPAEBC))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_EKEKHPMOAKB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HJGKHJPAEBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJGKHJPAEBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HGDNNEGLJBH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HGDNNEGLJBH&, ::System::Int32&))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HGDNNEGLJBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HGDNNEGLJBH&))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGKHJPAEBC_GHKKNCCLPAN_OFFSET))(this);
	}
};
