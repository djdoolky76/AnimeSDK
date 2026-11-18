#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOJIKBHAJNJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOAOBLIEHKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOAOBLIEHKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F5C0)
#define IOAOBLIEHKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOAOBLIEHKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOAOBLIEHKE_OGJGPLIOCPM_1_OFFSET UNITYSDK_OFFSET(0x15A9C410)
#define IOAOBLIEHKE_OGJGPLIOCPM_OFFSET UNITYSDK_OFFSET(0x15A9C310)
#define IOAOBLIEHKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F5B0)
#define IOAOBLIEHKE___INIT_OFFSET UNITYSDK_OFFSET(0x76F590)

inline static constexpr unsigned int IOAOBLIEHKE_TypeDefinitionIndex = 12134;

struct alignas(8) IOAOBLIEHKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOAOBLIEHKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IOAOBLIEHKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOAOBLIEHKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IOAOBLIEHKE OGJGPLIOCPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOAOBLIEHKE EIFONLCJOPG)
	{
		return ((::IOAOBLIEHKE(*)(::FlatBuffers::ByteBuffer*, ::IOAOBLIEHKE))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_OGJGPLIOCPM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOJIKBHAJNJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOJIKBHAJNJ&))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IOAOBLIEHKE OGJGPLIOCPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOAOBLIEHKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOAOBLIEHKE_OGJGPLIOCPM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
