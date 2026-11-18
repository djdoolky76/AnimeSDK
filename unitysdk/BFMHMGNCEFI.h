#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFMHMGNCEFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C15B0)
#define BFMHMGNCEFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFMHMGNCEFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFMHMGNCEFI_JLOGKECGNBM_1_OFFSET UNITYSDK_OFFSET(0x17EF1870)
#define BFMHMGNCEFI_JLOGKECGNBM_OFFSET UNITYSDK_OFFSET(0x17EF1800)
#define BFMHMGNCEFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C15F0)
#define BFMHMGNCEFI___INIT_OFFSET UNITYSDK_OFFSET(0x7C1590)

inline static constexpr unsigned int BFMHMGNCEFI_TypeDefinitionIndex = 14306;

struct alignas(8) BFMHMGNCEFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMHMGNCEFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFMHMGNCEFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BFMHMGNCEFI JLOGKECGNBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFMHMGNCEFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFMHMGNCEFI_JLOGKECGNBM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BFMHMGNCEFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFMHMGNCEFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFMHMGNCEFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMHMGNCEFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BFMHMGNCEFI JLOGKECGNBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFMHMGNCEFI EIFONLCJOPG)
	{
		return ((::BFMHMGNCEFI(*)(::FlatBuffers::ByteBuffer*, ::BFMHMGNCEFI))((::PBYTE)hIl2Cpp + BFMHMGNCEFI_JLOGKECGNBM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMHMGNCEFI_GHKKNCCLPAN_OFFSET))(this);
	}
};
