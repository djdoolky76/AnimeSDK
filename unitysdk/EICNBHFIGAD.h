#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FBBAMNKCNGN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EICNBHFIGAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EICNBHFIGAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817610)
#define EICNBHFIGAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EICNBHFIGAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EICNBHFIGAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817650)
#define EICNBHFIGAD_MNIFBDLODPE_1_OFFSET UNITYSDK_OFFSET(0x1B9B7620)
#define EICNBHFIGAD_MNIFBDLODPE_OFFSET UNITYSDK_OFFSET(0x1B9B75B0)
#define EICNBHFIGAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817600)
#define EICNBHFIGAD___INIT_OFFSET UNITYSDK_OFFSET(0x8175E0)

inline static constexpr unsigned int EICNBHFIGAD_TypeDefinitionIndex = 15931;

struct alignas(8) EICNBHFIGAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNBHFIGAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EICNBHFIGAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNBHFIGAD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FBBAMNKCNGN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBBAMNKCNGN&))((::PBYTE)hIl2Cpp + EICNBHFIGAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EICNBHFIGAD MNIFBDLODPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EICNBHFIGAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EICNBHFIGAD_MNIFBDLODPE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICNBHFIGAD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EICNBHFIGAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EICNBHFIGAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EICNBHFIGAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EICNBHFIGAD MNIFBDLODPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EICNBHFIGAD EIFONLCJOPG)
	{
		return ((::EICNBHFIGAD(*)(::FlatBuffers::ByteBuffer*, ::EICNBHFIGAD))((::PBYTE)hIl2Cpp + EICNBHFIGAD_MNIFBDLODPE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FBBAMNKCNGN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBBAMNKCNGN&, ::System::Int32&))((::PBYTE)hIl2Cpp + EICNBHFIGAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
