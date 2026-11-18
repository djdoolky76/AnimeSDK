#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIPMMNLLCMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E250)
#define IIPMMNLLCMK_GDNMCLBFENI_1_OFFSET UNITYSDK_OFFSET(0x1B4ED3B0)
#define IIPMMNLLCMK_GDNMCLBFENI_OFFSET UNITYSDK_OFFSET(0x1B4ED310)
#define IIPMMNLLCMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIPMMNLLCMK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIPMMNLLCMK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E290)
#define IIPMMNLLCMK___INIT_OFFSET UNITYSDK_OFFSET(0x80E230)

inline static constexpr unsigned int IIPMMNLLCMK_TypeDefinitionIndex = 14665;

struct alignas(8) IIPMMNLLCMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPMMNLLCMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIPMMNLLCMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IIPMMNLLCMK GDNMCLBFENI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIPMMNLLCMK EIFONLCJOPG)
	{
		return ((::IIPMMNLLCMK(*)(::FlatBuffers::ByteBuffer*, ::IIPMMNLLCMK))((::PBYTE)hIl2Cpp + IIPMMNLLCMK_GDNMCLBFENI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IIPMMNLLCMK GDNMCLBFENI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIPMMNLLCMK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIPMMNLLCMK_GDNMCLBFENI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IIPMMNLLCMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIPMMNLLCMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIPMMNLLCMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPMMNLLCMK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPMMNLLCMK_PPOMNIFACOL_OFFSET))(this);
	}
};
