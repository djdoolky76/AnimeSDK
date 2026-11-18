#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEKJJMLJKNJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHHPAFGGGMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LHHPAFGGGMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3780)
#define LHHPAFGGGMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHHPAFGGGMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LHHPAFGGGMH_IIGLMIJIOOC_1_OFFSET UNITYSDK_OFFSET(0x17FB28E0)
#define LHHPAFGGGMH_IIGLMIJIOOC_OFFSET UNITYSDK_OFFSET(0x17FB2870)
#define LHHPAFGGGMH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C37C0)
#define LHHPAFGGGMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C37D0)
#define LHHPAFGGGMH___INIT_OFFSET UNITYSDK_OFFSET(0x7C3760)

inline static constexpr unsigned int LHHPAFGGGMH_TypeDefinitionIndex = 9485;

struct alignas(8) LHHPAFGGGMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHHPAFGGGMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LHHPAFGGGMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHHPAFGGGMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JEKJJMLJKNJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEKJJMLJKNJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LHHPAFGGGMH IIGLMIJIOOC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHHPAFGGGMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_IIGLMIJIOOC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEKJJMLJKNJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEKJJMLJKNJ&))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LHHPAFGGGMH IIGLMIJIOOC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LHHPAFGGGMH EIFONLCJOPG)
	{
		return ((::LHHPAFGGGMH(*)(::FlatBuffers::ByteBuffer*, ::LHHPAFGGGMH))((::PBYTE)hIl2Cpp + LHHPAFGGGMH_IIGLMIJIOOC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
