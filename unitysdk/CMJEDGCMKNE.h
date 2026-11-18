#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ILEAPIAABBN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMJEDGCMKNE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMJEDGCMKNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD150)
#define CMJEDGCMKNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMJEDGCMKNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMJEDGCMKNE_KMICPDNJKJE_1_OFFSET UNITYSDK_OFFSET(0x17773B90)
#define CMJEDGCMKNE_KMICPDNJKJE_OFFSET UNITYSDK_OFFSET(0x17773B20)
#define CMJEDGCMKNE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AD140)
#define CMJEDGCMKNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD190)
#define CMJEDGCMKNE___INIT_OFFSET UNITYSDK_OFFSET(0x7AD120)

inline static constexpr unsigned int CMJEDGCMKNE_TypeDefinitionIndex = 15633;

struct alignas(8) CMJEDGCMKNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMJEDGCMKNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CMJEDGCMKNE KMICPDNJKJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMJEDGCMKNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_KMICPDNJKJE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ILEAPIAABBN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ILEAPIAABBN&))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ILEAPIAABBN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ILEAPIAABBN&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CMJEDGCMKNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMJEDGCMKNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMJEDGCMKNE KMICPDNJKJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMJEDGCMKNE EIFONLCJOPG)
	{
		return ((::CMJEDGCMKNE(*)(::FlatBuffers::ByteBuffer*, ::CMJEDGCMKNE))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_KMICPDNJKJE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJEDGCMKNE_PPOMNIFACOL_OFFSET))(this);
	}
};
