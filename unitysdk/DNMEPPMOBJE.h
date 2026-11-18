#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFAPDAIFFIH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNMEPPMOBJE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DNMEPPMOBJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2590)
#define DNMEPPMOBJE_FDLIGJNGJAP_1_OFFSET UNITYSDK_OFFSET(0x17A9E530)
#define DNMEPPMOBJE_FDLIGJNGJAP_OFFSET UNITYSDK_OFFSET(0x17A9E4C0)
#define DNMEPPMOBJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNMEPPMOBJE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DNMEPPMOBJE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2580)
#define DNMEPPMOBJE___INIT_OFFSET UNITYSDK_OFFSET(0x7B2560)

inline static constexpr unsigned int DNMEPPMOBJE_TypeDefinitionIndex = 16389;

struct alignas(8) DNMEPPMOBJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNMEPPMOBJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFAPDAIFFIH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFAPDAIFFIH&))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DNMEPPMOBJE FDLIGJNGJAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNMEPPMOBJE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_FDLIGJNGJAP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DNMEPPMOBJE FDLIGJNGJAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DNMEPPMOBJE EIFONLCJOPG)
	{
		return ((::DNMEPPMOBJE(*)(::FlatBuffers::ByteBuffer*, ::DNMEPPMOBJE))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_FDLIGJNGJAP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DNMEPPMOBJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNMEPPMOBJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNMEPPMOBJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
