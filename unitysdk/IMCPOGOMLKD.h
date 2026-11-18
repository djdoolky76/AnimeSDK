#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHJEAKFGMCN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMCPOGOMLKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IMCPOGOMLKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E4E0)
#define IMCPOGOMLKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMCPOGOMLKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IMCPOGOMLKD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E4D0)
#define IMCPOGOMLKD_PHEKIJNEMCJ_1_OFFSET UNITYSDK_OFFSET(0x1B4F0820)
#define IMCPOGOMLKD_PHEKIJNEMCJ_OFFSET UNITYSDK_OFFSET(0x1B4F07B0)
#define IMCPOGOMLKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E4C0)
#define IMCPOGOMLKD___INIT_OFFSET UNITYSDK_OFFSET(0x80E4A0)

inline static constexpr unsigned int IMCPOGOMLKD_TypeDefinitionIndex = 9471;

struct alignas(8) IMCPOGOMLKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMCPOGOMLKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHJEAKFGMCN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHJEAKFGMCN&))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IMCPOGOMLKD PHEKIJNEMCJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMCPOGOMLKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_PHEKIJNEMCJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IMCPOGOMLKD PHEKIJNEMCJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IMCPOGOMLKD EIFONLCJOPG)
	{
		return ((::IMCPOGOMLKD(*)(::FlatBuffers::ByteBuffer*, ::IMCPOGOMLKD))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_PHEKIJNEMCJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHJEAKFGMCN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHJEAKFGMCN&, ::System::Int32&))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IMCPOGOMLKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMCPOGOMLKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMCPOGOMLKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
