#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CNLHGLKJOHH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GALHNELBJOH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GALHNELBJOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B3320)
#define GALHNELBJOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GALHNELBJOH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GALHNELBJOH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B3360)
#define GALHNELBJOH_NIMKJFIGANK_1_OFFSET UNITYSDK_OFFSET(0x17ABA870)
#define GALHNELBJOH_NIMKJFIGANK_OFFSET UNITYSDK_OFFSET(0x17ABA800)
#define GALHNELBJOH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B3310)
#define GALHNELBJOH___INIT_OFFSET UNITYSDK_OFFSET(0x7B32F0)

inline static constexpr unsigned int GALHNELBJOH_TypeDefinitionIndex = 15655;

struct alignas(8) GALHNELBJOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALHNELBJOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALHNELBJOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALHNELBJOH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CNLHGLKJOHH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNLHGLKJOHH&))((::PBYTE)hIl2Cpp + GALHNELBJOH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GALHNELBJOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GALHNELBJOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALHNELBJOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GALHNELBJOH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CNLHGLKJOHH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CNLHGLKJOHH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GALHNELBJOH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GALHNELBJOH NIMKJFIGANK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GALHNELBJOH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALHNELBJOH_NIMKJFIGANK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GALHNELBJOH NIMKJFIGANK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GALHNELBJOH EIFONLCJOPG)
	{
		return ((::GALHNELBJOH(*)(::FlatBuffers::ByteBuffer*, ::GALHNELBJOH))((::PBYTE)hIl2Cpp + GALHNELBJOH_NIMKJFIGANK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
