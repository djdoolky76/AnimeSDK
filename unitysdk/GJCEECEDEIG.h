#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLMIBEMKKMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJCEECEDEIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJCEECEDEIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB630)
#define GJCEECEDEIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJCEECEDEIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJCEECEDEIG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EB610)
#define GJCEECEDEIG_PHOFOOKEJLL_1_OFFSET UNITYSDK_OFFSET(0x19AFC520)
#define GJCEECEDEIG_PHOFOOKEJLL_OFFSET UNITYSDK_OFFSET(0x19AFC4B0)
#define GJCEECEDEIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB620)
#define GJCEECEDEIG___INIT_OFFSET UNITYSDK_OFFSET(0x7EB5F0)

inline static constexpr unsigned int GJCEECEDEIG_TypeDefinitionIndex = 15084;

struct alignas(8) GJCEECEDEIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCEECEDEIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCEECEDEIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FLMIBEMKKMI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLMIBEMKKMI&, ::System::Int32&))((::PBYTE)hIl2Cpp + GJCEECEDEIG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GJCEECEDEIG PHOFOOKEJLL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJCEECEDEIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCEECEDEIG_PHOFOOKEJLL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCEECEDEIG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GJCEECEDEIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJCEECEDEIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCEECEDEIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GJCEECEDEIG PHOFOOKEJLL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJCEECEDEIG EIFONLCJOPG)
	{
		return ((::GJCEECEDEIG(*)(::FlatBuffers::ByteBuffer*, ::GJCEECEDEIG))((::PBYTE)hIl2Cpp + GJCEECEDEIG_PHOFOOKEJLL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FLMIBEMKKMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLMIBEMKKMI&))((::PBYTE)hIl2Cpp + GJCEECEDEIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCEECEDEIG_GHKKNCCLPAN_OFFSET))(this);
	}
};
