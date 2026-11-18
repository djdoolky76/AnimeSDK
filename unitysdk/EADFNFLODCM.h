#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DDFCOOPPONA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EADFNFLODCM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EADFNFLODCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EAAD0)
#define EADFNFLODCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EADFNFLODCM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EADFNFLODCM_LBBDPEOPBDJ_1_OFFSET UNITYSDK_OFFSET(0x19AE05D0)
#define EADFNFLODCM_LBBDPEOPBDJ_OFFSET UNITYSDK_OFFSET(0x19AE0530)
#define EADFNFLODCM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EAAC0)
#define EADFNFLODCM___INIT_OFFSET UNITYSDK_OFFSET(0x7EAAA0)

inline static constexpr unsigned int EADFNFLODCM_TypeDefinitionIndex = 15787;

struct alignas(8) EADFNFLODCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADFNFLODCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EADFNFLODCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EADFNFLODCM LBBDPEOPBDJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EADFNFLODCM EIFONLCJOPG)
	{
		return ((::EADFNFLODCM(*)(::FlatBuffers::ByteBuffer*, ::EADFNFLODCM))((::PBYTE)hIl2Cpp + EADFNFLODCM_LBBDPEOPBDJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EADFNFLODCM LBBDPEOPBDJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EADFNFLODCM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EADFNFLODCM_LBBDPEOPBDJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DDFCOOPPONA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDFCOOPPONA&))((::PBYTE)hIl2Cpp + EADFNFLODCM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADFNFLODCM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EADFNFLODCM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EADFNFLODCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EADFNFLODCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EADFNFLODCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
