#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPAJKKJCBLD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOFKELNKKNC_AGENJHLFNMO_1_OFFSET UNITYSDK_OFFSET(0x1B4F19E0)
#define IOFKELNKKNC_AGENJHLFNMO_OFFSET UNITYSDK_OFFSET(0x1B4F1970)
#define IOFKELNKKNC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOFKELNKKNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E610)
#define IOFKELNKKNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOFKELNKKNC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOFKELNKKNC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E600)
#define IOFKELNKKNC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E5F0)
#define IOFKELNKKNC___INIT_OFFSET UNITYSDK_OFFSET(0x80E5D0)

inline static constexpr unsigned int IOFKELNKKNC_TypeDefinitionIndex = 11220;

struct alignas(8) IOFKELNKKNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKELNKKNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOFKELNKKNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKELNKKNC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IOFKELNKKNC AGENJHLFNMO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOFKELNKKNC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOFKELNKKNC_AGENJHLFNMO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKELNKKNC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IOFKELNKKNC AGENJHLFNMO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOFKELNKKNC EIFONLCJOPG)
	{
		return ((::IOFKELNKKNC(*)(::FlatBuffers::ByteBuffer*, ::IOFKELNKKNC))((::PBYTE)hIl2Cpp + IOFKELNKKNC_AGENJHLFNMO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPAJKKJCBLD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPAJKKJCBLD&))((::PBYTE)hIl2Cpp + IOFKELNKKNC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 GEKJHKKDIOH, ::System::Int32 IMDIPJPAFDG, ::IPAJKKJCBLD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::IPAJKKJCBLD&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOFKELNKKNC_LLGCOCLACNA_OFFSET))(this, GEKJHKKDIOH, IMDIPJPAFDG, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IOFKELNKKNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOFKELNKKNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOFKELNKKNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
