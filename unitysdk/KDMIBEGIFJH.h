#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BBCLKNNJGIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDMIBEGIFJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDMIBEGIFJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5A60)
#define KDMIBEGIFJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDMIBEGIFJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDMIBEGIFJH_KLLNBNKOFOO_1_OFFSET UNITYSDK_OFFSET(0x18BD5D60)
#define KDMIBEGIFJH_KLLNBNKOFOO_OFFSET UNITYSDK_OFFSET(0x18BD5CF0)
#define KDMIBEGIFJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D5A50)
#define KDMIBEGIFJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5A40)
#define KDMIBEGIFJH___INIT_OFFSET UNITYSDK_OFFSET(0x7D5A20)

inline static constexpr unsigned int KDMIBEGIFJH_TypeDefinitionIndex = 13215;

struct alignas(8) KDMIBEGIFJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDMIBEGIFJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KDMIBEGIFJH KLLNBNKOFOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDMIBEGIFJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_KLLNBNKOFOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BBCLKNNJGIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBCLKNNJGIF&))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BBCLKNNJGIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBCLKNNJGIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KDMIBEGIFJH KLLNBNKOFOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDMIBEGIFJH EIFONLCJOPG)
	{
		return ((::KDMIBEGIFJH(*)(::FlatBuffers::ByteBuffer*, ::KDMIBEGIFJH))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_KLLNBNKOFOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KDMIBEGIFJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDMIBEGIFJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMIBEGIFJH_GHKKNCCLPAN_OFFSET))(this);
	}
};
