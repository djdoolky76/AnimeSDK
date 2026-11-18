#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIBHNCMCLJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIFHHEKGLMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIFHHEKGLMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC050)
#define AIFHHEKGLMJ_DPNLDFGDFHF_1_OFFSET UNITYSDK_OFFSET(0x17748780)
#define AIFHHEKGLMJ_DPNLDFGDFHF_OFFSET UNITYSDK_OFFSET(0x17748710)
#define AIFHHEKGLMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIFHHEKGLMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIFHHEKGLMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AC090)
#define AIFHHEKGLMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC040)
#define AIFHHEKGLMJ___INIT_OFFSET UNITYSDK_OFFSET(0x7AC020)

inline static constexpr unsigned int AIFHHEKGLMJ_TypeDefinitionIndex = 17715;

struct alignas(8) AIFHHEKGLMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AIFHHEKGLMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIFHHEKGLMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AIFHHEKGLMJ DPNLDFGDFHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIFHHEKGLMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_DPNLDFGDFHF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NIBHNCMCLJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIBHNCMCLJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NIBHNCMCLJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIBHNCMCLJM&))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AIFHHEKGLMJ DPNLDFGDFHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIFHHEKGLMJ EIFONLCJOPG)
	{
		return ((::AIFHHEKGLMJ(*)(::FlatBuffers::ByteBuffer*, ::AIFHHEKGLMJ))((::PBYTE)hIl2Cpp + AIFHHEKGLMJ_DPNLDFGDFHF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
