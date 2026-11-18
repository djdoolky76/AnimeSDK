#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DJDCADPMGKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFINKENLHKG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MFINKENLHKG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802280)
#define MFINKENLHKG_FJKIHLHPHOK_1_OFFSET UNITYSDK_OFFSET(0x1AB09480)
#define MFINKENLHKG_FJKIHLHPHOK_OFFSET UNITYSDK_OFFSET(0x1AB09410)
#define MFINKENLHKG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFINKENLHKG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFINKENLHKG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802270)
#define MFINKENLHKG___INIT_OFFSET UNITYSDK_OFFSET(0x802250)

inline static constexpr unsigned int MFINKENLHKG_TypeDefinitionIndex = 11950;

struct alignas(8) MFINKENLHKG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFINKENLHKG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFINKENLHKG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFINKENLHKG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MFINKENLHKG FJKIHLHPHOK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFINKENLHKG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFINKENLHKG_FJKIHLHPHOK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFINKENLHKG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MFINKENLHKG FJKIHLHPHOK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFINKENLHKG EIFONLCJOPG)
	{
		return ((::MFINKENLHKG(*)(::FlatBuffers::ByteBuffer*, ::MFINKENLHKG))((::PBYTE)hIl2Cpp + MFINKENLHKG_FJKIHLHPHOK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DJDCADPMGKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DJDCADPMGKF&))((::PBYTE)hIl2Cpp + MFINKENLHKG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MFINKENLHKG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFINKENLHKG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFINKENLHKG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
