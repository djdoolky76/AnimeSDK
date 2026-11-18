#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FBPMKEOJKNN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEIPPDJECLD_AGJANPGGCGK_1_OFFSET UNITYSDK_OFFSET(0x1CCEAE30)
#define NEIPPDJECLD_AGJANPGGCGK_OFFSET UNITYSDK_OFFSET(0x1CCEADC0)
#define NEIPPDJECLD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NEIPPDJECLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85DA50)
#define NEIPPDJECLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEIPPDJECLD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NEIPPDJECLD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85DA40)
#define NEIPPDJECLD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85DA90)
#define NEIPPDJECLD___INIT_OFFSET UNITYSDK_OFFSET(0x85DA20)

inline static constexpr unsigned int NEIPPDJECLD_TypeDefinitionIndex = 12668;

struct alignas(8) NEIPPDJECLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIPPDJECLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEIPPDJECLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FBPMKEOJKNN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBPMKEOJKNN&, ::System::Int32&))((::PBYTE)hIl2Cpp + NEIPPDJECLD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NEIPPDJECLD AGJANPGGCGK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEIPPDJECLD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEIPPDJECLD_AGJANPGGCGK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FBPMKEOJKNN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBPMKEOJKNN&))((::PBYTE)hIl2Cpp + NEIPPDJECLD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NEIPPDJECLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEIPPDJECLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEIPPDJECLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIPPDJECLD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NEIPPDJECLD AGJANPGGCGK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NEIPPDJECLD EIFONLCJOPG)
	{
		return ((::NEIPPDJECLD(*)(::FlatBuffers::ByteBuffer*, ::NEIPPDJECLD))((::PBYTE)hIl2Cpp + NEIPPDJECLD_AGJANPGGCGK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIPPDJECLD_PPOMNIFACOL_OFFSET))(this);
	}
};
