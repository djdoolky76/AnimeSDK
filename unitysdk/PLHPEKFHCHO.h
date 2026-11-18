#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEOEPFHLLKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLHPEKFHCHO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLHPEKFHCHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937590)
#define PLHPEKFHCHO_BMEAILNAOOP_1_OFFSET UNITYSDK_OFFSET(0x1EDC2250)
#define PLHPEKFHCHO_BMEAILNAOOP_OFFSET UNITYSDK_OFFSET(0x1EDC21E0)
#define PLHPEKFHCHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLHPEKFHCHO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLHPEKFHCHO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9375D0)
#define PLHPEKFHCHO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9375E0)
#define PLHPEKFHCHO___INIT_OFFSET UNITYSDK_OFFSET(0x937570)

inline static constexpr unsigned int PLHPEKFHCHO_TypeDefinitionIndex = 11798;

struct alignas(8) PLHPEKFHCHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHPEKFHCHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PLHPEKFHCHO BMEAILNAOOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLHPEKFHCHO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_BMEAILNAOOP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PLHPEKFHCHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLHPEKFHCHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AEOEPFHLLKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEOEPFHLLKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PLHPEKFHCHO BMEAILNAOOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLHPEKFHCHO EIFONLCJOPG)
	{
		return ((::PLHPEKFHCHO(*)(::FlatBuffers::ByteBuffer*, ::PLHPEKFHCHO))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_BMEAILNAOOP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AEOEPFHLLKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEOEPFHLLKB&))((::PBYTE)hIl2Cpp + PLHPEKFHCHO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
