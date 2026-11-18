#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCOBKDLJEEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNJAADNGOEN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNJAADNGOEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3B80)
#define HNJAADNGOEN_DNKEPOEPDPJ_1_OFFSET UNITYSDK_OFFSET(0x19539860)
#define HNJAADNGOEN_DNKEPOEPDPJ_OFFSET UNITYSDK_OFFSET(0x195397F0)
#define HNJAADNGOEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNJAADNGOEN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNJAADNGOEN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3BC0)
#define HNJAADNGOEN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3BD0)
#define HNJAADNGOEN___INIT_OFFSET UNITYSDK_OFFSET(0x7E3B60)

inline static constexpr unsigned int HNJAADNGOEN_TypeDefinitionIndex = 11295;

struct alignas(8) HNJAADNGOEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJAADNGOEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJAADNGOEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNJAADNGOEN DNKEPOEPDPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNJAADNGOEN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJAADNGOEN_DNKEPOEPDPJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCOBKDLJEEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCOBKDLJEEJ&))((::PBYTE)hIl2Cpp + HNJAADNGOEN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HNJAADNGOEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNJAADNGOEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJAADNGOEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJAADNGOEN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HNJAADNGOEN DNKEPOEPDPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNJAADNGOEN EIFONLCJOPG)
	{
		return ((::HNJAADNGOEN(*)(::FlatBuffers::ByteBuffer*, ::HNJAADNGOEN))((::PBYTE)hIl2Cpp + HNJAADNGOEN_DNKEPOEPDPJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCOBKDLJEEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCOBKDLJEEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + HNJAADNGOEN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJAADNGOEN_PPOMNIFACOL_OFFSET))(this);
	}
};
