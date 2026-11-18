#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABDDBENJPKA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOJKAAKGOFM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HOJKAAKGOFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8122F0)
#define HOJKAAKGOFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOJKAAKGOFM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HOJKAAKGOFM_GJAPFLKEBLK_1_OFFSET UNITYSDK_OFFSET(0x1B7C86F0)
#define HOJKAAKGOFM_GJAPFLKEBLK_OFFSET UNITYSDK_OFFSET(0x1B7C83F0)
#define HOJKAAKGOFM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812330)
#define HOJKAAKGOFM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812340)
#define HOJKAAKGOFM___INIT_OFFSET UNITYSDK_OFFSET(0x8122D0)

inline static constexpr unsigned int HOJKAAKGOFM_TypeDefinitionIndex = 11117;

struct alignas(8) HOJKAAKGOFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOJKAAKGOFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HOJKAAKGOFM GJAPFLKEBLK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HOJKAAKGOFM EIFONLCJOPG)
	{
		return ((::HOJKAAKGOFM(*)(::FlatBuffers::ByteBuffer*, ::HOJKAAKGOFM))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_GJAPFLKEBLK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HOJKAAKGOFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOJKAAKGOFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ABDDBENJPKA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABDDBENJPKA&))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ABDDBENJPKA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABDDBENJPKA&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HOJKAAKGOFM GJAPFLKEBLK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOJKAAKGOFM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_GJAPFLKEBLK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJKAAKGOFM_PPOMNIFACOL_OFFSET))(this);
	}
};
