#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PFMOODAPJDF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAIGJIGACNM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AAIGJIGACNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F45B0)
#define AAIGJIGACNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAIGJIGACNM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AAIGJIGACNM_HMJELJKFBFM_1_OFFSET UNITYSDK_OFFSET(0x1A158DA0)
#define AAIGJIGACNM_HMJELJKFBFM_OFFSET UNITYSDK_OFFSET(0x1A158C60)
#define AAIGJIGACNM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F45F0)
#define AAIGJIGACNM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4600)
#define AAIGJIGACNM___INIT_OFFSET UNITYSDK_OFFSET(0x7F4590)

inline static constexpr unsigned int AAIGJIGACNM_TypeDefinitionIndex = 17606;

struct alignas(8) AAIGJIGACNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGJIGACNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAIGJIGACNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AAIGJIGACNM HMJELJKFBFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AAIGJIGACNM EIFONLCJOPG)
	{
		return ((::AAIGJIGACNM(*)(::FlatBuffers::ByteBuffer*, ::AAIGJIGACNM))((::PBYTE)hIl2Cpp + AAIGJIGACNM_HMJELJKFBFM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PFMOODAPJDF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFMOODAPJDF&))((::PBYTE)hIl2Cpp + AAIGJIGACNM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AAIGJIGACNM HMJELJKFBFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAIGJIGACNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAIGJIGACNM_HMJELJKFBFM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AAIGJIGACNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAIGJIGACNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAIGJIGACNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PFMOODAPJDF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFMOODAPJDF&, ::System::Int32&))((::PBYTE)hIl2Cpp + AAIGJIGACNM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGJIGACNM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGJIGACNM_PPOMNIFACOL_OFFSET))(this);
	}
};
