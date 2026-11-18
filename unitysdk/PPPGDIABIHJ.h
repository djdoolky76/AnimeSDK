#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OPMKHNOMOMP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPPGDIABIHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PPPGDIABIHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x99B7E0)
#define PPPGDIABIHJ_CDGCENGHJIL_1_OFFSET UNITYSDK_OFFSET(0x1FC26D90)
#define PPPGDIABIHJ_CDGCENGHJIL_OFFSET UNITYSDK_OFFSET(0x1FC26D30)
#define PPPGDIABIHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPPGDIABIHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PPPGDIABIHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x99B820)
#define PPPGDIABIHJ___INIT_OFFSET UNITYSDK_OFFSET(0x99B7C0)

inline static constexpr unsigned int PPPGDIABIHJ_TypeDefinitionIndex = 16522;

struct alignas(8) PPPGDIABIHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPPGDIABIHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OPMKHNOMOMP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OPMKHNOMOMP&))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PPPGDIABIHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPPGDIABIHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PPPGDIABIHJ CDGCENGHJIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PPPGDIABIHJ EIFONLCJOPG)
	{
		return ((::PPPGDIABIHJ(*)(::FlatBuffers::ByteBuffer*, ::PPPGDIABIHJ))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_CDGCENGHJIL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PPPGDIABIHJ CDGCENGHJIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPPGDIABIHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_CDGCENGHJIL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPGDIABIHJ_PPOMNIFACOL_OFFSET))(this);
	}
};
