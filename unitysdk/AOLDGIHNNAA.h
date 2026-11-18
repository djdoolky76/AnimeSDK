#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BIIEGPIPIOI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOLDGIHNNAA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AOLDGIHNNAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8162D0)
#define AOLDGIHNNAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOLDGIHNNAA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AOLDGIHNNAA_IKLPBFACIPB_1_OFFSET UNITYSDK_OFFSET(0x1B989D50)
#define AOLDGIHNNAA_IKLPBFACIPB_OFFSET UNITYSDK_OFFSET(0x1B989CB0)
#define AOLDGIHNNAA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8162B0)
#define AOLDGIHNNAA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8162C0)
#define AOLDGIHNNAA___INIT_OFFSET UNITYSDK_OFFSET(0x816290)

inline static constexpr unsigned int AOLDGIHNNAA_TypeDefinitionIndex = 16774;

struct alignas(8) AOLDGIHNNAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOLDGIHNNAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AOLDGIHNNAA IKLPBFACIPB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AOLDGIHNNAA EIFONLCJOPG)
	{
		return ((::AOLDGIHNNAA(*)(::FlatBuffers::ByteBuffer*, ::AOLDGIHNNAA))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_IKLPBFACIPB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::AOLDGIHNNAA IKLPBFACIPB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOLDGIHNNAA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_IKLPBFACIPB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BIIEGPIPIOI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIIEGPIPIOI&, ::System::Int32&))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AOLDGIHNNAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOLDGIHNNAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BIIEGPIPIOI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIIEGPIPIOI&))((::PBYTE)hIl2Cpp + AOLDGIHNNAA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
