#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLKHNNFPGDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOEABJEKHAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HOEABJEKHAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A090)
#define HOEABJEKHAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOEABJEKHAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HOEABJEKHAI_JDOFLGPMKIL_1_OFFSET UNITYSDK_OFFSET(0x160FFDC0)
#define HOEABJEKHAI_JDOFLGPMKIL_OFFSET UNITYSDK_OFFSET(0x160FFD00)
#define HOEABJEKHAI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A080)
#define HOEABJEKHAI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A0D0)
#define HOEABJEKHAI___INIT_OFFSET UNITYSDK_OFFSET(0x77A060)

inline static constexpr unsigned int HOEABJEKHAI_TypeDefinitionIndex = 9161;

struct alignas(8) HOEABJEKHAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEABJEKHAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOEABJEKHAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLKHNNFPGDC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLKHNNFPGDC&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOEABJEKHAI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HOEABJEKHAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOEABJEKHAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOEABJEKHAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HOEABJEKHAI JDOFLGPMKIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HOEABJEKHAI EIFONLCJOPG)
	{
		return ((::HOEABJEKHAI(*)(::FlatBuffers::ByteBuffer*, ::HOEABJEKHAI))((::PBYTE)hIl2Cpp + HOEABJEKHAI_JDOFLGPMKIL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEABJEKHAI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEABJEKHAI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HOEABJEKHAI JDOFLGPMKIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOEABJEKHAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOEABJEKHAI_JDOFLGPMKIL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLKHNNFPGDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLKHNNFPGDC&))((::PBYTE)hIl2Cpp + HOEABJEKHAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
