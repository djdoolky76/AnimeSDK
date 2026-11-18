#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NNKMPBDCMDB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLLNFHGBMFC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLLNFHGBMFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x992050)
#define PLLNFHGBMFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLLNFHGBMFC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLLNFHGBMFC_LBLHBBIELFD_1_OFFSET UNITYSDK_OFFSET(0x1FA52770)
#define PLLNFHGBMFC_LBLHBBIELFD_OFFSET UNITYSDK_OFFSET(0x1FA52710)
#define PLLNFHGBMFC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9920A0)
#define PLLNFHGBMFC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x992090)
#define PLLNFHGBMFC___INIT_OFFSET UNITYSDK_OFFSET(0x992030)

inline static constexpr unsigned int PLLNFHGBMFC_TypeDefinitionIndex = 9504;

struct alignas(8) PLLNFHGBMFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLLNFHGBMFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PLLNFHGBMFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLLNFHGBMFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NNKMPBDCMDB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNKMPBDCMDB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PLLNFHGBMFC LBLHBBIELFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLLNFHGBMFC EIFONLCJOPG)
	{
		return ((::PLLNFHGBMFC(*)(::FlatBuffers::ByteBuffer*, ::PLLNFHGBMFC))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_LBLHBBIELFD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PLLNFHGBMFC LBLHBBIELFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLLNFHGBMFC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_LBLHBBIELFD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NNKMPBDCMDB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNKMPBDCMDB&))((::PBYTE)hIl2Cpp + PLLNFHGBMFC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
