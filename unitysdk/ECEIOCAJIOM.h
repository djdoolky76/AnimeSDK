#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHLACNDBEEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECEIOCAJIOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ECEIOCAJIOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AE2E0)
#define ECEIOCAJIOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECEIOCAJIOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ECEIOCAJIOM_HMNEGKAOOBE_1_OFFSET UNITYSDK_OFFSET(0x1778D670)
#define ECEIOCAJIOM_HMNEGKAOOBE_OFFSET UNITYSDK_OFFSET(0x1778D600)
#define ECEIOCAJIOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AE320)
#define ECEIOCAJIOM___INIT_OFFSET UNITYSDK_OFFSET(0x7AE2C0)

inline static constexpr unsigned int ECEIOCAJIOM_TypeDefinitionIndex = 15893;

struct alignas(8) ECEIOCAJIOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECEIOCAJIOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ECEIOCAJIOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECEIOCAJIOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ECEIOCAJIOM HMNEGKAOOBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECEIOCAJIOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_HMNEGKAOOBE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHLACNDBEEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHLACNDBEEL&))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ECEIOCAJIOM HMNEGKAOOBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ECEIOCAJIOM EIFONLCJOPG)
	{
		return ((::ECEIOCAJIOM(*)(::FlatBuffers::ByteBuffer*, ::ECEIOCAJIOM))((::PBYTE)hIl2Cpp + ECEIOCAJIOM_HMNEGKAOOBE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
