#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DHNMONBIKNI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNBFNDFHMBA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNBFNDFHMBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3A50)
#define HNBFNDFHMBA_ENGNEHIEMHG_1_OFFSET UNITYSDK_OFFSET(0x19537E20)
#define HNBFNDFHMBA_ENGNEHIEMHG_OFFSET UNITYSDK_OFFSET(0x19537CC0)
#define HNBFNDFHMBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNBFNDFHMBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNBFNDFHMBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3A90)
#define HNBFNDFHMBA___INIT_OFFSET UNITYSDK_OFFSET(0x7E3A30)

inline static constexpr unsigned int HNBFNDFHMBA_TypeDefinitionIndex = 10352;

struct alignas(8) HNBFNDFHMBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNBFNDFHMBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HNBFNDFHMBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNBFNDFHMBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HNBFNDFHMBA ENGNEHIEMHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNBFNDFHMBA EIFONLCJOPG)
	{
		return ((::HNBFNDFHMBA(*)(::FlatBuffers::ByteBuffer*, ::HNBFNDFHMBA))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_ENGNEHIEMHG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DHNMONBIKNI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHNMONBIKNI&))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HNBFNDFHMBA ENGNEHIEMHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNBFNDFHMBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNBFNDFHMBA_ENGNEHIEMHG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
