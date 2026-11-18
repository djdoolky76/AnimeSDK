#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LKMPKLMOFCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKDMGCKJOPD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FKDMGCKJOPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817B20)
#define FKDMGCKJOPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKDMGCKJOPD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FKDMGCKJOPD_KEADAJPHLJL_1_OFFSET UNITYSDK_OFFSET(0x1B9C75A0)
#define FKDMGCKJOPD_KEADAJPHLJL_OFFSET UNITYSDK_OFFSET(0x1B9C7530)
#define FKDMGCKJOPD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817B10)
#define FKDMGCKJOPD___INIT_OFFSET UNITYSDK_OFFSET(0x817AF0)

inline static constexpr unsigned int FKDMGCKJOPD_TypeDefinitionIndex = 15826;

struct alignas(8) FKDMGCKJOPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKDMGCKJOPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LKMPKLMOFCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LKMPKLMOFCI&))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FKDMGCKJOPD KEADAJPHLJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKDMGCKJOPD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_KEADAJPHLJL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FKDMGCKJOPD KEADAJPHLJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FKDMGCKJOPD EIFONLCJOPG)
	{
		return ((::FKDMGCKJOPD(*)(::FlatBuffers::ByteBuffer*, ::FKDMGCKJOPD))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_KEADAJPHLJL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FKDMGCKJOPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKDMGCKJOPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKDMGCKJOPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
