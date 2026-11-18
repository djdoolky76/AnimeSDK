#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEAPBNOFGJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNAPNMNIGIH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNAPNMNIGIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9EF0)
#define MNAPNMNIGIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNAPNMNIGIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNAPNMNIGIH_LECEIHEIFML_1_OFFSET UNITYSDK_OFFSET(0x1910ED70)
#define MNAPNMNIGIH_LECEIHEIFML_OFFSET UNITYSDK_OFFSET(0x1910ED00)
#define MNAPNMNIGIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9F30)
#define MNAPNMNIGIH___INIT_OFFSET UNITYSDK_OFFSET(0x7D9ED0)

inline static constexpr unsigned int MNAPNMNIGIH_TypeDefinitionIndex = 14987;

struct alignas(8) MNAPNMNIGIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNAPNMNIGIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MNAPNMNIGIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNAPNMNIGIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEAPBNOFGJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEAPBNOFGJN&))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MNAPNMNIGIH LECEIHEIFML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNAPNMNIGIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_LECEIHEIFML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MNAPNMNIGIH LECEIHEIFML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNAPNMNIGIH EIFONLCJOPG)
	{
		return ((::MNAPNMNIGIH(*)(::FlatBuffers::ByteBuffer*, ::MNAPNMNIGIH))((::PBYTE)hIl2Cpp + MNAPNMNIGIH_LECEIHEIFML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
