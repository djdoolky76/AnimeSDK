#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MFEJINILJFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMKIANLDMMO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMKIANLDMMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F54D0)
#define CMKIANLDMMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMKIANLDMMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMKIANLDMMO_GMDBFHKDIOI_1_OFFSET UNITYSDK_OFFSET(0x1A182240)
#define CMKIANLDMMO_GMDBFHKDIOI_OFFSET UNITYSDK_OFFSET(0x1A1821D0)
#define CMKIANLDMMO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5510)
#define CMKIANLDMMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5520)
#define CMKIANLDMMO___INIT_OFFSET UNITYSDK_OFFSET(0x7F54B0)

inline static constexpr unsigned int CMKIANLDMMO_TypeDefinitionIndex = 9648;

struct alignas(8) CMKIANLDMMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKIANLDMMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMKIANLDMMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CMKIANLDMMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMKIANLDMMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMKIANLDMMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MFEJINILJFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFEJINILJFP&))((::PBYTE)hIl2Cpp + CMKIANLDMMO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MFEJINILJFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MFEJINILJFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + CMKIANLDMMO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CMKIANLDMMO GMDBFHKDIOI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMKIANLDMMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMKIANLDMMO_GMDBFHKDIOI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKIANLDMMO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKIANLDMMO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CMKIANLDMMO GMDBFHKDIOI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMKIANLDMMO EIFONLCJOPG)
	{
		return ((::CMKIANLDMMO(*)(::FlatBuffers::ByteBuffer*, ::CMKIANLDMMO))((::PBYTE)hIl2Cpp + CMKIANLDMMO_GMDBFHKDIOI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
