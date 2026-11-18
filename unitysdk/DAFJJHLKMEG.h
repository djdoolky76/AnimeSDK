#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POAALPANIPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAFJJHLKMEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DAFJJHLKMEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB6B0)
#define DAFJJHLKMEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAFJJHLKMEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DAFJJHLKMEG_KGCBCEKEPAK_1_OFFSET UNITYSDK_OFFSET(0x1A58B6C0)
#define DAFJJHLKMEG_KGCBCEKEPAK_OFFSET UNITYSDK_OFFSET(0x1A58B620)
#define DAFJJHLKMEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB6F0)
#define DAFJJHLKMEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB700)
#define DAFJJHLKMEG___INIT_OFFSET UNITYSDK_OFFSET(0x7FB690)

inline static constexpr unsigned int DAFJJHLKMEG_TypeDefinitionIndex = 17190;

struct alignas(8) DAFJJHLKMEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFJJHLKMEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DAFJJHLKMEG KGCBCEKEPAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DAFJJHLKMEG EIFONLCJOPG)
	{
		return ((::DAFJJHLKMEG(*)(::FlatBuffers::ByteBuffer*, ::DAFJJHLKMEG))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_KGCBCEKEPAK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DAFJJHLKMEG KGCBCEKEPAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAFJJHLKMEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_KGCBCEKEPAK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DAFJJHLKMEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAFJJHLKMEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POAALPANIPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POAALPANIPE&))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::POAALPANIPE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POAALPANIPE&, ::System::Int32&))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFJJHLKMEG_PPOMNIFACOL_OFFSET))(this);
	}
};
