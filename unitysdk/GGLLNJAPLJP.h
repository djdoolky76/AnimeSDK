#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PCOJLHAGOFK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGLLNJAPLJP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGLLNJAPLJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78AEB0)
#define GGLLNJAPLJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGLLNJAPLJP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGLLNJAPLJP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78AEA0)
#define GGLLNJAPLJP_MEDPEOJPOBH_1_OFFSET UNITYSDK_OFFSET(0x16648960)
#define GGLLNJAPLJP_MEDPEOJPOBH_OFFSET UNITYSDK_OFFSET(0x16648700)
#define GGLLNJAPLJP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78AEF0)
#define GGLLNJAPLJP___INIT_OFFSET UNITYSDK_OFFSET(0x78AE80)

inline static constexpr unsigned int GGLLNJAPLJP_TypeDefinitionIndex = 9969;

struct alignas(8) GGLLNJAPLJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGLLNJAPLJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PCOJLHAGOFK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCOJLHAGOFK&))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GGLLNJAPLJP MEDPEOJPOBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGLLNJAPLJP EIFONLCJOPG)
	{
		return ((::GGLLNJAPLJP(*)(::FlatBuffers::ByteBuffer*, ::GGLLNJAPLJP))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_MEDPEOJPOBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PCOJLHAGOFK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCOJLHAGOFK&, ::System::Int32&))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GGLLNJAPLJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGLLNJAPLJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GGLLNJAPLJP MEDPEOJPOBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGLLNJAPLJP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGLLNJAPLJP_MEDPEOJPOBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
