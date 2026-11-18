#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKNOFMIAIGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBBNEIDLDHM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PBBNEIDLDHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF530)
#define PBBNEIDLDHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBBNEIDLDHM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBBNEIDLDHM_JGLEJDGJAAA_1_OFFSET UNITYSDK_OFFSET(0x1D0D7CB0)
#define PBBNEIDLDHM_JGLEJDGJAAA_OFFSET UNITYSDK_OFFSET(0x1D0D7A10)
#define PBBNEIDLDHM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF520)
#define PBBNEIDLDHM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF510)
#define PBBNEIDLDHM___INIT_OFFSET UNITYSDK_OFFSET(0x8AF4F0)

inline static constexpr unsigned int PBBNEIDLDHM_TypeDefinitionIndex = 17104;

struct alignas(8) PBBNEIDLDHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBBNEIDLDHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PBBNEIDLDHM JGLEJDGJAAA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBBNEIDLDHM EIFONLCJOPG)
	{
		return ((::PBBNEIDLDHM(*)(::FlatBuffers::ByteBuffer*, ::PBBNEIDLDHM))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_JGLEJDGJAAA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKNOFMIAIGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKNOFMIAIGM&))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NKNOFMIAIGM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKNOFMIAIGM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PBBNEIDLDHM JGLEJDGJAAA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBBNEIDLDHM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_JGLEJDGJAAA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PBBNEIDLDHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBBNEIDLDHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBBNEIDLDHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
