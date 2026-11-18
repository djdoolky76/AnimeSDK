#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KAPCPIDPDNK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNBKDMLODMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNBKDMLODMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813B50)
#define FNBKDMLODMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNBKDMLODMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNBKDMLODMG_KAKLJGCKNJF_1_OFFSET UNITYSDK_OFFSET(0x1B864060)
#define FNBKDMLODMG_KAKLJGCKNJF_OFFSET UNITYSDK_OFFSET(0x1B863FF0)
#define FNBKDMLODMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813B90)
#define FNBKDMLODMG___INIT_OFFSET UNITYSDK_OFFSET(0x813B30)

inline static constexpr unsigned int FNBKDMLODMG_TypeDefinitionIndex = 9817;

struct alignas(8) FNBKDMLODMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBKDMLODMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNBKDMLODMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FNBKDMLODMG KAKLJGCKNJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNBKDMLODMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNBKDMLODMG_KAKLJGCKNJF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FNBKDMLODMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNBKDMLODMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNBKDMLODMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBKDMLODMG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KAPCPIDPDNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KAPCPIDPDNK&))((::PBYTE)hIl2Cpp + FNBKDMLODMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBKDMLODMG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FNBKDMLODMG KAKLJGCKNJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNBKDMLODMG EIFONLCJOPG)
	{
		return ((::FNBKDMLODMG(*)(::FlatBuffers::ByteBuffer*, ::FNBKDMLODMG))((::PBYTE)hIl2Cpp + FNBKDMLODMG_KAKLJGCKNJF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
