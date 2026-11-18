#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HIFKMGDIDFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELDOKGFLJIN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ELDOKGFLJIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76DBD0)
#define ELDOKGFLJIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELDOKGFLJIN_GGLFGBILHPD_1_OFFSET UNITYSDK_OFFSET(0x15A6C110)
#define ELDOKGFLJIN_GGLFGBILHPD_OFFSET UNITYSDK_OFFSET(0x15A6C0A0)
#define ELDOKGFLJIN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ELDOKGFLJIN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76DBC0)
#define ELDOKGFLJIN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76DC10)
#define ELDOKGFLJIN___INIT_OFFSET UNITYSDK_OFFSET(0x76DBA0)

inline static constexpr unsigned int ELDOKGFLJIN_TypeDefinitionIndex = 13640;

struct alignas(8) ELDOKGFLJIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELDOKGFLJIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HIFKMGDIDFB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HIFKMGDIDFB&, ::System::Int32&))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ELDOKGFLJIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELDOKGFLJIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HIFKMGDIDFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HIFKMGDIDFB&))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ELDOKGFLJIN GGLFGBILHPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELDOKGFLJIN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_GGLFGBILHPD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ELDOKGFLJIN GGLFGBILHPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ELDOKGFLJIN EIFONLCJOPG)
	{
		return ((::ELDOKGFLJIN(*)(::FlatBuffers::ByteBuffer*, ::ELDOKGFLJIN))((::PBYTE)hIl2Cpp + ELDOKGFLJIN_GGLFGBILHPD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
