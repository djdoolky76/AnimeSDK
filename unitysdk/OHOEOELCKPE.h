#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGGJLILHGIL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHOEOELCKPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OHOEOELCKPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E850)
#define OHOEOELCKPE_BLADDPMNBBM_1_OFFSET UNITYSDK_OFFSET(0x1BF7BB90)
#define OHOEOELCKPE_BLADDPMNBBM_OFFSET UNITYSDK_OFFSET(0x1BF7BB20)
#define OHOEOELCKPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHOEOELCKPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OHOEOELCKPE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E890)
#define OHOEOELCKPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E840)
#define OHOEOELCKPE___INIT_OFFSET UNITYSDK_OFFSET(0x81E820)

inline static constexpr unsigned int OHOEOELCKPE_TypeDefinitionIndex = 13060;

struct alignas(8) OHOEOELCKPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOELCKPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHOEOELCKPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOELCKPE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CGGJLILHGIL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGGJLILHGIL&))((::PBYTE)hIl2Cpp + OHOEOELCKPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OHOEOELCKPE BLADDPMNBBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHOEOELCKPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHOEOELCKPE_BLADDPMNBBM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOEOELCKPE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OHOEOELCKPE BLADDPMNBBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OHOEOELCKPE EIFONLCJOPG)
	{
		return ((::OHOEOELCKPE(*)(::FlatBuffers::ByteBuffer*, ::OHOEOELCKPE))((::PBYTE)hIl2Cpp + OHOEOELCKPE_BLADDPMNBBM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OHOEOELCKPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHOEOELCKPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHOEOELCKPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CGGJLILHGIL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGGJLILHGIL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OHOEOELCKPE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
