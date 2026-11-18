#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCLPCKLILLC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COEMNDDKLBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define COEMNDDKLBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762460)
#define COEMNDDKLBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COEMNDDKLBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define COEMNDDKLBG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7624A0)
#define COEMNDDKLBG_OLNCBEGNLCM_1_OFFSET UNITYSDK_OFFSET(0x1574A890)
#define COEMNDDKLBG_OLNCBEGNLCM_OFFSET UNITYSDK_OFFSET(0x1574A820)
#define COEMNDDKLBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7624B0)
#define COEMNDDKLBG___INIT_OFFSET UNITYSDK_OFFSET(0x762440)

inline static constexpr unsigned int COEMNDDKLBG_TypeDefinitionIndex = 11958;

struct alignas(8) COEMNDDKLBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COEMNDDKLBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEMNDDKLBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::COEMNDDKLBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COEMNDDKLBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEMNDDKLBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COEMNDDKLBG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::COEMNDDKLBG OLNCBEGNLCM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COEMNDDKLBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COEMNDDKLBG_OLNCBEGNLCM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::COEMNDDKLBG OLNCBEGNLCM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::COEMNDDKLBG EIFONLCJOPG)
	{
		return ((::COEMNDDKLBG(*)(::FlatBuffers::ByteBuffer*, ::COEMNDDKLBG))((::PBYTE)hIl2Cpp + COEMNDDKLBG_OLNCBEGNLCM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCLPCKLILLC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCLPCKLILLC&, ::System::Int32&))((::PBYTE)hIl2Cpp + COEMNDDKLBG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCLPCKLILLC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCLPCKLILLC&))((::PBYTE)hIl2Cpp + COEMNDDKLBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COEMNDDKLBG_PPOMNIFACOL_OFFSET))(this);
	}
};
