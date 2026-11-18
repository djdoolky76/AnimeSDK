#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNDLGDDJCDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLOJKIGKEEM_ACCEFEPOPAA_1_OFFSET UNITYSDK_OFFSET(0x174626F0)
#define FLOJKIGKEEM_ACCEFEPOPAA_OFFSET UNITYSDK_OFFSET(0x17462450)
#define FLOJKIGKEEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FLOJKIGKEEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7AC0)
#define FLOJKIGKEEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLOJKIGKEEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FLOJKIGKEEM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7AB0)
#define FLOJKIGKEEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7AA0)
#define FLOJKIGKEEM___INIT_OFFSET UNITYSDK_OFFSET(0x7A7A80)

inline static constexpr unsigned int FLOJKIGKEEM_TypeDefinitionIndex = 12309;

struct alignas(8) FLOJKIGKEEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLOJKIGKEEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FLOJKIGKEEM ACCEFEPOPAA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FLOJKIGKEEM EIFONLCJOPG)
	{
		return ((::FLOJKIGKEEM(*)(::FlatBuffers::ByteBuffer*, ::FLOJKIGKEEM))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_ACCEFEPOPAA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PNDLGDDJCDM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNDLGDDJCDM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FLOJKIGKEEM ACCEFEPOPAA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLOJKIGKEEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_ACCEFEPOPAA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNDLGDDJCDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNDLGDDJCDM&))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FLOJKIGKEEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLOJKIGKEEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLOJKIGKEEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
