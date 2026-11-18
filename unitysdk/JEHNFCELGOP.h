#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPDCFFJFDBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEHNFCELGOP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEHNFCELGOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F890)
#define JEHNFCELGOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEHNFCELGOP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEHNFCELGOP_JJBHKLNNNFM_1_OFFSET UNITYSDK_OFFSET(0x15AA53C0)
#define JEHNFCELGOP_JJBHKLNNNFM_OFFSET UNITYSDK_OFFSET(0x15AA5350)
#define JEHNFCELGOP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F8E0)
#define JEHNFCELGOP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F8D0)
#define JEHNFCELGOP___INIT_OFFSET UNITYSDK_OFFSET(0x76F870)

inline static constexpr unsigned int JEHNFCELGOP_TypeDefinitionIndex = 9822;

struct alignas(8) JEHNFCELGOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHNFCELGOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEHNFCELGOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JEHNFCELGOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEHNFCELGOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEHNFCELGOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JEHNFCELGOP JJBHKLNNNFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEHNFCELGOP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEHNFCELGOP_JJBHKLNNNFM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPDCFFJFDBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPDCFFJFDBE&))((::PBYTE)hIl2Cpp + JEHNFCELGOP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHNFCELGOP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHNFCELGOP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LPDCFFJFDBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPDCFFJFDBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEHNFCELGOP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JEHNFCELGOP JJBHKLNNNFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEHNFCELGOP EIFONLCJOPG)
	{
		return ((::JEHNFCELGOP(*)(::FlatBuffers::ByteBuffer*, ::JEHNFCELGOP))((::PBYTE)hIl2Cpp + JEHNFCELGOP_JJBHKLNNNFM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
