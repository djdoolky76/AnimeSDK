#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJODHHBGFAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PACEEGFJMHF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PACEEGFJMHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6C10)
#define PACEEGFJMHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PACEEGFJMHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PACEEGFJMHF_GKENOABOEKG_1_OFFSET UNITYSDK_OFFSET(0x17371730)
#define PACEEGFJMHF_GKENOABOEKG_OFFSET UNITYSDK_OFFSET(0x173716C0)
#define PACEEGFJMHF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6C00)
#define PACEEGFJMHF___INIT_OFFSET UNITYSDK_OFFSET(0x7A6BE0)

inline static constexpr unsigned int PACEEGFJMHF_TypeDefinitionIndex = 11428;

struct alignas(8) PACEEGFJMHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACEEGFJMHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACEEGFJMHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HJODHHBGFAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HJODHHBGFAN&))((::PBYTE)hIl2Cpp + PACEEGFJMHF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACEEGFJMHF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PACEEGFJMHF GKENOABOEKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PACEEGFJMHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACEEGFJMHF_GKENOABOEKG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACEEGFJMHF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PACEEGFJMHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PACEEGFJMHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACEEGFJMHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PACEEGFJMHF GKENOABOEKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PACEEGFJMHF EIFONLCJOPG)
	{
		return ((::PACEEGFJMHF(*)(::FlatBuffers::ByteBuffer*, ::PACEEGFJMHF))((::PBYTE)hIl2Cpp + PACEEGFJMHF_GKENOABOEKG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
