#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHKLMDOOCJK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGDJECLECNE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MGDJECLECNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819FF0)
#define MGDJECLECNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGDJECLECNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGDJECLECNE_HKCILCBILDL_1_OFFSET UNITYSDK_OFFSET(0x1BA93BB0)
#define MGDJECLECNE_HKCILCBILDL_OFFSET UNITYSDK_OFFSET(0x1BA93B40)
#define MGDJECLECNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819FE0)
#define MGDJECLECNE___INIT_OFFSET UNITYSDK_OFFSET(0x819FC0)

inline static constexpr unsigned int MGDJECLECNE_TypeDefinitionIndex = 13291;

struct alignas(8) MGDJECLECNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDJECLECNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGDJECLECNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDJECLECNE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MGDJECLECNE HKCILCBILDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGDJECLECNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGDJECLECNE_HKCILCBILDL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDJECLECNE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MGDJECLECNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGDJECLECNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGDJECLECNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MGDJECLECNE HKCILCBILDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGDJECLECNE EIFONLCJOPG)
	{
		return ((::MGDJECLECNE(*)(::FlatBuffers::ByteBuffer*, ::MGDJECLECNE))((::PBYTE)hIl2Cpp + MGDJECLECNE_HKCILCBILDL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHKLMDOOCJK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHKLMDOOCJK&))((::PBYTE)hIl2Cpp + MGDJECLECNE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
