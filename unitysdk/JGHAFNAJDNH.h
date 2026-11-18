#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKEJGLONGCA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGHAFNAJDNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JGHAFNAJDNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D56B0)
#define JGHAFNAJDNH_BJAGMBLLGCO_1_OFFSET UNITYSDK_OFFSET(0x18BC8E10)
#define JGHAFNAJDNH_BJAGMBLLGCO_OFFSET UNITYSDK_OFFSET(0x18BC8DA0)
#define JGHAFNAJDNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGHAFNAJDNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JGHAFNAJDNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D56F0)
#define JGHAFNAJDNH___INIT_OFFSET UNITYSDK_OFFSET(0x7D5690)

inline static constexpr unsigned int JGHAFNAJDNH_TypeDefinitionIndex = 16549;

struct alignas(8) JGHAFNAJDNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGHAFNAJDNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JGHAFNAJDNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGHAFNAJDNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKEJGLONGCA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKEJGLONGCA&))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JGHAFNAJDNH BJAGMBLLGCO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGHAFNAJDNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_BJAGMBLLGCO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JGHAFNAJDNH BJAGMBLLGCO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JGHAFNAJDNH EIFONLCJOPG)
	{
		return ((::JGHAFNAJDNH(*)(::FlatBuffers::ByteBuffer*, ::JGHAFNAJDNH))((::PBYTE)hIl2Cpp + JGHAFNAJDNH_BJAGMBLLGCO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
