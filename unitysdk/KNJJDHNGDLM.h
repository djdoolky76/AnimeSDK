#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JIMENFFIOAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNJJDHNGDLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KNJJDHNGDLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819810)
#define KNJJDHNGDLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNJJDHNGDLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KNJJDHNGDLM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8197F0)
#define KNJJDHNGDLM_NKGCNONLAAB_1_OFFSET UNITYSDK_OFFSET(0x1BA7D310)
#define KNJJDHNGDLM_NKGCNONLAAB_OFFSET UNITYSDK_OFFSET(0x1BA7D010)
#define KNJJDHNGDLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819800)
#define KNJJDHNGDLM___INIT_OFFSET UNITYSDK_OFFSET(0x8197D0)

inline static constexpr unsigned int KNJJDHNGDLM_TypeDefinitionIndex = 15856;

struct alignas(8) KNJJDHNGDLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNJJDHNGDLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KNJJDHNGDLM NKGCNONLAAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KNJJDHNGDLM EIFONLCJOPG)
	{
		return ((::KNJJDHNGDLM(*)(::FlatBuffers::ByteBuffer*, ::KNJJDHNGDLM))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_NKGCNONLAAB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JIMENFFIOAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JIMENFFIOAK&))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JIMENFFIOAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JIMENFFIOAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KNJJDHNGDLM NKGCNONLAAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNJJDHNGDLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_NKGCNONLAAB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KNJJDHNGDLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNJJDHNGDLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNJJDHNGDLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
