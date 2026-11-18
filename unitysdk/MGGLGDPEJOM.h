#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PDEHKOINALK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGGLGDPEJOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MGGLGDPEJOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8023A0)
#define MGGLGDPEJOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGGLGDPEJOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGGLGDPEJOM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x802390)
#define MGGLGDPEJOM_NFFPLKFHMMM_1_OFFSET UNITYSDK_OFFSET(0x1AB0A080)
#define MGGLGDPEJOM_NFFPLKFHMMM_OFFSET UNITYSDK_OFFSET(0x1AB0A010)
#define MGGLGDPEJOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8023E0)
#define MGGLGDPEJOM___INIT_OFFSET UNITYSDK_OFFSET(0x802370)

inline static constexpr unsigned int MGGLGDPEJOM_TypeDefinitionIndex = 11182;

struct alignas(8) MGGLGDPEJOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGGLGDPEJOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MGGLGDPEJOM NFFPLKFHMMM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGGLGDPEJOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_NFFPLKFHMMM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MGGLGDPEJOM NFFPLKFHMMM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGGLGDPEJOM EIFONLCJOPG)
	{
		return ((::MGGLGDPEJOM(*)(::FlatBuffers::ByteBuffer*, ::MGGLGDPEJOM))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_NFFPLKFHMMM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PDEHKOINALK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PDEHKOINALK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MGGLGDPEJOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGGLGDPEJOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PDEHKOINALK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PDEHKOINALK&))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGLGDPEJOM_PPOMNIFACOL_OFFSET))(this);
	}
};
