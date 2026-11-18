#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMFFHPKLEEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFHPFBIIKAK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFHPFBIIKAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B22D0)
#define DFHPFBIIKAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFHPFBIIKAK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFHPFBIIKAK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B22C0)
#define DFHPFBIIKAK_OPOLBKLGHBE_1_OFFSET UNITYSDK_OFFSET(0x17A97700)
#define DFHPFBIIKAK_OPOLBKLGHBE_OFFSET UNITYSDK_OFFSET(0x17A97660)
#define DFHPFBIIKAK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B22B0)
#define DFHPFBIIKAK___INIT_OFFSET UNITYSDK_OFFSET(0x7B2290)

inline static constexpr unsigned int DFHPFBIIKAK_TypeDefinitionIndex = 15402;

struct alignas(8) DFHPFBIIKAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFHPFBIIKAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMFFHPKLEEN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMFFHPKLEEN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DFHPFBIIKAK OPOLBKLGHBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFHPFBIIKAK EIFONLCJOPG)
	{
		return ((::DFHPFBIIKAK(*)(::FlatBuffers::ByteBuffer*, ::DFHPFBIIKAK))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_OPOLBKLGHBE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMFFHPKLEEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMFFHPKLEEN&))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DFHPFBIIKAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFHPFBIIKAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFHPFBIIKAK OPOLBKLGHBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFHPFBIIKAK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFHPFBIIKAK_OPOLBKLGHBE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
