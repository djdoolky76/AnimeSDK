#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IDNEKBMBOLN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCMDOFEPHKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCMDOFEPHKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8103C0)
#define LCMDOFEPHKO_BNLIFNOLDGE_1_OFFSET UNITYSDK_OFFSET(0x1B64A5C0)
#define LCMDOFEPHKO_BNLIFNOLDGE_OFFSET UNITYSDK_OFFSET(0x1B64A300)
#define LCMDOFEPHKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCMDOFEPHKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCMDOFEPHKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x810400)
#define LCMDOFEPHKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810410)
#define LCMDOFEPHKO___INIT_OFFSET UNITYSDK_OFFSET(0x8103A0)

inline static constexpr unsigned int LCMDOFEPHKO_TypeDefinitionIndex = 12152;

struct alignas(8) LCMDOFEPHKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCMDOFEPHKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LCMDOFEPHKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCMDOFEPHKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LCMDOFEPHKO BNLIFNOLDGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCMDOFEPHKO EIFONLCJOPG)
	{
		return ((::LCMDOFEPHKO(*)(::FlatBuffers::ByteBuffer*, ::LCMDOFEPHKO))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_BNLIFNOLDGE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IDNEKBMBOLN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDNEKBMBOLN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IDNEKBMBOLN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDNEKBMBOLN&))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LCMDOFEPHKO BNLIFNOLDGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCMDOFEPHKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCMDOFEPHKO_BNLIFNOLDGE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
