#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HGNPHBLJLDD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCBDJHHBGHM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OCBDJHHBGHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4AB0)
#define OCBDJHHBGHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCBDJHHBGHM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OCBDJHHBGHM_PPCJFEPODBA_1_OFFSET UNITYSDK_OFFSET(0x17FDCCB0)
#define OCBDJHHBGHM_PPCJFEPODBA_OFFSET UNITYSDK_OFFSET(0x17FDCB10)
#define OCBDJHHBGHM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4AA0)
#define OCBDJHHBGHM___INIT_OFFSET UNITYSDK_OFFSET(0x7C4A80)

inline static constexpr unsigned int OCBDJHHBGHM_TypeDefinitionIndex = 11016;

struct alignas(8) OCBDJHHBGHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBDJHHBGHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OCBDJHHBGHM PPCJFEPODBA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OCBDJHHBGHM EIFONLCJOPG)
	{
		return ((::OCBDJHHBGHM(*)(::FlatBuffers::ByteBuffer*, ::OCBDJHHBGHM))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_PPCJFEPODBA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::OCBDJHHBGHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCBDJHHBGHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HGNPHBLJLDD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HGNPHBLJLDD&))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OCBDJHHBGHM PPCJFEPODBA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCBDJHHBGHM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_PPCJFEPODBA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBDJHHBGHM_GHKKNCCLPAN_OFFSET))(this);
	}
};
