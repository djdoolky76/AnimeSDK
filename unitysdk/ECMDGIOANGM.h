#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EEHPMPHGMIJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECMDGIOANGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ECMDGIOANGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5CA0)
#define ECMDGIOANGM_CFGOPGGCNPG_1_OFFSET UNITYSDK_OFFSET(0x1A1976F0)
#define ECMDGIOANGM_CFGOPGGCNPG_OFFSET UNITYSDK_OFFSET(0x1A197650)
#define ECMDGIOANGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECMDGIOANGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ECMDGIOANGM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5CE0)
#define ECMDGIOANGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5C90)
#define ECMDGIOANGM___INIT_OFFSET UNITYSDK_OFFSET(0x7F5C70)

inline static constexpr unsigned int ECMDGIOANGM_TypeDefinitionIndex = 13682;

struct alignas(8) ECMDGIOANGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDGIOANGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMDGIOANGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDGIOANGM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ECMDGIOANGM CFGOPGGCNPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ECMDGIOANGM EIFONLCJOPG)
	{
		return ((::ECMDGIOANGM(*)(::FlatBuffers::ByteBuffer*, ::ECMDGIOANGM))((::PBYTE)hIl2Cpp + ECMDGIOANGM_CFGOPGGCNPG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ECMDGIOANGM CFGOPGGCNPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECMDGIOANGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMDGIOANGM_CFGOPGGCNPG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ECMDGIOANGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECMDGIOANGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMDGIOANGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDGIOANGM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EEHPMPHGMIJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEHPMPHGMIJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + ECMDGIOANGM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EEHPMPHGMIJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEHPMPHGMIJ&))((::PBYTE)hIl2Cpp + ECMDGIOANGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
