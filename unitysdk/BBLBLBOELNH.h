#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EKMDKOBHIND.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBLBLBOELNH_BDDIGHFAFEO_1_OFFSET UNITYSDK_OFFSET(0x19BE0DB0)
#define BBLBLBOELNH_BDDIGHFAFEO_OFFSET UNITYSDK_OFFSET(0x19BE0D40)
#define BBLBLBOELNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BBLBLBOELNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECE60)
#define BBLBLBOELNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBLBLBOELNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBLBLBOELNH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ECEA0)
#define BBLBLBOELNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECEB0)
#define BBLBLBOELNH___INIT_OFFSET UNITYSDK_OFFSET(0x7ECE40)

inline static constexpr unsigned int BBLBLBOELNH_TypeDefinitionIndex = 14786;

struct alignas(8) BBLBLBOELNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLBLBOELNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBLBLBOELNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BBLBLBOELNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBLBLBOELNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBLBLBOELNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLBLBOELNH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EKMDKOBHIND& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EKMDKOBHIND&, ::System::Int32&))((::PBYTE)hIl2Cpp + BBLBLBOELNH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EKMDKOBHIND& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EKMDKOBHIND&))((::PBYTE)hIl2Cpp + BBLBLBOELNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BBLBLBOELNH BDDIGHFAFEO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBLBLBOELNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBLBLBOELNH_BDDIGHFAFEO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLBLBOELNH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BBLBLBOELNH BDDIGHFAFEO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBLBLBOELNH EIFONLCJOPG)
	{
		return ((::BBLBLBOELNH(*)(::FlatBuffers::ByteBuffer*, ::BBLBLBOELNH))((::PBYTE)hIl2Cpp + BBLBLBOELNH_BDDIGHFAFEO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
