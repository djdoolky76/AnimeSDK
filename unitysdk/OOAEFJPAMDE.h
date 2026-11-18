#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DAPFCKADGGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOAEFJPAMDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OOAEFJPAMDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E570)
#define OOAEFJPAMDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOAEFJPAMDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OOAEFJPAMDE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E560)
#define OOAEFJPAMDE_MFEDDFNPNDE_1_OFFSET UNITYSDK_OFFSET(0x1CD051B0)
#define OOAEFJPAMDE_MFEDDFNPNDE_OFFSET UNITYSDK_OFFSET(0x1CD04EB0)
#define OOAEFJPAMDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E5B0)
#define OOAEFJPAMDE___INIT_OFFSET UNITYSDK_OFFSET(0x85E540)

inline static constexpr unsigned int OOAEFJPAMDE_TypeDefinitionIndex = 10227;

struct alignas(8) OOAEFJPAMDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOAEFJPAMDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OOAEFJPAMDE MFEDDFNPNDE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OOAEFJPAMDE EIFONLCJOPG)
	{
		return ((::OOAEFJPAMDE(*)(::FlatBuffers::ByteBuffer*, ::OOAEFJPAMDE))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_MFEDDFNPNDE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DAPFCKADGGO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAPFCKADGGO&, ::System::Int32&))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::OOAEFJPAMDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOAEFJPAMDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DAPFCKADGGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DAPFCKADGGO&))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OOAEFJPAMDE MFEDDFNPNDE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOAEFJPAMDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOAEFJPAMDE_MFEDDFNPNDE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
