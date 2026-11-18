#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GDKIPHOMOGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MECLEJKKKKA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MECLEJKKKKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819F50)
#define MECLEJKKKKA_EAIADMMJNKO_1_OFFSET UNITYSDK_OFFSET(0x1BA91720)
#define MECLEJKKKKA_EAIADMMJNKO_OFFSET UNITYSDK_OFFSET(0x1BA916B0)
#define MECLEJKKKKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MECLEJKKKKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MECLEJKKKKA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819F40)
#define MECLEJKKKKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819F90)
#define MECLEJKKKKA___INIT_OFFSET UNITYSDK_OFFSET(0x819F20)

inline static constexpr unsigned int MECLEJKKKKA_TypeDefinitionIndex = 12900;

struct alignas(8) MECLEJKKKKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLEJKKKKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MECLEJKKKKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MECLEJKKKKA EAIADMMJNKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MECLEJKKKKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MECLEJKKKKA_EAIADMMJNKO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GDKIPHOMOGD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GDKIPHOMOGD&, ::System::Int32&))((::PBYTE)hIl2Cpp + MECLEJKKKKA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MECLEJKKKKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MECLEJKKKKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MECLEJKKKKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GDKIPHOMOGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GDKIPHOMOGD&))((::PBYTE)hIl2Cpp + MECLEJKKKKA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MECLEJKKKKA EAIADMMJNKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MECLEJKKKKA EIFONLCJOPG)
	{
		return ((::MECLEJKKKKA(*)(::FlatBuffers::ByteBuffer*, ::MECLEJKKKKA))((::PBYTE)hIl2Cpp + MECLEJKKKKA_EAIADMMJNKO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLEJKKKKA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECLEJKKKKA_PPOMNIFACOL_OFFSET))(this);
	}
};
