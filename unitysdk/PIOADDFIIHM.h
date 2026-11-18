#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOEMHNKAAKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIOADDFIIHM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PIOADDFIIHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806430)
#define PIOADDFIIHM_CLAAHCOBJCC_1_OFFSET UNITYSDK_OFFSET(0x1AD98BE0)
#define PIOADDFIIHM_CLAAHCOBJCC_OFFSET UNITYSDK_OFFSET(0x1AD98AA0)
#define PIOADDFIIHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIOADDFIIHM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PIOADDFIIHM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806470)
#define PIOADDFIIHM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806420)
#define PIOADDFIIHM___INIT_OFFSET UNITYSDK_OFFSET(0x806400)

inline static constexpr unsigned int PIOADDFIIHM_TypeDefinitionIndex = 16446;

struct alignas(8) PIOADDFIIHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOADDFIIHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIOADDFIIHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOADDFIIHM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PIOADDFIIHM CLAAHCOBJCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PIOADDFIIHM EIFONLCJOPG)
	{
		return ((::PIOADDFIIHM(*)(::FlatBuffers::ByteBuffer*, ::PIOADDFIIHM))((::PBYTE)hIl2Cpp + PIOADDFIIHM_CLAAHCOBJCC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOEMHNKAAKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOEMHNKAAKL&))((::PBYTE)hIl2Cpp + PIOADDFIIHM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PIOADDFIIHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIOADDFIIHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIOADDFIIHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOADDFIIHM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PIOADDFIIHM CLAAHCOBJCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIOADDFIIHM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIOADDFIIHM_CLAAHCOBJCC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOEMHNKAAKL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOEMHNKAAKL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PIOADDFIIHM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
