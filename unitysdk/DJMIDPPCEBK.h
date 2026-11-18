#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCOFKNPABMF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJMIDPPCEBK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJMIDPPCEBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8078A0)
#define DJMIDPPCEBK_FHEOGEJMINO_1_OFFSET UNITYSDK_OFFSET(0x1ADC7750)
#define DJMIDPPCEBK_FHEOGEJMINO_OFFSET UNITYSDK_OFFSET(0x1ADC76B0)
#define DJMIDPPCEBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJMIDPPCEBK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJMIDPPCEBK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807890)
#define DJMIDPPCEBK___INIT_OFFSET UNITYSDK_OFFSET(0x807870)

inline static constexpr unsigned int DJMIDPPCEBK_TypeDefinitionIndex = 15317;

struct alignas(8) DJMIDPPCEBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJMIDPPCEBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DJMIDPPCEBK FHEOGEJMINO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJMIDPPCEBK EIFONLCJOPG)
	{
		return ((::DJMIDPPCEBK(*)(::FlatBuffers::ByteBuffer*, ::DJMIDPPCEBK))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_FHEOGEJMINO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DJMIDPPCEBK FHEOGEJMINO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJMIDPPCEBK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_FHEOGEJMINO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCOFKNPABMF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCOFKNPABMF&))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DJMIDPPCEBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJMIDPPCEBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJMIDPPCEBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
