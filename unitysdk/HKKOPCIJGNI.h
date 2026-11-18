#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BBAOKPAKNCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKKOPCIJGNI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKKOPCIJGNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8121C0)
#define HKKOPCIJGNI_ENFIPNNCOHG_1_OFFSET UNITYSDK_OFFSET(0x1B7C6960)
#define HKKOPCIJGNI_ENFIPNNCOHG_OFFSET UNITYSDK_OFFSET(0x1B7C68F0)
#define HKKOPCIJGNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKKOPCIJGNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKKOPCIJGNI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8121A0)
#define HKKOPCIJGNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8121B0)
#define HKKOPCIJGNI___INIT_OFFSET UNITYSDK_OFFSET(0x812180)

inline static constexpr unsigned int HKKOPCIJGNI_TypeDefinitionIndex = 12221;

struct alignas(8) HKKOPCIJGNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKOPCIJGNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BBAOKPAKNCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBAOKPAKNCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BBAOKPAKNCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBAOKPAKNCB&))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HKKOPCIJGNI ENFIPNNCOHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKKOPCIJGNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_ENFIPNNCOHG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HKKOPCIJGNI ENFIPNNCOHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKKOPCIJGNI EIFONLCJOPG)
	{
		return ((::HKKOPCIJGNI(*)(::FlatBuffers::ByteBuffer*, ::HKKOPCIJGNI))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_ENFIPNNCOHG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HKKOPCIJGNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKKOPCIJGNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKOPCIJGNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
