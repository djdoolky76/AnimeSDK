#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PAFJCMDGOGA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GALDCCMAMNN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GALDCCMAMNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC3E0)
#define GALDCCMAMNN_FABKECILNLA_1_OFFSET UNITYSDK_OFFSET(0x1A5AE1B0)
#define GALDCCMAMNN_FABKECILNLA_OFFSET UNITYSDK_OFFSET(0x1A5AE140)
#define GALDCCMAMNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GALDCCMAMNN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GALDCCMAMNN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC3D0)
#define GALDCCMAMNN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC3C0)
#define GALDCCMAMNN___INIT_OFFSET UNITYSDK_OFFSET(0x7FC3A0)

inline static constexpr unsigned int GALDCCMAMNN_TypeDefinitionIndex = 10635;

struct alignas(8) GALDCCMAMNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALDCCMAMNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALDCCMAMNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PAFJCMDGOGA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PAFJCMDGOGA&))((::PBYTE)hIl2Cpp + GALDCCMAMNN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GALDCCMAMNN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GALDCCMAMNN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PAFJCMDGOGA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PAFJCMDGOGA&, ::System::Int32&))((::PBYTE)hIl2Cpp + GALDCCMAMNN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GALDCCMAMNN FABKECILNLA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GALDCCMAMNN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALDCCMAMNN_FABKECILNLA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GALDCCMAMNN FABKECILNLA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GALDCCMAMNN EIFONLCJOPG)
	{
		return ((::GALDCCMAMNN(*)(::FlatBuffers::ByteBuffer*, ::GALDCCMAMNN))((::PBYTE)hIl2Cpp + GALDCCMAMNN_FABKECILNLA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GALDCCMAMNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GALDCCMAMNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALDCCMAMNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
