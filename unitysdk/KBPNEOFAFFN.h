#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NEOHCLCHMKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBPNEOFAFFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KBPNEOFAFFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E47B0)
#define KBPNEOFAFFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBPNEOFAFFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KBPNEOFAFFN_IFFLFBAHBHG_1_OFFSET UNITYSDK_OFFSET(0x19555B30)
#define KBPNEOFAFFN_IFFLFBAHBHG_OFFSET UNITYSDK_OFFSET(0x19555AC0)
#define KBPNEOFAFFN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E47A0)
#define KBPNEOFAFFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E47F0)
#define KBPNEOFAFFN___INIT_OFFSET UNITYSDK_OFFSET(0x7E4780)

inline static constexpr unsigned int KBPNEOFAFFN_TypeDefinitionIndex = 9964;

struct alignas(8) KBPNEOFAFFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBPNEOFAFFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBPNEOFAFFN IFFLFBAHBHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBPNEOFAFFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_IFFLFBAHBHG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NEOHCLCHMKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEOHCLCHMKM&))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NEOHCLCHMKM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEOHCLCHMKM&, ::System::Int32&))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KBPNEOFAFFN IFFLFBAHBHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KBPNEOFAFFN EIFONLCJOPG)
	{
		return ((::KBPNEOFAFFN(*)(::FlatBuffers::ByteBuffer*, ::KBPNEOFAFFN))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_IFFLFBAHBHG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KBPNEOFAFFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBPNEOFAFFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPNEOFAFFN_PPOMNIFACOL_OFFSET))(this);
	}
};
