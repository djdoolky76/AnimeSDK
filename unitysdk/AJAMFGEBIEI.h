#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJNCIFMOLCF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJAMFGEBIEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AJAMFGEBIEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806BA0)
#define AJAMFGEBIEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJAMFGEBIEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AJAMFGEBIEI_HNOKPMHHOPC_1_OFFSET UNITYSDK_OFFSET(0x1ADAA880)
#define AJAMFGEBIEI_HNOKPMHHOPC_OFFSET UNITYSDK_OFFSET(0x1ADAA810)
#define AJAMFGEBIEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806B90)
#define AJAMFGEBIEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806B80)
#define AJAMFGEBIEI___INIT_OFFSET UNITYSDK_OFFSET(0x806B60)

inline static constexpr unsigned int AJAMFGEBIEI_TypeDefinitionIndex = 13679;

struct alignas(8) AJAMFGEBIEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJAMFGEBIEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJNCIFMOLCF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJNCIFMOLCF&))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AJAMFGEBIEI HNOKPMHHOPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJAMFGEBIEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_HNOKPMHHOPC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AJAMFGEBIEI HNOKPMHHOPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AJAMFGEBIEI EIFONLCJOPG)
	{
		return ((::AJAMFGEBIEI(*)(::FlatBuffers::ByteBuffer*, ::AJAMFGEBIEI))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_HNOKPMHHOPC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJNCIFMOLCF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJNCIFMOLCF&, ::System::Int32&))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::AJAMFGEBIEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJAMFGEBIEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJAMFGEBIEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
