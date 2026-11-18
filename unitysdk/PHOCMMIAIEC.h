#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JENBEIGALIM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHOCMMIAIEC_AOJNPGILCGD_1_OFFSET UNITYSDK_OFFSET(0x1AD97E20)
#define PHOCMMIAIEC_AOJNPGILCGD_OFFSET UNITYSDK_OFFSET(0x1AD97B20)
#define PHOCMMIAIEC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHOCMMIAIEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806300)
#define PHOCMMIAIEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHOCMMIAIEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHOCMMIAIEC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8062F0)
#define PHOCMMIAIEC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8062E0)
#define PHOCMMIAIEC___INIT_OFFSET UNITYSDK_OFFSET(0x8062C0)

inline static constexpr unsigned int PHOCMMIAIEC_TypeDefinitionIndex = 17119;

struct alignas(8) PHOCMMIAIEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHOCMMIAIEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHOCMMIAIEC AOJNPGILCGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHOCMMIAIEC EIFONLCJOPG)
	{
		return ((::PHOCMMIAIEC(*)(::FlatBuffers::ByteBuffer*, ::PHOCMMIAIEC))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_AOJNPGILCGD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JENBEIGALIM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JENBEIGALIM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JENBEIGALIM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JENBEIGALIM&))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PHOCMMIAIEC AOJNPGILCGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHOCMMIAIEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_AOJNPGILCGD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PHOCMMIAIEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHOCMMIAIEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHOCMMIAIEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
