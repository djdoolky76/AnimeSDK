#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOIPMNDEPFK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEMBPDICKHK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEMBPDICKHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4010)
#define MEMBPDICKHK_BNMGHKNGJPH_1_OFFSET UNITYSDK_OFFSET(0x17FC4A10)
#define MEMBPDICKHK_BNMGHKNGJPH_OFFSET UNITYSDK_OFFSET(0x17FC47B0)
#define MEMBPDICKHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEMBPDICKHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEMBPDICKHK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4050)
#define MEMBPDICKHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4000)
#define MEMBPDICKHK___INIT_OFFSET UNITYSDK_OFFSET(0x7C3FE0)

inline static constexpr unsigned int MEMBPDICKHK_TypeDefinitionIndex = 13161;

struct alignas(8) MEMBPDICKHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMBPDICKHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEMBPDICKHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMBPDICKHK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MEMBPDICKHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEMBPDICKHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEMBPDICKHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MEMBPDICKHK BNMGHKNGJPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEMBPDICKHK EIFONLCJOPG)
	{
		return ((::MEMBPDICKHK(*)(::FlatBuffers::ByteBuffer*, ::MEMBPDICKHK))((::PBYTE)hIl2Cpp + MEMBPDICKHK_BNMGHKNGJPH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOIPMNDEPFK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOIPMNDEPFK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MEMBPDICKHK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MEMBPDICKHK BNMGHKNGJPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEMBPDICKHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEMBPDICKHK_BNMGHKNGJPH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMBPDICKHK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOIPMNDEPFK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOIPMNDEPFK&))((::PBYTE)hIl2Cpp + MEMBPDICKHK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
