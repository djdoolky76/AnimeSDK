#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHIDKNOBNBI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJOBIIAHEPC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJOBIIAHEPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA330)
#define DJOBIIAHEPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJOBIIAHEPC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJOBIIAHEPC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA380)
#define DJOBIIAHEPC_OFBGBOADOJP_1_OFFSET UNITYSDK_OFFSET(0x1A556C00)
#define DJOBIIAHEPC_OFBGBOADOJP_OFFSET UNITYSDK_OFFSET(0x1A556B90)
#define DJOBIIAHEPC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA370)
#define DJOBIIAHEPC___INIT_OFFSET UNITYSDK_OFFSET(0x7FA310)

inline static constexpr unsigned int DJOBIIAHEPC_TypeDefinitionIndex = 14944;

struct alignas(8) DJOBIIAHEPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJOBIIAHEPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DJOBIIAHEPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJOBIIAHEPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DJOBIIAHEPC OFBGBOADOJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJOBIIAHEPC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_OFBGBOADOJP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DJOBIIAHEPC OFBGBOADOJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJOBIIAHEPC EIFONLCJOPG)
	{
		return ((::DJOBIIAHEPC(*)(::FlatBuffers::ByteBuffer*, ::DJOBIIAHEPC))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_OFBGBOADOJP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHIDKNOBNBI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHIDKNOBNBI&))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NHIDKNOBNBI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHIDKNOBNBI&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOBIIAHEPC_GHKKNCCLPAN_OFFSET))(this);
	}
};
