#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCBBDPAAIPI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBOPJAHGNOJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBOPJAHGNOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E060)
#define IBOPJAHGNOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBOPJAHGNOJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBOPJAHGNOJ_KAIHHCHOJFN_1_OFFSET UNITYSDK_OFFSET(0x1B4E93E0)
#define IBOPJAHGNOJ_KAIHHCHOJFN_OFFSET UNITYSDK_OFFSET(0x1B4E9370)
#define IBOPJAHGNOJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E050)
#define IBOPJAHGNOJ___INIT_OFFSET UNITYSDK_OFFSET(0x80E030)

inline static constexpr unsigned int IBOPJAHGNOJ_TypeDefinitionIndex = 15179;

struct alignas(8) IBOPJAHGNOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IBOPJAHGNOJ KAIHHCHOJFN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBOPJAHGNOJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_KAIHHCHOJFN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OCBBDPAAIPI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCBBDPAAIPI&))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IBOPJAHGNOJ KAIHHCHOJFN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBOPJAHGNOJ EIFONLCJOPG)
	{
		return ((::IBOPJAHGNOJ(*)(::FlatBuffers::ByteBuffer*, ::IBOPJAHGNOJ))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_KAIHHCHOJFN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IBOPJAHGNOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBOPJAHGNOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBOPJAHGNOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
