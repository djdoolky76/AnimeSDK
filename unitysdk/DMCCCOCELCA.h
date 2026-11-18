#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GKFDDHILHAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMCCCOCELCA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMCCCOCELCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBAA0)
#define DMCCCOCELCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMCCCOCELCA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMCCCOCELCA_LIKLCOHEPGM_1_OFFSET UNITYSDK_OFFSET(0x1A594700)
#define DMCCCOCELCA_LIKLCOHEPGM_OFFSET UNITYSDK_OFFSET(0x1A594660)
#define DMCCCOCELCA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBAE0)
#define DMCCCOCELCA___INIT_OFFSET UNITYSDK_OFFSET(0x7FBA80)

inline static constexpr unsigned int DMCCCOCELCA_TypeDefinitionIndex = 16804;

struct alignas(8) DMCCCOCELCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCCCOCELCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCCCOCELCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GKFDDHILHAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GKFDDHILHAI&))((::PBYTE)hIl2Cpp + DMCCCOCELCA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCCCOCELCA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DMCCCOCELCA LIKLCOHEPGM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMCCCOCELCA EIFONLCJOPG)
	{
		return ((::DMCCCOCELCA(*)(::FlatBuffers::ByteBuffer*, ::DMCCCOCELCA))((::PBYTE)hIl2Cpp + DMCCCOCELCA_LIKLCOHEPGM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DMCCCOCELCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMCCCOCELCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCCCOCELCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCCCOCELCA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DMCCCOCELCA LIKLCOHEPGM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMCCCOCELCA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCCCOCELCA_LIKLCOHEPGM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
