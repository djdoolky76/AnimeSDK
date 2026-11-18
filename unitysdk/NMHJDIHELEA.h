#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KEILJJCJBEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMHJDIHELEA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMHJDIHELEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6240)
#define NMHJDIHELEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMHJDIHELEA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMHJDIHELEA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6280)
#define NMHJDIHELEA_OGOBJKDMOPC_1_OFFSET UNITYSDK_OFFSET(0x17355B90)
#define NMHJDIHELEA_OGOBJKDMOPC_OFFSET UNITYSDK_OFFSET(0x17355AF0)
#define NMHJDIHELEA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6290)
#define NMHJDIHELEA___INIT_OFFSET UNITYSDK_OFFSET(0x7A6220)

inline static constexpr unsigned int NMHJDIHELEA_TypeDefinitionIndex = 11154;

struct alignas(8) NMHJDIHELEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJDIHELEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMHJDIHELEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJDIHELEA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NMHJDIHELEA OGOBJKDMOPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMHJDIHELEA EIFONLCJOPG)
	{
		return ((::NMHJDIHELEA(*)(::FlatBuffers::ByteBuffer*, ::NMHJDIHELEA))((::PBYTE)hIl2Cpp + NMHJDIHELEA_OGOBJKDMOPC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NMHJDIHELEA OGOBJKDMOPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMHJDIHELEA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMHJDIHELEA_OGOBJKDMOPC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NMHJDIHELEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMHJDIHELEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMHJDIHELEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KEILJJCJBEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEILJJCJBEI&))((::PBYTE)hIl2Cpp + NMHJDIHELEA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KEILJJCJBEI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEILJJCJBEI&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMHJDIHELEA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHJDIHELEA_PPOMNIFACOL_OFFSET))(this);
	}
};
