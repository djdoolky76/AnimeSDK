#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ECFMFIBPFDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGNLMOOAPFE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGNLMOOAPFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3670)
#define LGNLMOOAPFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGNLMOOAPFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGNLMOOAPFE_JOEKGDBKONA_1_OFFSET UNITYSDK_OFFSET(0x17FB18E0)
#define LGNLMOOAPFE_JOEKGDBKONA_OFFSET UNITYSDK_OFFSET(0x17FB1870)
#define LGNLMOOAPFE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3660)
#define LGNLMOOAPFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3650)
#define LGNLMOOAPFE___INIT_OFFSET UNITYSDK_OFFSET(0x7C3630)

inline static constexpr unsigned int LGNLMOOAPFE_TypeDefinitionIndex = 17004;

struct alignas(8) LGNLMOOAPFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGNLMOOAPFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LGNLMOOAPFE JOEKGDBKONA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGNLMOOAPFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_JOEKGDBKONA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LGNLMOOAPFE JOEKGDBKONA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGNLMOOAPFE EIFONLCJOPG)
	{
		return ((::LGNLMOOAPFE(*)(::FlatBuffers::ByteBuffer*, ::LGNLMOOAPFE))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_JOEKGDBKONA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ECFMFIBPFDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECFMFIBPFDM&))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ECFMFIBPFDM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECFMFIBPFDM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LGNLMOOAPFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGNLMOOAPFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGNLMOOAPFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
