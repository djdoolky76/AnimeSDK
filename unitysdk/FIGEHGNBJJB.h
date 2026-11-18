#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PEEKDGJHKOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIGEHGNBJJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FIGEHGNBJJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2F10)
#define FIGEHGNBJJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIGEHGNBJJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FIGEHGNBJJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2F50)
#define FIGEHGNBJJB_PCMIFLIMEIP_1_OFFSET UNITYSDK_OFFSET(0x17AB44A0)
#define FIGEHGNBJJB_PCMIFLIMEIP_OFFSET UNITYSDK_OFFSET(0x17AB4440)
#define FIGEHGNBJJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2F60)
#define FIGEHGNBJJB___INIT_OFFSET UNITYSDK_OFFSET(0x7B2EF0)

inline static constexpr unsigned int FIGEHGNBJJB_TypeDefinitionIndex = 10273;

struct alignas(8) FIGEHGNBJJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIGEHGNBJJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PEEKDGJHKOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEEKDGJHKOE&))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FIGEHGNBJJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIGEHGNBJJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PEEKDGJHKOE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEEKDGJHKOE&, ::System::Int32&))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FIGEHGNBJJB PCMIFLIMEIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FIGEHGNBJJB EIFONLCJOPG)
	{
		return ((::FIGEHGNBJJB(*)(::FlatBuffers::ByteBuffer*, ::FIGEHGNBJJB))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_PCMIFLIMEIP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FIGEHGNBJJB PCMIFLIMEIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIGEHGNBJJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_PCMIFLIMEIP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEHGNBJJB_GHKKNCCLPAN_OFFSET))(this);
	}
};
