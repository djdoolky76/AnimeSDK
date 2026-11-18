#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDCJIGMGBFJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPFCDMPELNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPFCDMPELNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9386A0)
#define PPFCDMPELNH_BOKBDKOAGJM_1_OFFSET UNITYSDK_OFFSET(0x1EE0CF40)
#define PPFCDMPELNH_BOKBDKOAGJM_OFFSET UNITYSDK_OFFSET(0x1EE0CED0)
#define PPFCDMPELNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPFCDMPELNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPFCDMPELNH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9386F0)
#define PPFCDMPELNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9386E0)
#define PPFCDMPELNH___INIT_OFFSET UNITYSDK_OFFSET(0x938680)

inline static constexpr unsigned int PPFCDMPELNH_TypeDefinitionIndex = 15435;

struct alignas(8) PPFCDMPELNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFCDMPELNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPFCDMPELNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFCDMPELNH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PPFCDMPELNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPFCDMPELNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPFCDMPELNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFCDMPELNH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PPFCDMPELNH BOKBDKOAGJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPFCDMPELNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPFCDMPELNH_BOKBDKOAGJM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPFCDMPELNH BOKBDKOAGJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPFCDMPELNH EIFONLCJOPG)
	{
		return ((::PPFCDMPELNH(*)(::FlatBuffers::ByteBuffer*, ::PPFCDMPELNH))((::PBYTE)hIl2Cpp + PPFCDMPELNH_BOKBDKOAGJM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDCJIGMGBFJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDCJIGMGBFJ&))((::PBYTE)hIl2Cpp + PPFCDMPELNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MDCJIGMGBFJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDCJIGMGBFJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + PPFCDMPELNH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
