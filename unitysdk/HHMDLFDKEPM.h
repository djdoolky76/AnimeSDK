#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PICGFACOKEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHMDLFDKEPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHMDLFDKEPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x757000)
#define HHMDLFDKEPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHMDLFDKEPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHMDLFDKEPM_LLFPMBKBKEK_1_OFFSET UNITYSDK_OFFSET(0x152DBF50)
#define HHMDLFDKEPM_LLFPMBKBKEK_OFFSET UNITYSDK_OFFSET(0x152DBEE0)
#define HHMDLFDKEPM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756FF0)
#define HHMDLFDKEPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x757040)
#define HHMDLFDKEPM___INIT_OFFSET UNITYSDK_OFFSET(0x756FD0)

inline static constexpr unsigned int HHMDLFDKEPM_TypeDefinitionIndex = 15305;

struct alignas(8) HHMDLFDKEPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMDLFDKEPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HHMDLFDKEPM LLFPMBKBKEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHMDLFDKEPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_LLFPMBKBKEK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PICGFACOKEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PICGFACOKEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HHMDLFDKEPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHMDLFDKEPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HHMDLFDKEPM LLFPMBKBKEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHMDLFDKEPM EIFONLCJOPG)
	{
		return ((::HHMDLFDKEPM(*)(::FlatBuffers::ByteBuffer*, ::HHMDLFDKEPM))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_LLFPMBKBKEK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PICGFACOKEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PICGFACOKEJ&))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMDLFDKEPM_GHKKNCCLPAN_OFFSET))(this);
	}
};
