#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HKOFCMCICKC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAGGFPGIPEN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FAGGFPGIPEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E33E0)
#define FAGGFPGIPEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FAGGFPGIPEN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FAGGFPGIPEN_NOHLDOHEIKL_1_OFFSET UNITYSDK_OFFSET(0x19526010)
#define FAGGFPGIPEN_NOHLDOHEIKL_OFFSET UNITYSDK_OFFSET(0x19525FA0)
#define FAGGFPGIPEN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3420)
#define FAGGFPGIPEN___INIT_OFFSET UNITYSDK_OFFSET(0x7E33C0)

inline static constexpr unsigned int FAGGFPGIPEN_TypeDefinitionIndex = 9400;

struct alignas(8) FAGGFPGIPEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAGGFPGIPEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HKOFCMCICKC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HKOFCMCICKC&))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FAGGFPGIPEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAGGFPGIPEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FAGGFPGIPEN NOHLDOHEIKL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAGGFPGIPEN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_NOHLDOHEIKL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FAGGFPGIPEN NOHLDOHEIKL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FAGGFPGIPEN EIFONLCJOPG)
	{
		return ((::FAGGFPGIPEN(*)(::FlatBuffers::ByteBuffer*, ::FAGGFPGIPEN))((::PBYTE)hIl2Cpp + FAGGFPGIPEN_NOHLDOHEIKL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
