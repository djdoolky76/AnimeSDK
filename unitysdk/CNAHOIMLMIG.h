#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HBIGPLGFEJK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNAHOIMLMIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CNAHOIMLMIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA530)
#define CNAHOIMLMIG_GDLDIBKPNKA_1_OFFSET UNITYSDK_OFFSET(0x19AD1EC0)
#define CNAHOIMLMIG_GDLDIBKPNKA_OFFSET UNITYSDK_OFFSET(0x19AD1E60)
#define CNAHOIMLMIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNAHOIMLMIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CNAHOIMLMIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA570)
#define CNAHOIMLMIG___INIT_OFFSET UNITYSDK_OFFSET(0x7EA510)

inline static constexpr unsigned int CNAHOIMLMIG_TypeDefinitionIndex = 9628;

struct alignas(8) CNAHOIMLMIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNAHOIMLMIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CNAHOIMLMIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNAHOIMLMIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HBIGPLGFEJK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HBIGPLGFEJK&))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CNAHOIMLMIG GDLDIBKPNKA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CNAHOIMLMIG EIFONLCJOPG)
	{
		return ((::CNAHOIMLMIG(*)(::FlatBuffers::ByteBuffer*, ::CNAHOIMLMIG))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_GDLDIBKPNKA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CNAHOIMLMIG GDLDIBKPNKA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNAHOIMLMIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_GDLDIBKPNKA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAHOIMLMIG_GHKKNCCLPAN_OFFSET))(this);
	}
};
