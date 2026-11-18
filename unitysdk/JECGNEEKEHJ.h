#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KHKFIFCGOPG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JECGNEEKEHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JECGNEEKEHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8950)
#define JECGNEEKEHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JECGNEEKEHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JECGNEEKEHJ_KPODEFAKFCO_1_OFFSET UNITYSDK_OFFSET(0x17487F80)
#define JECGNEEKEHJ_KPODEFAKFCO_OFFSET UNITYSDK_OFFSET(0x17487F10)
#define JECGNEEKEHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8990)
#define JECGNEEKEHJ___INIT_OFFSET UNITYSDK_OFFSET(0x7A8930)

inline static constexpr unsigned int JECGNEEKEHJ_TypeDefinitionIndex = 15098;

struct alignas(8) JECGNEEKEHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JECGNEEKEHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JECGNEEKEHJ KPODEFAKFCO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JECGNEEKEHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_KPODEFAKFCO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JECGNEEKEHJ KPODEFAKFCO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JECGNEEKEHJ EIFONLCJOPG)
	{
		return ((::JECGNEEKEHJ(*)(::FlatBuffers::ByteBuffer*, ::JECGNEEKEHJ))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_KPODEFAKFCO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JECGNEEKEHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JECGNEEKEHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KHKFIFCGOPG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KHKFIFCGOPG&))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECGNEEKEHJ_PPOMNIFACOL_OFFSET))(this);
	}
};
