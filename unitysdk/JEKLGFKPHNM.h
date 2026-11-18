#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEBMMADFIFF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEKLGFKPHNM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEKLGFKPHNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF850)
#define JEKLGFKPHNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEKLGFKPHNM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEKLGFKPHNM_IDGCPGKLMBH_1_OFFSET UNITYSDK_OFFSET(0x193594B0)
#define JEKLGFKPHNM_IDGCPGKLMBH_OFFSET UNITYSDK_OFFSET(0x19359440)
#define JEKLGFKPHNM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF830)
#define JEKLGFKPHNM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF840)
#define JEKLGFKPHNM___INIT_OFFSET UNITYSDK_OFFSET(0x7DF810)

inline static constexpr unsigned int JEKLGFKPHNM_TypeDefinitionIndex = 16263;

struct alignas(8) JEKLGFKPHNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKLGFKPHNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DEBMMADFIFF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEBMMADFIFF&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JEKLGFKPHNM IDGCPGKLMBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEKLGFKPHNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_IDGCPGKLMBH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JEKLGFKPHNM IDGCPGKLMBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEKLGFKPHNM EIFONLCJOPG)
	{
		return ((::JEKLGFKPHNM(*)(::FlatBuffers::ByteBuffer*, ::JEKLGFKPHNM))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_IDGCPGKLMBH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEBMMADFIFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEBMMADFIFF&))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JEKLGFKPHNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEKLGFKPHNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEKLGFKPHNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
