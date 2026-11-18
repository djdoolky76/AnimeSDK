#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGJBMGADNFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBEFPMNAOHO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KBEFPMNAOHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4680)
#define KBEFPMNAOHO_EKKANNADHMH_1_OFFSET UNITYSDK_OFFSET(0x19554940)
#define KBEFPMNAOHO_EKKANNADHMH_OFFSET UNITYSDK_OFFSET(0x19554800)
#define KBEFPMNAOHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBEFPMNAOHO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KBEFPMNAOHO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E46C0)
#define KBEFPMNAOHO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4670)
#define KBEFPMNAOHO___INIT_OFFSET UNITYSDK_OFFSET(0x7E4650)

inline static constexpr unsigned int KBEFPMNAOHO_TypeDefinitionIndex = 13112;

struct alignas(8) KBEFPMNAOHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBEFPMNAOHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBEFPMNAOHO EKKANNADHMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KBEFPMNAOHO EIFONLCJOPG)
	{
		return ((::KBEFPMNAOHO(*)(::FlatBuffers::ByteBuffer*, ::KBEFPMNAOHO))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_EKKANNADHMH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGJBMGADNFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGJBMGADNFI&))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KBEFPMNAOHO EKKANNADHMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBEFPMNAOHO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_EKKANNADHMH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KBEFPMNAOHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBEFPMNAOHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGJBMGADNFI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGJBMGADNFI&, ::System::Int32&))((::PBYTE)hIl2Cpp + KBEFPMNAOHO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
