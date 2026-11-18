#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FENMNFKBEME.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGEHPKFKFAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KGEHPKFKFAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8EB0)
#define KGEHPKFKFAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGEHPKFKFAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KGEHPKFKFAC_MMEIHPHMGNK_1_OFFSET UNITYSDK_OFFSET(0x174963A0)
#define KGEHPKFKFAC_MMEIHPHMGNK_OFFSET UNITYSDK_OFFSET(0x17496300)
#define KGEHPKFKFAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8EA0)
#define KGEHPKFKFAC___INIT_OFFSET UNITYSDK_OFFSET(0x7A8E80)

inline static constexpr unsigned int KGEHPKFKFAC_TypeDefinitionIndex = 9726;

struct alignas(8) KGEHPKFKFAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGEHPKFKFAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FENMNFKBEME& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FENMNFKBEME&))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KGEHPKFKFAC MMEIHPHMGNK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KGEHPKFKFAC EIFONLCJOPG)
	{
		return ((::KGEHPKFKFAC(*)(::FlatBuffers::ByteBuffer*, ::KGEHPKFKFAC))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_MMEIHPHMGNK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KGEHPKFKFAC MMEIHPHMGNK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGEHPKFKFAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_MMEIHPHMGNK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KGEHPKFKFAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGEHPKFKFAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGEHPKFKFAC_GHKKNCCLPAN_OFFSET))(this);
	}
};
