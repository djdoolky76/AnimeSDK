#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMPLHDBCEJF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDBFLGMDPEF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDBFLGMDPEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACE90)
#define CDBFLGMDPEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDBFLGMDPEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDBFLGMDPEF_GJHFAIOIOLP_1_OFFSET UNITYSDK_OFFSET(0x17764700)
#define CDBFLGMDPEF_GJHFAIOIOLP_OFFSET UNITYSDK_OFFSET(0x17764690)
#define CDBFLGMDPEF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACE70)
#define CDBFLGMDPEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACE80)
#define CDBFLGMDPEF___INIT_OFFSET UNITYSDK_OFFSET(0x7ACE50)

inline static constexpr unsigned int CDBFLGMDPEF_TypeDefinitionIndex = 11415;

struct alignas(8) CDBFLGMDPEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDBFLGMDPEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CDBFLGMDPEF GJHFAIOIOLP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDBFLGMDPEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_GJHFAIOIOLP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMPLHDBCEJF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMPLHDBCEJF&))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMPLHDBCEJF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMPLHDBCEJF&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CDBFLGMDPEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDBFLGMDPEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CDBFLGMDPEF GJHFAIOIOLP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDBFLGMDPEF EIFONLCJOPG)
	{
		return ((::CDBFLGMDPEF(*)(::FlatBuffers::ByteBuffer*, ::CDBFLGMDPEF))((::PBYTE)hIl2Cpp + CDBFLGMDPEF_GJHFAIOIOLP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
