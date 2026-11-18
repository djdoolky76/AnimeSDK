#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKPCBOOFEIB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMHAAPADDNE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMHAAPADDNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAF80)
#define AMHAAPADDNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMHAAPADDNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMHAAPADDNE_LKOMAFPMHGK_1_OFFSET UNITYSDK_OFFSET(0x1A5720D0)
#define AMHAAPADDNE_LKOMAFPMHGK_OFFSET UNITYSDK_OFFSET(0x1A571F30)
#define AMHAAPADDNE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FAF70)
#define AMHAAPADDNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAFC0)
#define AMHAAPADDNE___INIT_OFFSET UNITYSDK_OFFSET(0x7FAF50)

inline static constexpr unsigned int AMHAAPADDNE_TypeDefinitionIndex = 13174;

struct alignas(8) AMHAAPADDNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHAAPADDNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMHAAPADDNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AMHAAPADDNE LKOMAFPMHGK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMHAAPADDNE EIFONLCJOPG)
	{
		return ((::AMHAAPADDNE(*)(::FlatBuffers::ByteBuffer*, ::AMHAAPADDNE))((::PBYTE)hIl2Cpp + AMHAAPADDNE_LKOMAFPMHGK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHAAPADDNE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKPCBOOFEIB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKPCBOOFEIB&))((::PBYTE)hIl2Cpp + AMHAAPADDNE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AMHAAPADDNE LKOMAFPMHGK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMHAAPADDNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMHAAPADDNE_LKOMAFPMHGK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HKPCBOOFEIB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKPCBOOFEIB&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMHAAPADDNE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::AMHAAPADDNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMHAAPADDNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMHAAPADDNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHAAPADDNE_PPOMNIFACOL_OFFSET))(this);
	}
};
