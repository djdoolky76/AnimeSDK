#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FOOOELOAMKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JILKMGABDAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JILKMGABDAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76FB70)
#define JILKMGABDAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JILKMGABDAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JILKMGABDAD_GMBEHIKCJKI_1_OFFSET UNITYSDK_OFFSET(0x15AAB230)
#define JILKMGABDAD_GMBEHIKCJKI_OFFSET UNITYSDK_OFFSET(0x15AAB1C0)
#define JILKMGABDAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76FB50)
#define JILKMGABDAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76FB60)
#define JILKMGABDAD___INIT_OFFSET UNITYSDK_OFFSET(0x76FB30)

inline static constexpr unsigned int JILKMGABDAD_TypeDefinitionIndex = 16555;

struct alignas(8) JILKMGABDAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKMGABDAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JILKMGABDAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JILKMGABDAD GMBEHIKCJKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JILKMGABDAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JILKMGABDAD_GMBEHIKCJKI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKMGABDAD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FOOOELOAMKK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOOOELOAMKK&, ::System::Int32&))((::PBYTE)hIl2Cpp + JILKMGABDAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JILKMGABDAD GMBEHIKCJKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JILKMGABDAD EIFONLCJOPG)
	{
		return ((::JILKMGABDAD(*)(::FlatBuffers::ByteBuffer*, ::JILKMGABDAD))((::PBYTE)hIl2Cpp + JILKMGABDAD_GMBEHIKCJKI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKMGABDAD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FOOOELOAMKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOOOELOAMKK&))((::PBYTE)hIl2Cpp + JILKMGABDAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JILKMGABDAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JILKMGABDAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JILKMGABDAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
