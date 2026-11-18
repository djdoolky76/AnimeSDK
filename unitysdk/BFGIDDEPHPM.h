#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPCGPPIMLLE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFGIDDEPHPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFGIDDEPHPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9690)
#define BFGIDDEPHPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFGIDDEPHPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFGIDDEPHPM_IAGJFEMHCNC_1_OFFSET UNITYSDK_OFFSET(0x1A530A50)
#define BFGIDDEPHPM_IAGJFEMHCNC_OFFSET UNITYSDK_OFFSET(0x1A5309E0)
#define BFGIDDEPHPM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F96D0)
#define BFGIDDEPHPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9680)
#define BFGIDDEPHPM___INIT_OFFSET UNITYSDK_OFFSET(0x7F9660)

inline static constexpr unsigned int BFGIDDEPHPM_TypeDefinitionIndex = 15055;

struct alignas(8) BFGIDDEPHPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGIDDEPHPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPCGPPIMLLE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPCGPPIMLLE&))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BFGIDDEPHPM IAGJFEMHCNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFGIDDEPHPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_IAGJFEMHCNC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BFGIDDEPHPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFGIDDEPHPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HPCGPPIMLLE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPCGPPIMLLE&, ::System::Int32&))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BFGIDDEPHPM IAGJFEMHCNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFGIDDEPHPM EIFONLCJOPG)
	{
		return ((::BFGIDDEPHPM(*)(::FlatBuffers::ByteBuffer*, ::BFGIDDEPHPM))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_IAGJFEMHCNC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGIDDEPHPM_GHKKNCCLPAN_OFFSET))(this);
	}
};
