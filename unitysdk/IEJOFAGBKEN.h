#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFMLDHCIJCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEJOFAGBKEN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IEJOFAGBKEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A5E0)
#define IEJOFAGBKEN_CEFOKONHJPA_1_OFFSET UNITYSDK_OFFSET(0x16106100)
#define IEJOFAGBKEN_CEFOKONHJPA_OFFSET UNITYSDK_OFFSET(0x16106090)
#define IEJOFAGBKEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IEJOFAGBKEN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IEJOFAGBKEN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A620)
#define IEJOFAGBKEN___INIT_OFFSET UNITYSDK_OFFSET(0x77A5C0)

inline static constexpr unsigned int IEJOFAGBKEN_TypeDefinitionIndex = 15316;

struct alignas(8) IEJOFAGBKEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEJOFAGBKEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IEJOFAGBKEN CEFOKONHJPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEJOFAGBKEN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_CEFOKONHJPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IEJOFAGBKEN CEFOKONHJPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IEJOFAGBKEN EIFONLCJOPG)
	{
		return ((::IEJOFAGBKEN(*)(::FlatBuffers::ByteBuffer*, ::IEJOFAGBKEN))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_CEFOKONHJPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IEJOFAGBKEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEJOFAGBKEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFMLDHCIJCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFMLDHCIJCC&))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJOFAGBKEN_PPOMNIFACOL_OFFSET))(this);
	}
};
