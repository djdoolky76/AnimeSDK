#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLGIMBLNHOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMDGLAPFEKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KMDGLAPFEKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F100)
#define KMDGLAPFEKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMDGLAPFEKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KMDGLAPFEKD_GMEOKMMBFGM_1_OFFSET UNITYSDK_OFFSET(0x1B50C520)
#define KMDGLAPFEKD_GMEOKMMBFGM_OFFSET UNITYSDK_OFFSET(0x1B50C4B0)
#define KMDGLAPFEKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F0F0)
#define KMDGLAPFEKD___INIT_OFFSET UNITYSDK_OFFSET(0x80F0D0)

inline static constexpr unsigned int KMDGLAPFEKD_TypeDefinitionIndex = 15563;

struct alignas(8) KMDGLAPFEKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDGLAPFEKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JLGIMBLNHOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JLGIMBLNHOD&))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KMDGLAPFEKD GMEOKMMBFGM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMDGLAPFEKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_GMEOKMMBFGM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KMDGLAPFEKD GMEOKMMBFGM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KMDGLAPFEKD EIFONLCJOPG)
	{
		return ((::KMDGLAPFEKD(*)(::FlatBuffers::ByteBuffer*, ::KMDGLAPFEKD))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_GMEOKMMBFGM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KMDGLAPFEKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMDGLAPFEKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDGLAPFEKD_GHKKNCCLPAN_OFFSET))(this);
	}
};
