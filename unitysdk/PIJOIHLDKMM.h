#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHELBGHCCBI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIJOIHLDKMM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PIJOIHLDKMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FE40)
#define PIJOIHLDKMM_EDCMELKPNNB_1_OFFSET UNITYSDK_OFFSET(0x1C0AFC00)
#define PIJOIHLDKMM_EDCMELKPNNB_OFFSET UNITYSDK_OFFSET(0x1C0AFB90)
#define PIJOIHLDKMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIJOIHLDKMM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PIJOIHLDKMM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FE80)
#define PIJOIHLDKMM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FE90)
#define PIJOIHLDKMM___INIT_OFFSET UNITYSDK_OFFSET(0x81FE20)

inline static constexpr unsigned int PIJOIHLDKMM_TypeDefinitionIndex = 10393;

struct alignas(8) PIJOIHLDKMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIJOIHLDKMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PIJOIHLDKMM EDCMELKPNNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIJOIHLDKMM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_EDCMELKPNNB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PIJOIHLDKMM EDCMELKPNNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PIJOIHLDKMM EIFONLCJOPG)
	{
		return ((::PIJOIHLDKMM(*)(::FlatBuffers::ByteBuffer*, ::PIJOIHLDKMM))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_EDCMELKPNNB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PIJOIHLDKMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIJOIHLDKMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHELBGHCCBI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHELBGHCCBI&))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EHELBGHCCBI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHELBGHCCBI&, ::System::Int32&))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJOIHLDKMM_PPOMNIFACOL_OFFSET))(this);
	}
};
