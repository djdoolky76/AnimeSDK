#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ICKGCKKNMKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHFGOCLHGEI_BCIFFCJKFNC_1_OFFSET UNITYSDK_OFFSET(0x1A18E580)
#define DHFGOCLHGEI_BCIFFCJKFNC_OFFSET UNITYSDK_OFFSET(0x1A18E510)
#define DHFGOCLHGEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHFGOCLHGEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F58F0)
#define DHFGOCLHGEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHFGOCLHGEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHFGOCLHGEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F58E0)
#define DHFGOCLHGEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F58D0)
#define DHFGOCLHGEI___INIT_OFFSET UNITYSDK_OFFSET(0x7F58B0)

inline static constexpr unsigned int DHFGOCLHGEI_TypeDefinitionIndex = 14782;

struct alignas(8) DHFGOCLHGEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHFGOCLHGEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ICKGCKKNMKF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICKGCKKNMKF&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DHFGOCLHGEI BCIFFCJKFNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHFGOCLHGEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_BCIFFCJKFNC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DHFGOCLHGEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHFGOCLHGEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DHFGOCLHGEI BCIFFCJKFNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHFGOCLHGEI EIFONLCJOPG)
	{
		return ((::DHFGOCLHGEI(*)(::FlatBuffers::ByteBuffer*, ::DHFGOCLHGEI))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_BCIFFCJKFNC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ICKGCKKNMKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ICKGCKKNMKF&))((::PBYTE)hIl2Cpp + DHFGOCLHGEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
