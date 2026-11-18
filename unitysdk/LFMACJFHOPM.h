#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FENLLEGAJGB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFMACJFHOPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LFMACJFHOPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x801DE0)
#define LFMACJFHOPM_CFMHECDCHKI_1_OFFSET UNITYSDK_OFFSET(0x1AAFAAC0)
#define LFMACJFHOPM_CFMHECDCHKI_OFFSET UNITYSDK_OFFSET(0x1AAFAA50)
#define LFMACJFHOPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFMACJFHOPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LFMACJFHOPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x801E20)
#define LFMACJFHOPM___INIT_OFFSET UNITYSDK_OFFSET(0x801DC0)

inline static constexpr unsigned int LFMACJFHOPM_TypeDefinitionIndex = 15529;

struct alignas(8) LFMACJFHOPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACJFHOPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFMACJFHOPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LFMACJFHOPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFMACJFHOPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFMACJFHOPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LFMACJFHOPM CFMHECDCHKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFMACJFHOPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFMACJFHOPM_CFMHECDCHKI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACJFHOPM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LFMACJFHOPM CFMHECDCHKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LFMACJFHOPM EIFONLCJOPG)
	{
		return ((::LFMACJFHOPM(*)(::FlatBuffers::ByteBuffer*, ::LFMACJFHOPM))((::PBYTE)hIl2Cpp + LFMACJFHOPM_CFMHECDCHKI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FENLLEGAJGB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FENLLEGAJGB&))((::PBYTE)hIl2Cpp + LFMACJFHOPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFMACJFHOPM_PPOMNIFACOL_OFFSET))(this);
	}
};
