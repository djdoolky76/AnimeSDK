#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLHLLJLOGBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMBECGBLGLE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OMBECGBLGLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E440)
#define OMBECGBLGLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMBECGBLGLE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OMBECGBLGLE_NOHJLGNABPJ_1_OFFSET UNITYSDK_OFFSET(0x1CD024F0)
#define OMBECGBLGLE_NOHJLGNABPJ_OFFSET UNITYSDK_OFFSET(0x1CD02350)
#define OMBECGBLGLE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E480)
#define OMBECGBLGLE___INIT_OFFSET UNITYSDK_OFFSET(0x85E420)

inline static constexpr unsigned int OMBECGBLGLE_TypeDefinitionIndex = 17359;

struct alignas(8) OMBECGBLGLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBECGBLGLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMBECGBLGLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OMBECGBLGLE NOHJLGNABPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OMBECGBLGLE EIFONLCJOPG)
	{
		return ((::OMBECGBLGLE(*)(::FlatBuffers::ByteBuffer*, ::OMBECGBLGLE))((::PBYTE)hIl2Cpp + OMBECGBLGLE_NOHJLGNABPJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBECGBLGLE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLHLLJLOGBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLHLLJLOGBJ&))((::PBYTE)hIl2Cpp + OMBECGBLGLE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OMBECGBLGLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMBECGBLGLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMBECGBLGLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OMBECGBLGLE NOHJLGNABPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMBECGBLGLE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMBECGBLGLE_NOHJLGNABPJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBECGBLGLE_PPOMNIFACOL_OFFSET))(this);
	}
};
