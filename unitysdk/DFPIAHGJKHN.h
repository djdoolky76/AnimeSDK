#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHJOMHJBOMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFPIAHGJKHN_AFGIBHAMNKL_1_OFFSET UNITYSDK_OFFSET(0x17A985C0)
#define DFPIAHGJKHN_AFGIBHAMNKL_OFFSET UNITYSDK_OFFSET(0x17A98560)
#define DFPIAHGJKHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFPIAHGJKHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2350)
#define DFPIAHGJKHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFPIAHGJKHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFPIAHGJKHN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2390)
#define DFPIAHGJKHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B23A0)
#define DFPIAHGJKHN___INIT_OFFSET UNITYSDK_OFFSET(0x7B2330)

inline static constexpr unsigned int DFPIAHGJKHN_TypeDefinitionIndex = 10852;

struct alignas(8) DFPIAHGJKHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFPIAHGJKHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DFPIAHGJKHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFPIAHGJKHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EHJOMHJBOMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHJOMHJBOMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHJOMHJBOMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHJOMHJBOMB&))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DFPIAHGJKHN AFGIBHAMNKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFPIAHGJKHN EIFONLCJOPG)
	{
		return ((::DFPIAHGJKHN(*)(::FlatBuffers::ByteBuffer*, ::DFPIAHGJKHN))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_AFGIBHAMNKL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DFPIAHGJKHN AFGIBHAMNKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFPIAHGJKHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFPIAHGJKHN_AFGIBHAMNKL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
