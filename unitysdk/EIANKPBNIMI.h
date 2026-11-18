#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CIFEGFFDEHM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIANKPBNIMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIANKPBNIMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA7E0)
#define EIANKPBNIMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIANKPBNIMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIANKPBNIMI_LDFEFFNMANE_1_OFFSET UNITYSDK_OFFSET(0x1A562B50)
#define EIANKPBNIMI_LDFEFFNMANE_OFFSET UNITYSDK_OFFSET(0x1A562AE0)
#define EIANKPBNIMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA7D0)
#define EIANKPBNIMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA7C0)
#define EIANKPBNIMI___INIT_OFFSET UNITYSDK_OFFSET(0x7FA7A0)

inline static constexpr unsigned int EIANKPBNIMI_TypeDefinitionIndex = 10053;

struct alignas(8) EIANKPBNIMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANKPBNIMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIANKPBNIMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EIANKPBNIMI LDFEFFNMANE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIANKPBNIMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIANKPBNIMI_LDFEFFNMANE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANKPBNIMI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CIFEGFFDEHM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIFEGFFDEHM&, ::System::Int32&))((::PBYTE)hIl2Cpp + EIANKPBNIMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANKPBNIMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EIANKPBNIMI LDFEFFNMANE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIANKPBNIMI EIFONLCJOPG)
	{
		return ((::EIANKPBNIMI(*)(::FlatBuffers::ByteBuffer*, ::EIANKPBNIMI))((::PBYTE)hIl2Cpp + EIANKPBNIMI_LDFEFFNMANE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CIFEGFFDEHM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIFEGFFDEHM&))((::PBYTE)hIl2Cpp + EIANKPBNIMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EIANKPBNIMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIANKPBNIMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIANKPBNIMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
