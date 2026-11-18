#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCGGLBNAMFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODCHBHABPGK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODCHBHABPGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB760)
#define ODCHBHABPGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODCHBHABPGK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODCHBHABPGK_NOEBAGNGBHE_1_OFFSET UNITYSDK_OFFSET(0x1CFF6880)
#define ODCHBHABPGK_NOEBAGNGBHE_OFFSET UNITYSDK_OFFSET(0x1CFF6810)
#define ODCHBHABPGK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB750)
#define ODCHBHABPGK___INIT_OFFSET UNITYSDK_OFFSET(0x8AB730)

inline static constexpr unsigned int ODCHBHABPGK_TypeDefinitionIndex = 13731;

struct alignas(8) ODCHBHABPGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCHBHABPGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODCHBHABPGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCHBHABPGK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCHBHABPGK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCGGLBNAMFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCGGLBNAMFI&))((::PBYTE)hIl2Cpp + ODCHBHABPGK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ODCHBHABPGK NOEBAGNGBHE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODCHBHABPGK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODCHBHABPGK_NOEBAGNGBHE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ODCHBHABPGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODCHBHABPGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODCHBHABPGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ODCHBHABPGK NOEBAGNGBHE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODCHBHABPGK EIFONLCJOPG)
	{
		return ((::ODCHBHABPGK(*)(::FlatBuffers::ByteBuffer*, ::ODCHBHABPGK))((::PBYTE)hIl2Cpp + ODCHBHABPGK_NOEBAGNGBHE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
