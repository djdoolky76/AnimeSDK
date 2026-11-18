#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KADPCIOGMJP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLFFGAFMJNE_ADPGLKHGKPM_1_OFFSET UNITYSDK_OFFSET(0x18DEA780)
#define KLFFGAFMJNE_ADPGLKHGKPM_OFFSET UNITYSDK_OFFSET(0x18DEA720)
#define KLFFGAFMJNE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KLFFGAFMJNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6FC0)
#define KLFFGAFMJNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLFFGAFMJNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KLFFGAFMJNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6FB0)
#define KLFFGAFMJNE___INIT_OFFSET UNITYSDK_OFFSET(0x7D6F90)

inline static constexpr unsigned int KLFFGAFMJNE_TypeDefinitionIndex = 12872;

struct alignas(8) KLFFGAFMJNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFFGAFMJNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KLFFGAFMJNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLFFGAFMJNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KADPCIOGMJP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KADPCIOGMJP&))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KLFFGAFMJNE ADPGLKHGKPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KLFFGAFMJNE EIFONLCJOPG)
	{
		return ((::KLFFGAFMJNE(*)(::FlatBuffers::ByteBuffer*, ::KLFFGAFMJNE))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_ADPGLKHGKPM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KLFFGAFMJNE ADPGLKHGKPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLFFGAFMJNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLFFGAFMJNE_ADPGLKHGKPM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
