#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MAACFMEMFJE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKOPEEJPNPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKOPEEJPNPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD990)
#define JKOPEEJPNPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKOPEEJPNPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKOPEEJPNPM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD980)
#define JKOPEEJPNPM_OEMMPKNDAKI_1_OFFSET UNITYSDK_OFFSET(0x1A5F00A0)
#define JKOPEEJPNPM_OEMMPKNDAKI_OFFSET UNITYSDK_OFFSET(0x1A5EFFE0)
#define JKOPEEJPNPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD9D0)
#define JKOPEEJPNPM___INIT_OFFSET UNITYSDK_OFFSET(0x7FD960)

inline static constexpr unsigned int JKOPEEJPNPM_TypeDefinitionIndex = 17376;

struct alignas(8) JKOPEEJPNPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKOPEEJPNPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MAACFMEMFJE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAACFMEMFJE&, ::System::Int32&))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MAACFMEMFJE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAACFMEMFJE&))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JKOPEEJPNPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKOPEEJPNPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JKOPEEJPNPM OEMMPKNDAKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKOPEEJPNPM EIFONLCJOPG)
	{
		return ((::JKOPEEJPNPM(*)(::FlatBuffers::ByteBuffer*, ::JKOPEEJPNPM))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_OEMMPKNDAKI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JKOPEEJPNPM OEMMPKNDAKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKOPEEJPNPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKOPEEJPNPM_OEMMPKNDAKI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
