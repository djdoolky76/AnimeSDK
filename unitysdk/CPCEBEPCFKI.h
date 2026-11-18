#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPCEBEPCFKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816CD0)
#define CPCEBEPCFKI_DANPBBBKIJF_1_OFFSET UNITYSDK_OFFSET(0x1B99FF60)
#define CPCEBEPCFKI_DANPBBBKIJF_OFFSET UNITYSDK_OFFSET(0x1B99FEF0)
#define CPCEBEPCFKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPCEBEPCFKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CPCEBEPCFKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816CC0)
#define CPCEBEPCFKI___INIT_OFFSET UNITYSDK_OFFSET(0x816CA0)

inline static constexpr unsigned int CPCEBEPCFKI_TypeDefinitionIndex = 9175;

struct alignas(8) CPCEBEPCFKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCEBEPCFKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCEBEPCFKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCEBEPCFKI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CPCEBEPCFKI DANPBBBKIJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPCEBEPCFKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCEBEPCFKI_DANPBBBKIJF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CPCEBEPCFKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPCEBEPCFKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPCEBEPCFKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCEBEPCFKI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CPCEBEPCFKI DANPBBBKIJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CPCEBEPCFKI EIFONLCJOPG)
	{
		return ((::CPCEBEPCFKI(*)(::FlatBuffers::ByteBuffer*, ::CPCEBEPCFKI))((::PBYTE)hIl2Cpp + CPCEBEPCFKI_DANPBBBKIJF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
