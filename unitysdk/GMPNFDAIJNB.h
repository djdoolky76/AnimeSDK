#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MONCJMOCIEM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMPNFDAIJNB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GMPNFDAIJNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEA70)
#define GMPNFDAIJNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMPNFDAIJNB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GMPNFDAIJNB_JBLFHJPCEPA_1_OFFSET UNITYSDK_OFFSET(0x19339690)
#define GMPNFDAIJNB_JBLFHJPCEPA_OFFSET UNITYSDK_OFFSET(0x19339620)
#define GMPNFDAIJNB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEA60)
#define GMPNFDAIJNB___INIT_OFFSET UNITYSDK_OFFSET(0x7DEA40)

inline static constexpr unsigned int GMPNFDAIJNB_TypeDefinitionIndex = 17141;

struct alignas(8) GMPNFDAIJNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMPNFDAIJNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GMPNFDAIJNB JBLFHJPCEPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMPNFDAIJNB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_JBLFHJPCEPA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GMPNFDAIJNB JBLFHJPCEPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GMPNFDAIJNB EIFONLCJOPG)
	{
		return ((::GMPNFDAIJNB(*)(::FlatBuffers::ByteBuffer*, ::GMPNFDAIJNB))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_JBLFHJPCEPA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MONCJMOCIEM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MONCJMOCIEM&))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GMPNFDAIJNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMPNFDAIJNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMPNFDAIJNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
