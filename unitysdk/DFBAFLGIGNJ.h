#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIDJOMFHAHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFBAFLGIGNJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFBAFLGIGNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1D10)
#define DFBAFLGIGNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFBAFLGIGNJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFBAFLGIGNJ_MHFGJHNBFNF_1_OFFSET UNITYSDK_OFFSET(0x17F184D0)
#define DFBAFLGIGNJ_MHFGJHNBFNF_OFFSET UNITYSDK_OFFSET(0x17F18460)
#define DFBAFLGIGNJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1D00)
#define DFBAFLGIGNJ___INIT_OFFSET UNITYSDK_OFFSET(0x7C1CE0)

inline static constexpr unsigned int DFBAFLGIGNJ_TypeDefinitionIndex = 11101;

struct alignas(8) DFBAFLGIGNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DFBAFLGIGNJ MHFGJHNBFNF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFBAFLGIGNJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_MHFGJHNBFNF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFBAFLGIGNJ MHFGJHNBFNF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFBAFLGIGNJ EIFONLCJOPG)
	{
		return ((::DFBAFLGIGNJ(*)(::FlatBuffers::ByteBuffer*, ::DFBAFLGIGNJ))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_MHFGJHNBFNF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIDJOMFHAHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIDJOMFHAHI&))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DFBAFLGIGNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFBAFLGIGNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFBAFLGIGNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
