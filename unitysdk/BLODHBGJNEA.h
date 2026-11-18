#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFKFAGBGDOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLODHBGJNEA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BLODHBGJNEA_BGNFJJNOOBG_1_OFFSET UNITYSDK_OFFSET(0x19BEE010)
#define BLODHBGJNEA_BGNFJJNOOBG_OFFSET UNITYSDK_OFFSET(0x19BEDFA0)
#define BLODHBGJNEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED230)
#define BLODHBGJNEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BLODHBGJNEA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BLODHBGJNEA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ED220)
#define BLODHBGJNEA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED210)
#define BLODHBGJNEA___INIT_OFFSET UNITYSDK_OFFSET(0x7ED1F0)

inline static constexpr unsigned int BLODHBGJNEA_TypeDefinitionIndex = 11573;

struct alignas(8) BLODHBGJNEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODHBGJNEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLODHBGJNEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BLODHBGJNEA BGNFJJNOOBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLODHBGJNEA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLODHBGJNEA_BGNFJJNOOBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODHBGJNEA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KFKFAGBGDOP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFKFAGBGDOP&, ::System::Int32&))((::PBYTE)hIl2Cpp + BLODHBGJNEA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFKFAGBGDOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFKFAGBGDOP&))((::PBYTE)hIl2Cpp + BLODHBGJNEA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODHBGJNEA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BLODHBGJNEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLODHBGJNEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLODHBGJNEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BLODHBGJNEA BGNFJJNOOBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BLODHBGJNEA EIFONLCJOPG)
	{
		return ((::BLODHBGJNEA(*)(::FlatBuffers::ByteBuffer*, ::BLODHBGJNEA))((::PBYTE)hIl2Cpp + BLODHBGJNEA_BGNFJJNOOBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
