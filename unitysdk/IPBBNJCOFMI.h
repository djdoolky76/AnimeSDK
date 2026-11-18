#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IJCHIGNEMDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPBBNJCOFMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IPBBNJCOFMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D52E0)
#define IPBBNJCOFMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPBBNJCOFMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IPBBNJCOFMI_HIIPDOMENFJ_1_OFFSET UNITYSDK_OFFSET(0x18BC45F0)
#define IPBBNJCOFMI_HIIPDOMENFJ_OFFSET UNITYSDK_OFFSET(0x18BC4550)
#define IPBBNJCOFMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D5320)
#define IPBBNJCOFMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D52D0)
#define IPBBNJCOFMI___INIT_OFFSET UNITYSDK_OFFSET(0x7D52B0)

inline static constexpr unsigned int IPBBNJCOFMI_TypeDefinitionIndex = 16330;

struct alignas(8) IPBBNJCOFMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPBBNJCOFMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IJCHIGNEMDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJCHIGNEMDJ&))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IPBBNJCOFMI HIIPDOMENFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IPBBNJCOFMI EIFONLCJOPG)
	{
		return ((::IPBBNJCOFMI(*)(::FlatBuffers::ByteBuffer*, ::IPBBNJCOFMI))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_HIIPDOMENFJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IPBBNJCOFMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPBBNJCOFMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IPBBNJCOFMI HIIPDOMENFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPBBNJCOFMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_HIIPDOMENFJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IJCHIGNEMDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJCHIGNEMDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + IPBBNJCOFMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
