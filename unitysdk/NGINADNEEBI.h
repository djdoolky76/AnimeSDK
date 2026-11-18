#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHAGPGAKPIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGINADNEEBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NGINADNEEBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A4D0)
#define NGINADNEEBI_COIPFFACLKM_1_OFFSET UNITYSDK_OFFSET(0x1BAA4970)
#define NGINADNEEBI_COIPFFACLKM_OFFSET UNITYSDK_OFFSET(0x1BAA4900)
#define NGINADNEEBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGINADNEEBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGINADNEEBI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A4C0)
#define NGINADNEEBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A4B0)
#define NGINADNEEBI___INIT_OFFSET UNITYSDK_OFFSET(0x81A490)

inline static constexpr unsigned int NGINADNEEBI_TypeDefinitionIndex = 11234;

struct alignas(8) NGINADNEEBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGINADNEEBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGINADNEEBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NGINADNEEBI COIPFFACLKM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGINADNEEBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGINADNEEBI_COIPFFACLKM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGINADNEEBI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NGINADNEEBI COIPFFACLKM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGINADNEEBI EIFONLCJOPG)
	{
		return ((::NGINADNEEBI(*)(::FlatBuffers::ByteBuffer*, ::NGINADNEEBI))((::PBYTE)hIl2Cpp + NGINADNEEBI_COIPFFACLKM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHAGPGAKPIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHAGPGAKPIN&))((::PBYTE)hIl2Cpp + NGINADNEEBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGINADNEEBI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHAGPGAKPIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHAGPGAKPIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + NGINADNEEBI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NGINADNEEBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGINADNEEBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGINADNEEBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
