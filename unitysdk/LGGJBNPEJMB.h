#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LLNFGJEDBKH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGGJBNPEJMB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGGJBNPEJMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81ED60)
#define LGGJBNPEJMB_DPAMMCBIFDG_1_OFFSET UNITYSDK_OFFSET(0x1C0770B0)
#define LGGJBNPEJMB_DPAMMCBIFDG_OFFSET UNITYSDK_OFFSET(0x1C076E10)
#define LGGJBNPEJMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGGJBNPEJMB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGGJBNPEJMB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81ED50)
#define LGGJBNPEJMB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81ED40)
#define LGGJBNPEJMB___INIT_OFFSET UNITYSDK_OFFSET(0x81ED20)

inline static constexpr unsigned int LGGJBNPEJMB_TypeDefinitionIndex = 10741;

struct alignas(8) LGGJBNPEJMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGGJBNPEJMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LGGJBNPEJMB DPAMMCBIFDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGGJBNPEJMB EIFONLCJOPG)
	{
		return ((::LGGJBNPEJMB(*)(::FlatBuffers::ByteBuffer*, ::LGGJBNPEJMB))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_DPAMMCBIFDG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LLNFGJEDBKH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLNFGJEDBKH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LLNFGJEDBKH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLNFGJEDBKH&))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LGGJBNPEJMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGGJBNPEJMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LGGJBNPEJMB DPAMMCBIFDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGGJBNPEJMB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGGJBNPEJMB_DPAMMCBIFDG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
