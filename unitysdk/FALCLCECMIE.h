#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLOEIMJEGIH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FALCLCECMIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FALCLCECMIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808150)
#define FALCLCECMIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FALCLCECMIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FALCLCECMIE_LDAGAJLBNDI_1_OFFSET UNITYSDK_OFFSET(0x1ADDE9A0)
#define FALCLCECMIE_LDAGAJLBNDI_OFFSET UNITYSDK_OFFSET(0x1ADDE930)
#define FALCLCECMIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8081A0)
#define FALCLCECMIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x808190)
#define FALCLCECMIE___INIT_OFFSET UNITYSDK_OFFSET(0x808130)

inline static constexpr unsigned int FALCLCECMIE_TypeDefinitionIndex = 11002;

struct alignas(8) FALCLCECMIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCLCECMIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FALCLCECMIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FALCLCECMIE LDAGAJLBNDI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FALCLCECMIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FALCLCECMIE_LDAGAJLBNDI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLOEIMJEGIH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLOEIMJEGIH&))((::PBYTE)hIl2Cpp + FALCLCECMIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FALCLCECMIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FALCLCECMIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FALCLCECMIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCLCECMIE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FALCLCECMIE LDAGAJLBNDI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FALCLCECMIE EIFONLCJOPG)
	{
		return ((::FALCLCECMIE(*)(::FlatBuffers::ByteBuffer*, ::FALCLCECMIE))((::PBYTE)hIl2Cpp + FALCLCECMIE_LDAGAJLBNDI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCLCECMIE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLOEIMJEGIH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLOEIMJEGIH&, ::System::Int32&))((::PBYTE)hIl2Cpp + FALCLCECMIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
