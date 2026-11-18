#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLHFKNIAAMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPDOKKNEKKI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FPDOKKNEKKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x755EE0)
#define FPDOKKNEKKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FPDOKKNEKKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FPDOKKNEKKI_GJDKPGNBNMN_1_OFFSET UNITYSDK_OFFSET(0x152C6D70)
#define FPDOKKNEKKI_GJDKPGNBNMN_OFFSET UNITYSDK_OFFSET(0x152C6D00)
#define FPDOKKNEKKI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x755F20)
#define FPDOKKNEKKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x755ED0)
#define FPDOKKNEKKI___INIT_OFFSET UNITYSDK_OFFSET(0x755EB0)

inline static constexpr unsigned int FPDOKKNEKKI_TypeDefinitionIndex = 14865;

struct alignas(8) FPDOKKNEKKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPDOKKNEKKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FPDOKKNEKKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPDOKKNEKKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FPDOKKNEKKI GJDKPGNBNMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPDOKKNEKKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_GJDKPGNBNMN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLHFKNIAAMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLHFKNIAAMB&))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FPDOKKNEKKI GJDKPGNBNMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FPDOKKNEKKI EIFONLCJOPG)
	{
		return ((::FPDOKKNEKKI(*)(::FlatBuffers::ByteBuffer*, ::FPDOKKNEKKI))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_GJDKPGNBNMN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CLHFKNIAAMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLHFKNIAAMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDOKKNEKKI_GHKKNCCLPAN_OFFSET))(this);
	}
};
