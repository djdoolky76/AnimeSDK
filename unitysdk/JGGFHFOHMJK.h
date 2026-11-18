#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGHGCPMGDBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGGFHFOHMJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JGGFHFOHMJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F9E0)
#define JGGFHFOHMJK_FBBPHADONGI_1_OFFSET UNITYSDK_OFFSET(0x1B630FB0)
#define JGGFHFOHMJK_FBBPHADONGI_OFFSET UNITYSDK_OFFSET(0x1B630F10)
#define JGGFHFOHMJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGGFHFOHMJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JGGFHFOHMJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80FA20)
#define JGGFHFOHMJK___INIT_OFFSET UNITYSDK_OFFSET(0x80F9C0)

inline static constexpr unsigned int JGGFHFOHMJK_TypeDefinitionIndex = 15368;

struct alignas(8) JGGFHFOHMJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGFHFOHMJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JGGFHFOHMJK FBBPHADONGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JGGFHFOHMJK EIFONLCJOPG)
	{
		return ((::JGGFHFOHMJK(*)(::FlatBuffers::ByteBuffer*, ::JGGFHFOHMJK))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_FBBPHADONGI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JGGFHFOHMJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGGFHFOHMJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JGGFHFOHMJK FBBPHADONGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGGFHFOHMJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_FBBPHADONGI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGHGCPMGDBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGHGCPMGDBD&))((::PBYTE)hIl2Cpp + JGGFHFOHMJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
