#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LMGGLMPDKEC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGMNALKHAJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PGMNALKHAJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DAC50)
#define PGMNALKHAJA_DHPMDFPAJOE_1_OFFSET UNITYSDK_OFFSET(0x19141FC0)
#define PGMNALKHAJA_DHPMDFPAJOE_OFFSET UNITYSDK_OFFSET(0x19141EC0)
#define PGMNALKHAJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGMNALKHAJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PGMNALKHAJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DAC40)
#define PGMNALKHAJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DAC90)
#define PGMNALKHAJA___INIT_OFFSET UNITYSDK_OFFSET(0x7DAC20)

inline static constexpr unsigned int PGMNALKHAJA_TypeDefinitionIndex = 14731;

struct alignas(8) PGMNALKHAJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMNALKHAJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGMNALKHAJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LMGGLMPDKEC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMGGLMPDKEC&, ::System::Int32&))((::PBYTE)hIl2Cpp + PGMNALKHAJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PGMNALKHAJA DHPMDFPAJOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PGMNALKHAJA EIFONLCJOPG)
	{
		return ((::PGMNALKHAJA(*)(::FlatBuffers::ByteBuffer*, ::PGMNALKHAJA))((::PBYTE)hIl2Cpp + PGMNALKHAJA_DHPMDFPAJOE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMNALKHAJA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PGMNALKHAJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGMNALKHAJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGMNALKHAJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LMGGLMPDKEC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMGGLMPDKEC&))((::PBYTE)hIl2Cpp + PGMNALKHAJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMNALKHAJA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PGMNALKHAJA DHPMDFPAJOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGMNALKHAJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGMNALKHAJA_DHPMDFPAJOE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
