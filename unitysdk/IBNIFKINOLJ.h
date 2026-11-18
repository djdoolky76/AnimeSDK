#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBIKEIOHDPP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBNIFKINOLJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBNIFKINOLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD1B0)
#define IBNIFKINOLJ_CMFPBMJEMAH_1_OFFSET UNITYSDK_OFFSET(0x1A5D4AC0)
#define IBNIFKINOLJ_CMFPBMJEMAH_OFFSET UNITYSDK_OFFSET(0x1A5D4920)
#define IBNIFKINOLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBNIFKINOLJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBNIFKINOLJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD1A0)
#define IBNIFKINOLJ___INIT_OFFSET UNITYSDK_OFFSET(0x7FD180)

inline static constexpr unsigned int IBNIFKINOLJ_TypeDefinitionIndex = 12143;

struct alignas(8) IBNIFKINOLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBNIFKINOLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBNIFKINOLJ CMFPBMJEMAH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBNIFKINOLJ EIFONLCJOPG)
	{
		return ((::IBNIFKINOLJ(*)(::FlatBuffers::ByteBuffer*, ::IBNIFKINOLJ))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_CMFPBMJEMAH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CBIKEIOHDPP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBIKEIOHDPP&))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IBNIFKINOLJ CMFPBMJEMAH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBNIFKINOLJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_CMFPBMJEMAH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IBNIFKINOLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBNIFKINOLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBNIFKINOLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
