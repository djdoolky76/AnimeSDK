#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNIJCAMKCAH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOIMDDHMAGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AOIMDDHMAGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763FF0)
#define AOIMDDHMAGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOIMDDHMAGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AOIMDDHMAGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x763FD0)
#define AOIMDDHMAGP_MMIHEBCLHOB_1_OFFSET UNITYSDK_OFFSET(0x15777360)
#define AOIMDDHMAGP_MMIHEBCLHOB_OFFSET UNITYSDK_OFFSET(0x157772F0)
#define AOIMDDHMAGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x763FE0)
#define AOIMDDHMAGP___INIT_OFFSET UNITYSDK_OFFSET(0x763FB0)

inline static constexpr unsigned int AOIMDDHMAGP_TypeDefinitionIndex = 11574;

struct alignas(8) AOIMDDHMAGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOIMDDHMAGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNIJCAMKCAH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNIJCAMKCAH&, ::System::Int32&))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNIJCAMKCAH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNIJCAMKCAH&))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AOIMDDHMAGP MMIHEBCLHOB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOIMDDHMAGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_MMIHEBCLHOB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::AOIMDDHMAGP MMIHEBCLHOB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AOIMDDHMAGP EIFONLCJOPG)
	{
		return ((::AOIMDDHMAGP(*)(::FlatBuffers::ByteBuffer*, ::AOIMDDHMAGP))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_MMIHEBCLHOB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AOIMDDHMAGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOIMDDHMAGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIMDDHMAGP_GHKKNCCLPAN_OFFSET))(this);
	}
};
