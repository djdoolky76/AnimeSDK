#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJHDNOANCNE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFJKMNPINIA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFJKMNPINIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820DB0)
#define PFJKMNPINIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFJKMNPINIA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFJKMNPINIA_HABOCJEMPHL_1_OFFSET UNITYSDK_OFFSET(0x1C1A9A70)
#define PFJKMNPINIA_HABOCJEMPHL_OFFSET UNITYSDK_OFFSET(0x1C1A9A00)
#define PFJKMNPINIA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820E00)
#define PFJKMNPINIA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820DF0)
#define PFJKMNPINIA___INIT_OFFSET UNITYSDK_OFFSET(0x820D90)

inline static constexpr unsigned int PFJKMNPINIA_TypeDefinitionIndex = 10139;

struct alignas(8) PFJKMNPINIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKMNPINIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFJKMNPINIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PFJKMNPINIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFJKMNPINIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFJKMNPINIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKMNPINIA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKMNPINIA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJHDNOANCNE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJHDNOANCNE&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFJKMNPINIA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PFJKMNPINIA HABOCJEMPHL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFJKMNPINIA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFJKMNPINIA_HABOCJEMPHL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJHDNOANCNE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJHDNOANCNE&))((::PBYTE)hIl2Cpp + PFJKMNPINIA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PFJKMNPINIA HABOCJEMPHL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFJKMNPINIA EIFONLCJOPG)
	{
		return ((::PFJKMNPINIA(*)(::FlatBuffers::ByteBuffer*, ::PFJKMNPINIA))((::PBYTE)hIl2Cpp + PFJKMNPINIA_HABOCJEMPHL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
