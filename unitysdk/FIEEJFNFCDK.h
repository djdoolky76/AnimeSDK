#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LFKOHPGDEAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIEEJFNFCDK_AMIKOCHJKGC_1_OFFSET UNITYSDK_OFFSET(0x1A4C4F00)
#define FIEEJFNFCDK_AMIKOCHJKGC_OFFSET UNITYSDK_OFFSET(0x1A4C4E60)
#define FIEEJFNFCDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FIEEJFNFCDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7AE0)
#define FIEEJFNFCDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIEEJFNFCDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FIEEJFNFCDK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7AD0)
#define FIEEJFNFCDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7AC0)
#define FIEEJFNFCDK___INIT_OFFSET UNITYSDK_OFFSET(0x7F7AA0)

inline static constexpr unsigned int FIEEJFNFCDK_TypeDefinitionIndex = 16461;

struct alignas(8) FIEEJFNFCDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIEEJFNFCDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LFKOHPGDEAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFKOHPGDEAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FIEEJFNFCDK AMIKOCHJKGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FIEEJFNFCDK EIFONLCJOPG)
	{
		return ((::FIEEJFNFCDK(*)(::FlatBuffers::ByteBuffer*, ::FIEEJFNFCDK))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_AMIKOCHJKGC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FIEEJFNFCDK AMIKOCHJKGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIEEJFNFCDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_AMIKOCHJKGC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LFKOHPGDEAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFKOHPGDEAP&))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FIEEJFNFCDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIEEJFNFCDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEJFNFCDK_GHKKNCCLPAN_OFFSET))(this);
	}
};
