#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOHDNDMOGGL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNDJMPPEMEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNDJMPPEMEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3AE0)
#define HNDJMPPEMEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNDJMPPEMEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNDJMPPEMEH_KHDFKDHCFHC_1_OFFSET UNITYSDK_OFFSET(0x19538320)
#define HNDJMPPEMEH_KHDFKDHCFHC_OFFSET UNITYSDK_OFFSET(0x195382B0)
#define HNDJMPPEMEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3B20)
#define HNDJMPPEMEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3B30)
#define HNDJMPPEMEH___INIT_OFFSET UNITYSDK_OFFSET(0x7E3AC0)

inline static constexpr unsigned int HNDJMPPEMEH_TypeDefinitionIndex = 12608;

struct alignas(8) HNDJMPPEMEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNDJMPPEMEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNDJMPPEMEH KHDFKDHCFHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNDJMPPEMEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_KHDFKDHCFHC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOHDNDMOGGL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOHDNDMOGGL&))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HNDJMPPEMEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNDJMPPEMEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOHDNDMOGGL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOHDNDMOGGL&, ::System::Int32&))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HNDJMPPEMEH KHDFKDHCFHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNDJMPPEMEH EIFONLCJOPG)
	{
		return ((::HNDJMPPEMEH(*)(::FlatBuffers::ByteBuffer*, ::HNDJMPPEMEH))((::PBYTE)hIl2Cpp + HNDJMPPEMEH_KHDFKDHCFHC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
