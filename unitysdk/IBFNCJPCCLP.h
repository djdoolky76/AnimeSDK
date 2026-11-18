#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GJCGHLCFPPI.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBFNCJPCCLP_AGOCGKOOCHA_1_OFFSET UNITYSDK_OFFSET(0x1B8845F0)
#define IBFNCJPCCLP_AGOCGKOOCHA_OFFSET UNITYSDK_OFFSET(0x1B884580)
#define IBFNCJPCCLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814850)
#define IBFNCJPCCLP_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define IBFNCJPCCLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBFNCJPCCLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBFNCJPCCLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814840)
#define IBFNCJPCCLP___INIT_OFFSET UNITYSDK_OFFSET(0x814820)

inline static constexpr unsigned int IBFNCJPCCLP_TypeDefinitionIndex = 15327;

struct alignas(8) IBFNCJPCCLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBFNCJPCCLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBFNCJPCCLP AGOCGKOOCHA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBFNCJPCCLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_AGOCGKOOCHA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::GJCGHLCFPPI> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::GJCGHLCFPPI>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::IBFNCJPCCLP AGOCGKOOCHA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBFNCJPCCLP EIFONLCJOPG)
	{
		return ((::IBFNCJPCCLP(*)(::FlatBuffers::ByteBuffer*, ::IBFNCJPCCLP))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_AGOCGKOOCHA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IBFNCJPCCLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBFNCJPCCLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFNCJPCCLP_GHKKNCCLPAN_OFFSET))(this);
	}
};
