#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPKKEMLMLPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7586D0)
#define JPKKEMLMLPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPKKEMLMLPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JPKKEMLMLPM_LAJNMIHIBHP_1_OFFSET UNITYSDK_OFFSET(0x152FB2C0)
#define JPKKEMLMLPM_LAJNMIHIBHP_OFFSET UNITYSDK_OFFSET(0x152FB260)
#define JPKKEMLMLPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758710)
#define JPKKEMLMLPM___INIT_OFFSET UNITYSDK_OFFSET(0x7586B0)

inline static constexpr unsigned int JPKKEMLMLPM_TypeDefinitionIndex = 12878;

struct alignas(8) JPKKEMLMLPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKKEMLMLPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPKKEMLMLPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JPKKEMLMLPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPKKEMLMLPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPKKEMLMLPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKKEMLMLPM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKKEMLMLPM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JPKKEMLMLPM LAJNMIHIBHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JPKKEMLMLPM EIFONLCJOPG)
	{
		return ((::JPKKEMLMLPM(*)(::FlatBuffers::ByteBuffer*, ::JPKKEMLMLPM))((::PBYTE)hIl2Cpp + JPKKEMLMLPM_LAJNMIHIBHP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JPKKEMLMLPM LAJNMIHIBHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPKKEMLMLPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPKKEMLMLPM_LAJNMIHIBHP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
