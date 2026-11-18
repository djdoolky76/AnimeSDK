#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFDBIJLOACN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCEPDBIFMCE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCEPDBIFMCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8096E0)
#define FCEPDBIFMCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCEPDBIFMCE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCEPDBIFMCE_KDFMKALCEKP_1_OFFSET UNITYSDK_OFFSET(0x1B103BB0)
#define FCEPDBIFMCE_KDFMKALCEKP_OFFSET UNITYSDK_OFFSET(0x1B103740)
#define FCEPDBIFMCE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8096D0)
#define FCEPDBIFMCE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809720)
#define FCEPDBIFMCE___INIT_OFFSET UNITYSDK_OFFSET(0x8096B0)

inline static constexpr unsigned int FCEPDBIFMCE_TypeDefinitionIndex = 13635;

struct alignas(8) FCEPDBIFMCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCEPDBIFMCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FCEPDBIFMCE KDFMKALCEKP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCEPDBIFMCE EIFONLCJOPG)
	{
		return ((::FCEPDBIFMCE(*)(::FlatBuffers::ByteBuffer*, ::FCEPDBIFMCE))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_KDFMKALCEKP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FFDBIJLOACN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFDBIJLOACN&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FCEPDBIFMCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCEPDBIFMCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFDBIJLOACN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFDBIJLOACN&))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FCEPDBIFMCE KDFMKALCEKP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCEPDBIFMCE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCEPDBIFMCE_KDFMKALCEKP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
