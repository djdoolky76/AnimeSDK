#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJGBHMONIJC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIPJGJCCCDF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIPJGJCCCDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8C00)
#define JIPJGJCCCDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIPJGJCCCDF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIPJGJCCCDF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8C40)
#define JIPJGJCCCDF_OPIGMOANDLH_1_OFFSET UNITYSDK_OFFSET(0x1A5043A0)
#define JIPJGJCCCDF_OPIGMOANDLH_OFFSET UNITYSDK_OFFSET(0x1A504100)
#define JIPJGJCCCDF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8C50)
#define JIPJGJCCCDF___INIT_OFFSET UNITYSDK_OFFSET(0x7F8BE0)

inline static constexpr unsigned int JIPJGJCCCDF_TypeDefinitionIndex = 10345;

struct alignas(8) JIPJGJCCCDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIPJGJCCCDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JIPJGJCCCDF OPIGMOANDLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIPJGJCCCDF EIFONLCJOPG)
	{
		return ((::JIPJGJCCCDF(*)(::FlatBuffers::ByteBuffer*, ::JIPJGJCCCDF))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_OPIGMOANDLH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JIPJGJCCCDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIPJGJCCCDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJGBHMONIJC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJGBHMONIJC&, ::System::Int32&))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJGBHMONIJC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJGBHMONIJC&))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JIPJGJCCCDF OPIGMOANDLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIPJGJCCCDF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIPJGJCCCDF_OPIGMOANDLH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
