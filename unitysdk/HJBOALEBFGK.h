#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDCBGHNPDIM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJBOALEBFGK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HJBOALEBFGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779FD0)
#define HJBOALEBFGK_FDDJFMCELBP_1_OFFSET UNITYSDK_OFFSET(0x160F75D0)
#define HJBOALEBFGK_FDDJFMCELBP_OFFSET UNITYSDK_OFFSET(0x160F74D0)
#define HJBOALEBFGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJBOALEBFGK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJBOALEBFGK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A010)
#define HJBOALEBFGK___INIT_OFFSET UNITYSDK_OFFSET(0x779FB0)

inline static constexpr unsigned int HJBOALEBFGK_TypeDefinitionIndex = 12028;

struct alignas(8) HJBOALEBFGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBOALEBFGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJBOALEBFGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HJBOALEBFGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJBOALEBFGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJBOALEBFGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBOALEBFGK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HJBOALEBFGK FDDJFMCELBP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJBOALEBFGK EIFONLCJOPG)
	{
		return ((::HJBOALEBFGK(*)(::FlatBuffers::ByteBuffer*, ::HJBOALEBFGK))((::PBYTE)hIl2Cpp + HJBOALEBFGK_FDDJFMCELBP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDCBGHNPDIM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDCBGHNPDIM&))((::PBYTE)hIl2Cpp + HJBOALEBFGK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HJBOALEBFGK FDDJFMCELBP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJBOALEBFGK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJBOALEBFGK_FDDJFMCELBP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBOALEBFGK_GHKKNCCLPAN_OFFSET))(this);
	}
};
