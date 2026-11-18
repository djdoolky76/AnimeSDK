#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHHIBFHOMJN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFDEEDCLKCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GFDEEDCLKCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE520)
#define GFDEEDCLKCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFDEEDCLKCB_GFJHNNEDNFJ_1_OFFSET UNITYSDK_OFFSET(0x1932D020)
#define GFDEEDCLKCB_GFJHNNEDNFJ_OFFSET UNITYSDK_OFFSET(0x1932CF20)
#define GFDEEDCLKCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFDEEDCLKCB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DE500)
#define GFDEEDCLKCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE510)
#define GFDEEDCLKCB___INIT_OFFSET UNITYSDK_OFFSET(0x7DE4E0)

inline static constexpr unsigned int GFDEEDCLKCB_TypeDefinitionIndex = 13478;

struct alignas(8) GFDEEDCLKCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDEEDCLKCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OHHIBFHOMJN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHHIBFHOMJN&, ::System::Int32&))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GFDEEDCLKCB GFJHNNEDNFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFDEEDCLKCB EIFONLCJOPG)
	{
		return ((::GFDEEDCLKCB(*)(::FlatBuffers::ByteBuffer*, ::GFDEEDCLKCB))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_GFJHNNEDNFJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GFDEEDCLKCB GFJHNNEDNFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDEEDCLKCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_GFJHNNEDNFJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GFDEEDCLKCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDEEDCLKCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OHHIBFHOMJN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHHIBFHOMJN&))((::PBYTE)hIl2Cpp + GFDEEDCLKCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
