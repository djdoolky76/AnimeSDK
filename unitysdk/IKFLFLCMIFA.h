#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPDADFHJKGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKFLFLCMIFA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IKFLFLCMIFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E440)
#define IKFLFLCMIFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKFLFLCMIFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IKFLFLCMIFA_HEFHPCFOEKF_1_OFFSET UNITYSDK_OFFSET(0x1B4EF1C0)
#define IKFLFLCMIFA_HEFHPCFOEKF_OFFSET UNITYSDK_OFFSET(0x1B4EEF20)
#define IKFLFLCMIFA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E420)
#define IKFLFLCMIFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E430)
#define IKFLFLCMIFA___INIT_OFFSET UNITYSDK_OFFSET(0x80E400)

inline static constexpr unsigned int IKFLFLCMIFA_TypeDefinitionIndex = 10669;

struct alignas(8) IKFLFLCMIFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKFLFLCMIFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IKFLFLCMIFA HEFHPCFOEKF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IKFLFLCMIFA EIFONLCJOPG)
	{
		return ((::IKFLFLCMIFA(*)(::FlatBuffers::ByteBuffer*, ::IKFLFLCMIFA))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_HEFHPCFOEKF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MPDADFHJKGO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPDADFHJKGO&, ::System::Int32&))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IKFLFLCMIFA HEFHPCFOEKF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKFLFLCMIFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_HEFHPCFOEKF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IKFLFLCMIFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKFLFLCMIFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPDADFHJKGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPDADFHJKGO&))((::PBYTE)hIl2Cpp + IKFLFLCMIFA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
