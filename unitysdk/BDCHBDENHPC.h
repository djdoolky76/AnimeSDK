#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JAINCAOGDEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDCHBDENHPC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BDCHBDENHPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8164E0)
#define BDCHBDENHPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDCHBDENHPC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDCHBDENHPC_KJEMJPCNLOD_1_OFFSET UNITYSDK_OFFSET(0x1B98E350)
#define BDCHBDENHPC_KJEMJPCNLOD_OFFSET UNITYSDK_OFFSET(0x1B98E2E0)
#define BDCHBDENHPC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8164C0)
#define BDCHBDENHPC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8164D0)
#define BDCHBDENHPC___INIT_OFFSET UNITYSDK_OFFSET(0x8164A0)

inline static constexpr unsigned int BDCHBDENHPC_TypeDefinitionIndex = 12196;

struct alignas(8) BDCHBDENHPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHBDENHPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDCHBDENHPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BDCHBDENHPC KJEMJPCNLOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDCHBDENHPC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDCHBDENHPC_KJEMJPCNLOD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JAINCAOGDEL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JAINCAOGDEL&, ::System::Int32&))((::PBYTE)hIl2Cpp + BDCHBDENHPC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHBDENHPC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BDCHBDENHPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDCHBDENHPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDCHBDENHPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCHBDENHPC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JAINCAOGDEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JAINCAOGDEL&))((::PBYTE)hIl2Cpp + BDCHBDENHPC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BDCHBDENHPC KJEMJPCNLOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDCHBDENHPC EIFONLCJOPG)
	{
		return ((::BDCHBDENHPC(*)(::FlatBuffers::ByteBuffer*, ::BDCHBDENHPC))((::PBYTE)hIl2Cpp + BDCHBDENHPC_KJEMJPCNLOD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
