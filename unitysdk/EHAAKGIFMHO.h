#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBMNIJDCHDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHAAKGIFMHO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EHAAKGIFMHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D1050)
#define EHAAKGIFMHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHAAKGIFMHO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EHAAKGIFMHO_LAHCPJCNJIC_1_OFFSET UNITYSDK_OFFSET(0x187AA150)
#define EHAAKGIFMHO_LAHCPJCNJIC_OFFSET UNITYSDK_OFFSET(0x187AA0E0)
#define EHAAKGIFMHO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D1040)
#define EHAAKGIFMHO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D1090)
#define EHAAKGIFMHO___INIT_OFFSET UNITYSDK_OFFSET(0x7D1020)

inline static constexpr unsigned int EHAAKGIFMHO_TypeDefinitionIndex = 16381;

struct alignas(8) EHAAKGIFMHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHAAKGIFMHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DBMNIJDCHDN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBMNIJDCHDN&, ::System::Int32&))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EHAAKGIFMHO LAHCPJCNJIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHAAKGIFMHO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_LAHCPJCNJIC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EHAAKGIFMHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHAAKGIFMHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DBMNIJDCHDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBMNIJDCHDN&))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EHAAKGIFMHO LAHCPJCNJIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EHAAKGIFMHO EIFONLCJOPG)
	{
		return ((::EHAAKGIFMHO(*)(::FlatBuffers::ByteBuffer*, ::EHAAKGIFMHO))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_LAHCPJCNJIC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHAAKGIFMHO_GHKKNCCLPAN_OFFSET))(this);
	}
};
