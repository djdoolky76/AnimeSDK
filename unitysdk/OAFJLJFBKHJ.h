#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IJNHEDDIODD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAFJLJFBKHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OAFJLJFBKHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB600)
#define OAFJLJFBKHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAFJLJFBKHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OAFJLJFBKHJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB640)
#define OAFJLJFBKHJ_MLEPFPNMGCF_1_OFFSET UNITYSDK_OFFSET(0x1CFF31D0)
#define OAFJLJFBKHJ_MLEPFPNMGCF_OFFSET UNITYSDK_OFFSET(0x1CFF3170)
#define OAFJLJFBKHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB650)
#define OAFJLJFBKHJ___INIT_OFFSET UNITYSDK_OFFSET(0x8AB5E0)

inline static constexpr unsigned int OAFJLJFBKHJ_TypeDefinitionIndex = 10712;

struct alignas(8) OAFJLJFBKHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OAFJLJFBKHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAFJLJFBKHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IJNHEDDIODD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJNHEDDIODD&, ::System::Int32&))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IJNHEDDIODD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJNHEDDIODD&))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OAFJLJFBKHJ MLEPFPNMGCF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OAFJLJFBKHJ EIFONLCJOPG)
	{
		return ((::OAFJLJFBKHJ(*)(::FlatBuffers::ByteBuffer*, ::OAFJLJFBKHJ))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_MLEPFPNMGCF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OAFJLJFBKHJ MLEPFPNMGCF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAFJLJFBKHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAFJLJFBKHJ_MLEPFPNMGCF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
