#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GMFFJJAMPFJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNHFFAKIDJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNHFFAKIDJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809D60)
#define GNHFFAKIDJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNHFFAKIDJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNHFFAKIDJH_IGNOFIBIIFH_1_OFFSET UNITYSDK_OFFSET(0x1B11B390)
#define GNHFFAKIDJH_IGNOFIBIIFH_OFFSET UNITYSDK_OFFSET(0x1B11B320)
#define GNHFFAKIDJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809D50)
#define GNHFFAKIDJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809D40)
#define GNHFFAKIDJH___INIT_OFFSET UNITYSDK_OFFSET(0x809D20)

inline static constexpr unsigned int GNHFFAKIDJH_TypeDefinitionIndex = 12594;

struct alignas(8) GNHFFAKIDJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNHFFAKIDJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GMFFJJAMPFJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMFFJJAMPFJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GNHFFAKIDJH IGNOFIBIIFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNHFFAKIDJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_IGNOFIBIIFH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GMFFJJAMPFJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMFFJJAMPFJ&))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GNHFFAKIDJH IGNOFIBIIFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNHFFAKIDJH EIFONLCJOPG)
	{
		return ((::GNHFFAKIDJH(*)(::FlatBuffers::ByteBuffer*, ::GNHFFAKIDJH))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_IGNOFIBIIFH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GNHFFAKIDJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNHFFAKIDJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNHFFAKIDJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
