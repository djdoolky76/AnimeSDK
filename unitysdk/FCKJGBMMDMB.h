#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFAKLLBKKAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCKJGBMMDMB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCKJGBMMDMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817850)
#define FCKJGBMMDMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCKJGBMMDMB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCKJGBMMDMB_IIJJPKMKKKG_1_OFFSET UNITYSDK_OFFSET(0x1B9C1790)
#define FCKJGBMMDMB_IIJJPKMKKKG_OFFSET UNITYSDK_OFFSET(0x1B9C1720)
#define FCKJGBMMDMB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817830)
#define FCKJGBMMDMB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817840)
#define FCKJGBMMDMB___INIT_OFFSET UNITYSDK_OFFSET(0x817810)

inline static constexpr unsigned int FCKJGBMMDMB_TypeDefinitionIndex = 10959;

struct alignas(8) FCKJGBMMDMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCKJGBMMDMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EFAKLLBKKAN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFAKLLBKKAN&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFAKLLBKKAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFAKLLBKKAN&))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FCKJGBMMDMB IIJJPKMKKKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCKJGBMMDMB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_IIJJPKMKKKG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FCKJGBMMDMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCKJGBMMDMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FCKJGBMMDMB IIJJPKMKKKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCKJGBMMDMB EIFONLCJOPG)
	{
		return ((::FCKJGBMMDMB(*)(::FlatBuffers::ByteBuffer*, ::FCKJGBMMDMB))((::PBYTE)hIl2Cpp + FCKJGBMMDMB_IIJJPKMKKKG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
