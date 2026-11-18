#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCAOGAAOHLB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILLHCCMECIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ILLHCCMECIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5200)
#define ILLHCCMECIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILLHCCMECIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILLHCCMECIM_HKNMJAPFNFA_1_OFFSET UNITYSDK_OFFSET(0x18BC08C0)
#define ILLHCCMECIM_HKNMJAPFNFA_OFFSET UNITYSDK_OFFSET(0x18BC0820)
#define ILLHCCMECIM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D5240)
#define ILLHCCMECIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D51F0)
#define ILLHCCMECIM___INIT_OFFSET UNITYSDK_OFFSET(0x7D51D0)

inline static constexpr unsigned int ILLHCCMECIM_TypeDefinitionIndex = 14974;

struct alignas(8) ILLHCCMECIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHCCMECIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILLHCCMECIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHCCMECIM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ILLHCCMECIM HKNMJAPFNFA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILLHCCMECIM EIFONLCJOPG)
	{
		return ((::ILLHCCMECIM(*)(::FlatBuffers::ByteBuffer*, ::ILLHCCMECIM))((::PBYTE)hIl2Cpp + ILLHCCMECIM_HKNMJAPFNFA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ILLHCCMECIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILLHCCMECIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILLHCCMECIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHCCMECIM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ILLHCCMECIM HKNMJAPFNFA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILLHCCMECIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILLHCCMECIM_HKNMJAPFNFA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCAOGAAOHLB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCAOGAAOHLB&, ::System::Int32&))((::PBYTE)hIl2Cpp + ILLHCCMECIM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCAOGAAOHLB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCAOGAAOHLB&))((::PBYTE)hIl2Cpp + ILLHCCMECIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
