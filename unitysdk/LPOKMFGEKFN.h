#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BNAHDMPGENO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPOKMFGEKFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LPOKMFGEKFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819DE0)
#define LPOKMFGEKFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPOKMFGEKFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LPOKMFGEKFN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819E20)
#define LPOKMFGEKFN_NKBDOKLIBEK_1_OFFSET UNITYSDK_OFFSET(0x1BA8F400)
#define LPOKMFGEKFN_NKBDOKLIBEK_OFFSET UNITYSDK_OFFSET(0x1BA8F390)
#define LPOKMFGEKFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819E30)
#define LPOKMFGEKFN___INIT_OFFSET UNITYSDK_OFFSET(0x819DC0)

inline static constexpr unsigned int LPOKMFGEKFN_TypeDefinitionIndex = 15416;

struct alignas(8) LPOKMFGEKFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPOKMFGEKFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LPOKMFGEKFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPOKMFGEKFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BNAHDMPGENO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNAHDMPGENO&, ::System::Int32&))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BNAHDMPGENO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNAHDMPGENO&))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LPOKMFGEKFN NKBDOKLIBEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPOKMFGEKFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_NKBDOKLIBEK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LPOKMFGEKFN NKBDOKLIBEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LPOKMFGEKFN EIFONLCJOPG)
	{
		return ((::LPOKMFGEKFN(*)(::FlatBuffers::ByteBuffer*, ::LPOKMFGEKFN))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_NKBDOKLIBEK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOKMFGEKFN_GHKKNCCLPAN_OFFSET))(this);
	}
};
