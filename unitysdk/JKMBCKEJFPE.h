#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCDGIMFHCAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKMBCKEJFPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKMBCKEJFPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4420)
#define JKMBCKEJFPE_DIFMCDOANBF_1_OFFSET UNITYSDK_OFFSET(0x1954D590)
#define JKMBCKEJFPE_DIFMCDOANBF_OFFSET UNITYSDK_OFFSET(0x1954D520)
#define JKMBCKEJFPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKMBCKEJFPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKMBCKEJFPE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4410)
#define JKMBCKEJFPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4400)
#define JKMBCKEJFPE___INIT_OFFSET UNITYSDK_OFFSET(0x7E43E0)

inline static constexpr unsigned int JKMBCKEJFPE_TypeDefinitionIndex = 14470;

struct alignas(8) JKMBCKEJFPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKMBCKEJFPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JKMBCKEJFPE DIFMCDOANBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKMBCKEJFPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_DIFMCDOANBF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCDGIMFHCAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCDGIMFHCAK&))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JKMBCKEJFPE DIFMCDOANBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKMBCKEJFPE EIFONLCJOPG)
	{
		return ((::JKMBCKEJFPE(*)(::FlatBuffers::ByteBuffer*, ::JKMBCKEJFPE))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_DIFMCDOANBF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCDGIMFHCAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCDGIMFHCAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JKMBCKEJFPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKMBCKEJFPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMBCKEJFPE_GHKKNCCLPAN_OFFSET))(this);
	}
};
