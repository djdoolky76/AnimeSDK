#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BGKOMKHADDG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOMJEJPMKPA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BOMJEJPMKPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB4C0)
#define BOMJEJPMKPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOMJEJPMKPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOMJEJPMKPA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB4B0)
#define BOMJEJPMKPA_OLEBFBGJKKF_1_OFFSET UNITYSDK_OFFSET(0x1A57C940)
#define BOMJEJPMKPA_OLEBFBGJKKF_OFFSET UNITYSDK_OFFSET(0x1A57C6A0)
#define BOMJEJPMKPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB500)
#define BOMJEJPMKPA___INIT_OFFSET UNITYSDK_OFFSET(0x7FB490)

inline static constexpr unsigned int BOMJEJPMKPA_TypeDefinitionIndex = 14246;

struct alignas(8) BOMJEJPMKPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOMJEJPMKPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BOMJEJPMKPA OLEBFBGJKKF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOMJEJPMKPA EIFONLCJOPG)
	{
		return ((::BOMJEJPMKPA(*)(::FlatBuffers::ByteBuffer*, ::BOMJEJPMKPA))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_OLEBFBGJKKF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BGKOMKHADDG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGKOMKHADDG&, ::System::Int32&))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BOMJEJPMKPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOMJEJPMKPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BGKOMKHADDG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGKOMKHADDG&))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BOMJEJPMKPA OLEBFBGJKKF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOMJEJPMKPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOMJEJPMKPA_OLEBFBGJKKF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
