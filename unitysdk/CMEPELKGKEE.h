#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBNOIAAMAMG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMEPELKGKEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMEPELKGKEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1AD0)
#define CMEPELKGKEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMEPELKGKEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMEPELKGKEE_IDEFIMKBNMD_1_OFFSET UNITYSDK_OFFSET(0x17F14B50)
#define CMEPELKGKEE_IDEFIMKBNMD_OFFSET UNITYSDK_OFFSET(0x17F14AE0)
#define CMEPELKGKEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1AB0)
#define CMEPELKGKEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1AC0)
#define CMEPELKGKEE___INIT_OFFSET UNITYSDK_OFFSET(0x7C1A90)

inline static constexpr unsigned int CMEPELKGKEE_TypeDefinitionIndex = 15195;

struct alignas(8) CMEPELKGKEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPELKGKEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMEPELKGKEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GBNOIAAMAMG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBNOIAAMAMG&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMEPELKGKEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPELKGKEE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::CMEPELKGKEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMEPELKGKEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMEPELKGKEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBNOIAAMAMG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBNOIAAMAMG&))((::PBYTE)hIl2Cpp + CMEPELKGKEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CMEPELKGKEE IDEFIMKBNMD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMEPELKGKEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMEPELKGKEE_IDEFIMKBNMD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMEPELKGKEE IDEFIMKBNMD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMEPELKGKEE EIFONLCJOPG)
	{
		return ((::CMEPELKGKEE(*)(::FlatBuffers::ByteBuffer*, ::CMEPELKGKEE))((::PBYTE)hIl2Cpp + CMEPELKGKEE_IDEFIMKBNMD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEPELKGKEE_GHKKNCCLPAN_OFFSET))(this);
	}
};
