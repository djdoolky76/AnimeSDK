#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCPKIJCJOEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBFGPKEKPDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JBFGPKEKPDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812980)
#define JBFGPKEKPDG_EGLJCMKAACD_1_OFFSET UNITYSDK_OFFSET(0x1B7D76A0)
#define JBFGPKEKPDG_EGLJCMKAACD_OFFSET UNITYSDK_OFFSET(0x1B7D7630)
#define JBFGPKEKPDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBFGPKEKPDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBFGPKEKPDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812970)
#define JBFGPKEKPDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812960)
#define JBFGPKEKPDG___INIT_OFFSET UNITYSDK_OFFSET(0x812940)

inline static constexpr unsigned int JBFGPKEKPDG_TypeDefinitionIndex = 12832;

struct alignas(8) JBFGPKEKPDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBFGPKEKPDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JBFGPKEKPDG EGLJCMKAACD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBFGPKEKPDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_EGLJCMKAACD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KCPKIJCJOEH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCPKIJCJOEH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JBFGPKEKPDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBFGPKEKPDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCPKIJCJOEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCPKIJCJOEH&))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JBFGPKEKPDG EGLJCMKAACD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBFGPKEKPDG EIFONLCJOPG)
	{
		return ((::JBFGPKEKPDG(*)(::FlatBuffers::ByteBuffer*, ::JBFGPKEKPDG))((::PBYTE)hIl2Cpp + JBFGPKEKPDG_EGLJCMKAACD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
