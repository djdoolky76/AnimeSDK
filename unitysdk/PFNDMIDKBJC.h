#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BIJIBHCFPKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFNDMIDKBJC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFNDMIDKBJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B020)
#define PFNDMIDKBJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFNDMIDKBJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFNDMIDKBJC_LCPNFEKEKPA_1_OFFSET UNITYSDK_OFFSET(0x1BAC0200)
#define PFNDMIDKBJC_LCPNFEKEKPA_OFFSET UNITYSDK_OFFSET(0x1BAC0190)
#define PFNDMIDKBJC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B010)
#define PFNDMIDKBJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B000)
#define PFNDMIDKBJC___INIT_OFFSET UNITYSDK_OFFSET(0x81AFE0)

inline static constexpr unsigned int PFNDMIDKBJC_TypeDefinitionIndex = 13565;

struct alignas(8) PFNDMIDKBJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNDMIDKBJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PFNDMIDKBJC LCPNFEKEKPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFNDMIDKBJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_LCPNFEKEKPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PFNDMIDKBJC LCPNFEKEKPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFNDMIDKBJC EIFONLCJOPG)
	{
		return ((::PFNDMIDKBJC(*)(::FlatBuffers::ByteBuffer*, ::PFNDMIDKBJC))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_LCPNFEKEKPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BIJIBHCFPKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIJIBHCFPKA&))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BIJIBHCFPKA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BIJIBHCFPKA&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PFNDMIDKBJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFNDMIDKBJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFNDMIDKBJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
