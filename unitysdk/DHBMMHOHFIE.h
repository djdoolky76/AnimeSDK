#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMJCGDJBANF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHBMMHOHFIE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHBMMHOHFIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807750)
#define DHBMMHOHFIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHBMMHOHFIE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHBMMHOHFIE_LLCLCBBOOEK_1_OFFSET UNITYSDK_OFFSET(0x1ADC6780)
#define DHBMMHOHFIE_LLCLCBBOOEK_OFFSET UNITYSDK_OFFSET(0x1ADC66E0)
#define DHBMMHOHFIE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807730)
#define DHBMMHOHFIE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807740)
#define DHBMMHOHFIE___INIT_OFFSET UNITYSDK_OFFSET(0x807710)

inline static constexpr unsigned int DHBMMHOHFIE_TypeDefinitionIndex = 9803;

struct alignas(8) DHBMMHOHFIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHBMMHOHFIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IMJCGDJBANF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMJCGDJBANF&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DHBMMHOHFIE LLCLCBBOOEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHBMMHOHFIE EIFONLCJOPG)
	{
		return ((::DHBMMHOHFIE(*)(::FlatBuffers::ByteBuffer*, ::DHBMMHOHFIE))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_LLCLCBBOOEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DHBMMHOHFIE LLCLCBBOOEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHBMMHOHFIE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_LLCLCBBOOEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DHBMMHOHFIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHBMMHOHFIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMJCGDJBANF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMJCGDJBANF&))((::PBYTE)hIl2Cpp + DHBMMHOHFIE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
