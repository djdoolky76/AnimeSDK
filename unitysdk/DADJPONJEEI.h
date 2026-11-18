#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBOJDIMKBHC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DADJPONJEEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DADJPONJEEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD580)
#define DADJPONJEEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DADJPONJEEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DADJPONJEEI_IJFBDKCNIOE_1_OFFSET UNITYSDK_OFFSET(0x177775D0)
#define DADJPONJEEI_IJFBDKCNIOE_OFFSET UNITYSDK_OFFSET(0x17777560)
#define DADJPONJEEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AD5D0)
#define DADJPONJEEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD5C0)
#define DADJPONJEEI___INIT_OFFSET UNITYSDK_OFFSET(0x7AD560)

inline static constexpr unsigned int DADJPONJEEI_TypeDefinitionIndex = 13870;

struct alignas(8) DADJPONJEEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADJPONJEEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADJPONJEEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DADJPONJEEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DADJPONJEEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADJPONJEEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADJPONJEEI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DADJPONJEEI IJFBDKCNIOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DADJPONJEEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DADJPONJEEI_IJFBDKCNIOE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DADJPONJEEI IJFBDKCNIOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DADJPONJEEI EIFONLCJOPG)
	{
		return ((::DADJPONJEEI(*)(::FlatBuffers::ByteBuffer*, ::DADJPONJEEI))((::PBYTE)hIl2Cpp + DADJPONJEEI_IJFBDKCNIOE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CBOJDIMKBHC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBOJDIMKBHC&, ::System::Int32&))((::PBYTE)hIl2Cpp + DADJPONJEEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CBOJDIMKBHC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBOJDIMKBHC&))((::PBYTE)hIl2Cpp + DADJPONJEEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DADJPONJEEI_GHKKNCCLPAN_OFFSET))(this);
	}
};
