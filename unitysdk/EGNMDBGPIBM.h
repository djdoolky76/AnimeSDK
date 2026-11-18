#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KDOEAKOKMKI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGNMDBGPIBM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EGNMDBGPIBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3220)
#define EGNMDBGPIBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGNMDBGPIBM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EGNMDBGPIBM_JCJOIBGIBAF_1_OFFSET UNITYSDK_OFFSET(0x17F2B2C0)
#define EGNMDBGPIBM_JCJOIBGIBAF_OFFSET UNITYSDK_OFFSET(0x17F2B250)
#define EGNMDBGPIBM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3200)
#define EGNMDBGPIBM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3210)
#define EGNMDBGPIBM___INIT_OFFSET UNITYSDK_OFFSET(0x7C31E0)

inline static constexpr unsigned int EGNMDBGPIBM_TypeDefinitionIndex = 9210;

struct alignas(8) EGNMDBGPIBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGNMDBGPIBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EGNMDBGPIBM JCJOIBGIBAF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGNMDBGPIBM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_JCJOIBGIBAF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KDOEAKOKMKI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDOEAKOKMKI&, ::System::Int32&))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EGNMDBGPIBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGNMDBGPIBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KDOEAKOKMKI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KDOEAKOKMKI&))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EGNMDBGPIBM JCJOIBGIBAF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EGNMDBGPIBM EIFONLCJOPG)
	{
		return ((::EGNMDBGPIBM(*)(::FlatBuffers::ByteBuffer*, ::EGNMDBGPIBM))((::PBYTE)hIl2Cpp + EGNMDBGPIBM_JCJOIBGIBAF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
