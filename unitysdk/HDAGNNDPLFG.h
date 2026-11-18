#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EDHBODIIKGH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDAGNNDPLFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HDAGNNDPLFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EA90)
#define HDAGNNDPLFG_EEIDGIIELMM_1_OFFSET UNITYSDK_OFFSET(0x15A88A00)
#define HDAGNNDPLFG_EEIDGIIELMM_OFFSET UNITYSDK_OFFSET(0x15A889A0)
#define HDAGNNDPLFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDAGNNDPLFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDAGNNDPLFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76EAD0)
#define HDAGNNDPLFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EA80)
#define HDAGNNDPLFG___INIT_OFFSET UNITYSDK_OFFSET(0x76EA60)

inline static constexpr unsigned int HDAGNNDPLFG_TypeDefinitionIndex = 14286;

struct alignas(8) HDAGNNDPLFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDAGNNDPLFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EDHBODIIKGH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDHBODIIKGH&))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HDAGNNDPLFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDAGNNDPLFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HDAGNNDPLFG EEIDGIIELMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDAGNNDPLFG EIFONLCJOPG)
	{
		return ((::HDAGNNDPLFG(*)(::FlatBuffers::ByteBuffer*, ::HDAGNNDPLFG))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_EEIDGIIELMM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HDAGNNDPLFG EEIDGIIELMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDAGNNDPLFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_EEIDGIIELMM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EDHBODIIKGH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDHBODIIKGH&, ::System::Int32&))((::PBYTE)hIl2Cpp + HDAGNNDPLFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
