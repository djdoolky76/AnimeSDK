#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHPMMIGFDML.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POFGBMAECIH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POFGBMAECIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x923DA0)
#define POFGBMAECIH_GCLFJIOCEDH_1_OFFSET UNITYSDK_OFFSET(0x1EC8A9B0)
#define POFGBMAECIH_GCLFJIOCEDH_OFFSET UNITYSDK_OFFSET(0x1EC8A950)
#define POFGBMAECIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POFGBMAECIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POFGBMAECIH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x923DE0)
#define POFGBMAECIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x923DF0)
#define POFGBMAECIH___INIT_OFFSET UNITYSDK_OFFSET(0x923D80)

inline static constexpr unsigned int POFGBMAECIH_TypeDefinitionIndex = 16739;

struct alignas(8) POFGBMAECIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFGBMAECIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POFGBMAECIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::POFGBMAECIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POFGBMAECIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POFGBMAECIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFGBMAECIH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NHPMMIGFDML& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHPMMIGFDML&, ::System::Int32&))((::PBYTE)hIl2Cpp + POFGBMAECIH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::POFGBMAECIH GCLFJIOCEDH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POFGBMAECIH EIFONLCJOPG)
	{
		return ((::POFGBMAECIH(*)(::FlatBuffers::ByteBuffer*, ::POFGBMAECIH))((::PBYTE)hIl2Cpp + POFGBMAECIH_GCLFJIOCEDH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHPMMIGFDML& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHPMMIGFDML&))((::PBYTE)hIl2Cpp + POFGBMAECIH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFGBMAECIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::POFGBMAECIH GCLFJIOCEDH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POFGBMAECIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POFGBMAECIH_GCLFJIOCEDH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
