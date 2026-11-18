#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNJGFLEJJFA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJKDNHBEMEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJKDNHBEMEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF830)
#define MJKDNHBEMEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJKDNHBEMEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJKDNHBEMEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF820)
#define MJKDNHBEMEH_NPGDAFMOEFI_1_OFFSET UNITYSDK_OFFSET(0x19DB5D30)
#define MJKDNHBEMEH_NPGDAFMOEFI_OFFSET UNITYSDK_OFFSET(0x19DB5CC0)
#define MJKDNHBEMEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF870)
#define MJKDNHBEMEH___INIT_OFFSET UNITYSDK_OFFSET(0x7EF800)

inline static constexpr unsigned int MJKDNHBEMEH_TypeDefinitionIndex = 9457;

struct alignas(8) MJKDNHBEMEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJKDNHBEMEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNJGFLEJJFA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNJGFLEJJFA&, ::System::Int32&))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MJKDNHBEMEH NPGDAFMOEFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJKDNHBEMEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_NPGDAFMOEFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNJGFLEJJFA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNJGFLEJJFA&))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MJKDNHBEMEH NPGDAFMOEFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJKDNHBEMEH EIFONLCJOPG)
	{
		return ((::MJKDNHBEMEH(*)(::FlatBuffers::ByteBuffer*, ::MJKDNHBEMEH))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_NPGDAFMOEFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MJKDNHBEMEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJKDNHBEMEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKDNHBEMEH_PPOMNIFACOL_OFFSET))(this);
	}
};
