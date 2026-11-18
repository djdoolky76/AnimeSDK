#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PKLBLDMAEBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDHMEKIJELC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LDHMEKIJELC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8132D0)
#define LDHMEKIJELC_EPOIDKOCLGN_1_OFFSET UNITYSDK_OFFSET(0x1B7EF570)
#define LDHMEKIJELC_EPOIDKOCLGN_OFFSET UNITYSDK_OFFSET(0x1B7EF3D0)
#define LDHMEKIJELC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDHMEKIJELC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LDHMEKIJELC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813310)
#define LDHMEKIJELC___INIT_OFFSET UNITYSDK_OFFSET(0x8132B0)

inline static constexpr unsigned int LDHMEKIJELC_TypeDefinitionIndex = 9487;

struct alignas(8) LDHMEKIJELC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHMEKIJELC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDHMEKIJELC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LDHMEKIJELC EPOIDKOCLGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LDHMEKIJELC EIFONLCJOPG)
	{
		return ((::LDHMEKIJELC(*)(::FlatBuffers::ByteBuffer*, ::LDHMEKIJELC))((::PBYTE)hIl2Cpp + LDHMEKIJELC_EPOIDKOCLGN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHMEKIJELC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PKLBLDMAEBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKLBLDMAEBO&))((::PBYTE)hIl2Cpp + LDHMEKIJELC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LDHMEKIJELC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDHMEKIJELC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDHMEKIJELC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHMEKIJELC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LDHMEKIJELC EPOIDKOCLGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDHMEKIJELC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDHMEKIJELC_EPOIDKOCLGN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
