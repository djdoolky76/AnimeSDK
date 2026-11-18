#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GJAIMGLCDNK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INCBGPLIKKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define INCBGPLIKKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F490)
#define INCBGPLIKKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INCBGPLIKKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define INCBGPLIKKD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F480)
#define INCBGPLIKKD_OJKLGBJFMGP_1_OFFSET UNITYSDK_OFFSET(0x15A9B650)
#define INCBGPLIKKD_OJKLGBJFMGP_OFFSET UNITYSDK_OFFSET(0x15A9B5B0)
#define INCBGPLIKKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F470)
#define INCBGPLIKKD___INIT_OFFSET UNITYSDK_OFFSET(0x76F450)

inline static constexpr unsigned int INCBGPLIKKD_TypeDefinitionIndex = 16794;

struct alignas(8) INCBGPLIKKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCBGPLIKKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INCBGPLIKKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCBGPLIKKD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GJAIMGLCDNK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GJAIMGLCDNK&, ::System::Int32&))((::PBYTE)hIl2Cpp + INCBGPLIKKD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCBGPLIKKD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GJAIMGLCDNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GJAIMGLCDNK&))((::PBYTE)hIl2Cpp + INCBGPLIKKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::INCBGPLIKKD OJKLGBJFMGP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::INCBGPLIKKD EIFONLCJOPG)
	{
		return ((::INCBGPLIKKD(*)(::FlatBuffers::ByteBuffer*, ::INCBGPLIKKD))((::PBYTE)hIl2Cpp + INCBGPLIKKD_OJKLGBJFMGP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::INCBGPLIKKD OJKLGBJFMGP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INCBGPLIKKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INCBGPLIKKD_OJKLGBJFMGP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::INCBGPLIKKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INCBGPLIKKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INCBGPLIKKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
