#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOEKLGLGLBP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCMLPOFBNIB_AEKGPGKGMNB_1_OFFSET UNITYSDK_OFFSET(0x17BF6960)
#define HCMLPOFBNIB_AEKGPGKGMNB_OFFSET UNITYSDK_OFFSET(0x17BEB450)
#define HCMLPOFBNIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCMLPOFBNIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B53B0)
#define HCMLPOFBNIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCMLPOFBNIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCMLPOFBNIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B53A0)
#define HCMLPOFBNIB___INIT_OFFSET UNITYSDK_OFFSET(0x7B5380)

inline static constexpr unsigned int HCMLPOFBNIB_TypeDefinitionIndex = 15624;

struct alignas(8) HCMLPOFBNIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCMLPOFBNIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HCMLPOFBNIB AEKGPGKGMNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCMLPOFBNIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_AEKGPGKGMNB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HCMLPOFBNIB AEKGPGKGMNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCMLPOFBNIB EIFONLCJOPG)
	{
		return ((::HCMLPOFBNIB(*)(::FlatBuffers::ByteBuffer*, ::HCMLPOFBNIB))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_AEKGPGKGMNB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOEKLGLGLBP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOEKLGLGLBP&))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HCMLPOFBNIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCMLPOFBNIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMLPOFBNIB_GHKKNCCLPAN_OFFSET))(this);
	}
};
