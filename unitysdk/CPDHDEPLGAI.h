#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGLDPLCELOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPDHDEPLGAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CPDHDEPLGAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9F10)
#define CPDHDEPLGAI_DKNJNCPGKLE_1_OFFSET UNITYSDK_OFFSET(0x1A549C50)
#define CPDHDEPLGAI_DKNJNCPGKLE_OFFSET UNITYSDK_OFFSET(0x1A549AB0)
#define CPDHDEPLGAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CPDHDEPLGAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CPDHDEPLGAI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9F00)
#define CPDHDEPLGAI___INIT_OFFSET UNITYSDK_OFFSET(0x7F9EE0)

inline static constexpr unsigned int CPDHDEPLGAI_TypeDefinitionIndex = 10177;

struct alignas(8) CPDHDEPLGAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPDHDEPLGAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CPDHDEPLGAI DKNJNCPGKLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CPDHDEPLGAI EIFONLCJOPG)
	{
		return ((::CPDHDEPLGAI(*)(::FlatBuffers::ByteBuffer*, ::CPDHDEPLGAI))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_DKNJNCPGKLE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGLDPLCELOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGLDPLCELOD&))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CPDHDEPLGAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPDHDEPLGAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CPDHDEPLGAI DKNJNCPGKLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CPDHDEPLGAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPDHDEPLGAI_DKNJNCPGKLE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
