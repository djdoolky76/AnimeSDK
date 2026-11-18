#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLKGDBCMOBA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHPPLCJJIJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MHPPLCJJIJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BA40)
#define MHPPLCJJIJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHPPLCJJIJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHPPLCJJIJD_JCBDDAFEDDN_1_OFFSET UNITYSDK_OFFSET(0x1B3178B0)
#define MHPPLCJJIJD_JCBDDAFEDDN_OFFSET UNITYSDK_OFFSET(0x1B3175F0)
#define MHPPLCJJIJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BA90)
#define MHPPLCJJIJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BA80)
#define MHPPLCJJIJD___INIT_OFFSET UNITYSDK_OFFSET(0x80BA20)

inline static constexpr unsigned int MHPPLCJJIJD_TypeDefinitionIndex = 11993;

struct alignas(8) MHPPLCJJIJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHPPLCJJIJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MHPPLCJJIJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHPPLCJJIJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MHPPLCJJIJD JCBDDAFEDDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHPPLCJJIJD EIFONLCJOPG)
	{
		return ((::MHPPLCJJIJD(*)(::FlatBuffers::ByteBuffer*, ::MHPPLCJJIJD))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_JCBDDAFEDDN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLKGDBCMOBA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLKGDBCMOBA&))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GLKGDBCMOBA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLKGDBCMOBA&, ::System::Int32&))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MHPPLCJJIJD JCBDDAFEDDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHPPLCJJIJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_JCBDDAFEDDN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHPPLCJJIJD_GHKKNCCLPAN_OFFSET))(this);
	}
};
