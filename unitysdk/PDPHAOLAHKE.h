#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMLNFHLPIJC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDPHAOLAHKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PDPHAOLAHKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABC40)
#define PDPHAOLAHKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDPHAOLAHKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PDPHAOLAHKE_OPHBJKAEJBL_1_OFFSET UNITYSDK_OFFSET(0x1D002060)
#define PDPHAOLAHKE_OPHBJKAEJBL_OFFSET UNITYSDK_OFFSET(0x1D001F20)
#define PDPHAOLAHKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABC80)
#define PDPHAOLAHKE___INIT_OFFSET UNITYSDK_OFFSET(0x8ABC20)

inline static constexpr unsigned int PDPHAOLAHKE_TypeDefinitionIndex = 11385;

struct alignas(8) PDPHAOLAHKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDPHAOLAHKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PDPHAOLAHKE OPHBJKAEJBL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PDPHAOLAHKE EIFONLCJOPG)
	{
		return ((::PDPHAOLAHKE(*)(::FlatBuffers::ByteBuffer*, ::PDPHAOLAHKE))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_OPHBJKAEJBL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMLNFHLPIJC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMLNFHLPIJC&))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PDPHAOLAHKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDPHAOLAHKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PDPHAOLAHKE OPHBJKAEJBL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDPHAOLAHKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_OPHBJKAEJBL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPHAOLAHKE_GHKKNCCLPAN_OFFSET))(this);
	}
};
