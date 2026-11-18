#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ECFLEFNEPMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DINIIFCPGPK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DINIIFCPGPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ADAB0)
#define DINIIFCPGPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DINIIFCPGPK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DINIIFCPGPK_KNFGBPKAGEL_1_OFFSET UNITYSDK_OFFSET(0x17783380)
#define DINIIFCPGPK_KNFGBPKAGEL_OFFSET UNITYSDK_OFFSET(0x17783320)
#define DINIIFCPGPK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ADAA0)
#define DINIIFCPGPK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ADAF0)
#define DINIIFCPGPK___INIT_OFFSET UNITYSDK_OFFSET(0x7ADA80)

inline static constexpr unsigned int DINIIFCPGPK_TypeDefinitionIndex = 16987;

struct alignas(8) DINIIFCPGPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINIIFCPGPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DINIIFCPGPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ECFLEFNEPMA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECFLEFNEPMA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DINIIFCPGPK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DINIIFCPGPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DINIIFCPGPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DINIIFCPGPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DINIIFCPGPK KNFGBPKAGEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DINIIFCPGPK EIFONLCJOPG)
	{
		return ((::DINIIFCPGPK(*)(::FlatBuffers::ByteBuffer*, ::DINIIFCPGPK))((::PBYTE)hIl2Cpp + DINIIFCPGPK_KNFGBPKAGEL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DINIIFCPGPK KNFGBPKAGEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DINIIFCPGPK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DINIIFCPGPK_KNFGBPKAGEL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ECFLEFNEPMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECFLEFNEPMA&))((::PBYTE)hIl2Cpp + DINIIFCPGPK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DINIIFCPGPK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINIIFCPGPK_PPOMNIFACOL_OFFSET))(this);
	}
};
