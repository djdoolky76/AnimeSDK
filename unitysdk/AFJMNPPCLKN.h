#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BDDELDIPKMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFJMNPPCLKN_ADOPLHEMPOK_1_OFFSET UNITYSDK_OFFSET(0x1ADA47C0)
#define AFJMNPPCLKN_ADOPLHEMPOK_OFFSET UNITYSDK_OFFSET(0x1ADA4750)
#define AFJMNPPCLKN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AFJMNPPCLKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806990)
#define AFJMNPPCLKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFJMNPPCLKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AFJMNPPCLKN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806970)
#define AFJMNPPCLKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806980)
#define AFJMNPPCLKN___INIT_OFFSET UNITYSDK_OFFSET(0x806950)

inline static constexpr unsigned int AFJMNPPCLKN_TypeDefinitionIndex = 16700;

struct alignas(8) AFJMNPPCLKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFJMNPPCLKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AFJMNPPCLKN ADOPLHEMPOK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFJMNPPCLKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_ADOPLHEMPOK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BDDELDIPKMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BDDELDIPKMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BDDELDIPKMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BDDELDIPKMN&))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AFJMNPPCLKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFJMNPPCLKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AFJMNPPCLKN ADOPLHEMPOK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AFJMNPPCLKN EIFONLCJOPG)
	{
		return ((::AFJMNPPCLKN(*)(::FlatBuffers::ByteBuffer*, ::AFJMNPPCLKN))((::PBYTE)hIl2Cpp + AFJMNPPCLKN_ADOPLHEMPOK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
