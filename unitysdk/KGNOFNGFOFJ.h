#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HBLNGFMGFAG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGNOFNGFOFJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KGNOFNGFOFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5B30)
#define KGNOFNGFOFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGNOFNGFOFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KGNOFNGFOFJ_PJILGAIIFJN_1_OFFSET UNITYSDK_OFFSET(0x18BDB7D0)
#define KGNOFNGFOFJ_PJILGAIIFJN_OFFSET UNITYSDK_OFFSET(0x18BDB730)
#define KGNOFNGFOFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5B20)
#define KGNOFNGFOFJ___INIT_OFFSET UNITYSDK_OFFSET(0x7D5B00)

inline static constexpr unsigned int KGNOFNGFOFJ_TypeDefinitionIndex = 16128;

struct alignas(8) KGNOFNGFOFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HBLNGFMGFAG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HBLNGFMGFAG&))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KGNOFNGFOFJ PJILGAIIFJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KGNOFNGFOFJ EIFONLCJOPG)
	{
		return ((::KGNOFNGFOFJ(*)(::FlatBuffers::ByteBuffer*, ::KGNOFNGFOFJ))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_PJILGAIIFJN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KGNOFNGFOFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGNOFNGFOFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KGNOFNGFOFJ PJILGAIIFJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGNOFNGFOFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGNOFNGFOFJ_PJILGAIIFJN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
