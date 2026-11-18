#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CKFLPNJEEDH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APBOOCFPPNA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define APBOOCFPPNA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4B20)
#define APBOOCFPPNA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APBOOCFPPNA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APBOOCFPPNA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F4B60)
#define APBOOCFPPNA_NDOKOBBCPEO_1_OFFSET UNITYSDK_OFFSET(0x1A167CE0)
#define APBOOCFPPNA_NDOKOBBCPEO_OFFSET UNITYSDK_OFFSET(0x1A167C70)
#define APBOOCFPPNA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4B10)
#define APBOOCFPPNA___INIT_OFFSET UNITYSDK_OFFSET(0x7F4AF0)

inline static constexpr unsigned int APBOOCFPPNA_TypeDefinitionIndex = 14555;

struct alignas(8) APBOOCFPPNA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBOOCFPPNA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APBOOCFPPNA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APBOOCFPPNA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBOOCFPPNA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CKFLPNJEEDH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKFLPNJEEDH&))((::PBYTE)hIl2Cpp + APBOOCFPPNA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::APBOOCFPPNA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APBOOCFPPNA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APBOOCFPPNA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CKFLPNJEEDH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKFLPNJEEDH&, ::System::Int32&))((::PBYTE)hIl2Cpp + APBOOCFPPNA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::APBOOCFPPNA NDOKOBBCPEO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APBOOCFPPNA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APBOOCFPPNA_NDOKOBBCPEO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::APBOOCFPPNA NDOKOBBCPEO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APBOOCFPPNA EIFONLCJOPG)
	{
		return ((::APBOOCFPPNA(*)(::FlatBuffers::ByteBuffer*, ::APBOOCFPPNA))((::PBYTE)hIl2Cpp + APBOOCFPPNA_NDOKOBBCPEO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
