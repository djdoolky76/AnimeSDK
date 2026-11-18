#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFOCDLOGMBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMNIKMCIEBP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMNIKMCIEBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807980)
#define DMNIKMCIEBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMNIKMCIEBP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMNIKMCIEBP_JHPKAKJAKIF_1_OFFSET UNITYSDK_OFFSET(0x1ADCAF30)
#define DMNIKMCIEBP_JHPKAKJAKIF_OFFSET UNITYSDK_OFFSET(0x1ADCAEC0)
#define DMNIKMCIEBP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807970)
#define DMNIKMCIEBP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807960)
#define DMNIKMCIEBP___INIT_OFFSET UNITYSDK_OFFSET(0x807940)

inline static constexpr unsigned int DMNIKMCIEBP_TypeDefinitionIndex = 9330;

struct alignas(8) DMNIKMCIEBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMNIKMCIEBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BFOCDLOGMBH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFOCDLOGMBH&, ::System::Int32&))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DMNIKMCIEBP JHPKAKJAKIF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMNIKMCIEBP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_JHPKAKJAKIF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFOCDLOGMBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFOCDLOGMBH&))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DMNIKMCIEBP JHPKAKJAKIF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMNIKMCIEBP EIFONLCJOPG)
	{
		return ((::DMNIKMCIEBP(*)(::FlatBuffers::ByteBuffer*, ::DMNIKMCIEBP))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_JHPKAKJAKIF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DMNIKMCIEBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMNIKMCIEBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMNIKMCIEBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
