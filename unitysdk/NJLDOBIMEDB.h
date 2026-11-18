#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MFHDNNJAELF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJLDOBIMEDB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJLDOBIMEDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFD10)
#define NJLDOBIMEDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJLDOBIMEDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJLDOBIMEDB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EFD00)
#define NJLDOBIMEDB_MFGMPCEJABD_1_OFFSET UNITYSDK_OFFSET(0x19DC58C0)
#define NJLDOBIMEDB_MFGMPCEJABD_OFFSET UNITYSDK_OFFSET(0x19DC5850)
#define NJLDOBIMEDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFD50)
#define NJLDOBIMEDB___INIT_OFFSET UNITYSDK_OFFSET(0x7EFCE0)

inline static constexpr unsigned int NJLDOBIMEDB_TypeDefinitionIndex = 11604;

struct alignas(8) NJLDOBIMEDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLDOBIMEDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MFHDNNJAELF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFHDNNJAELF&))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MFHDNNJAELF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFHDNNJAELF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NJLDOBIMEDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLDOBIMEDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NJLDOBIMEDB MFGMPCEJABD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLDOBIMEDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_MFGMPCEJABD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NJLDOBIMEDB MFGMPCEJABD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJLDOBIMEDB EIFONLCJOPG)
	{
		return ((::NJLDOBIMEDB(*)(::FlatBuffers::ByteBuffer*, ::NJLDOBIMEDB))((::PBYTE)hIl2Cpp + NJLDOBIMEDB_MFGMPCEJABD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
