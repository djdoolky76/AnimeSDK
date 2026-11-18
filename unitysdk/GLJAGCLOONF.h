#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ACEMGKEKAMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLJAGCLOONF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLJAGCLOONF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779740)
#define GLJAGCLOONF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLJAGCLOONF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLJAGCLOONF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779780)
#define GLJAGCLOONF_PAHOHFOGJIL_1_OFFSET UNITYSDK_OFFSET(0x160E98C0)
#define GLJAGCLOONF_PAHOHFOGJIL_OFFSET UNITYSDK_OFFSET(0x160E9850)
#define GLJAGCLOONF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779790)
#define GLJAGCLOONF___INIT_OFFSET UNITYSDK_OFFSET(0x779720)

inline static constexpr unsigned int GLJAGCLOONF_TypeDefinitionIndex = 10993;

struct alignas(8) GLJAGCLOONF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJAGCLOONF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLJAGCLOONF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GLJAGCLOONF PAHOHFOGJIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLJAGCLOONF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLJAGCLOONF_PAHOHFOGJIL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GLJAGCLOONF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLJAGCLOONF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLJAGCLOONF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GLJAGCLOONF PAHOHFOGJIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLJAGCLOONF EIFONLCJOPG)
	{
		return ((::GLJAGCLOONF(*)(::FlatBuffers::ByteBuffer*, ::GLJAGCLOONF))((::PBYTE)hIl2Cpp + GLJAGCLOONF_PAHOHFOGJIL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ACEMGKEKAMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ACEMGKEKAMK&))((::PBYTE)hIl2Cpp + GLJAGCLOONF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJAGCLOONF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ACEMGKEKAMK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ACEMGKEKAMK&, ::System::Int32&))((::PBYTE)hIl2Cpp + GLJAGCLOONF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJAGCLOONF_PPOMNIFACOL_OFFSET))(this);
	}
};
