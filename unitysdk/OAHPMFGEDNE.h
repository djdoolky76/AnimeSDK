#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GAKOINIIMKL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAHPMFGEDNE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OAHPMFGEDNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A9C0)
#define OAHPMFGEDNE_DJEBGKLHCJJ_1_OFFSET UNITYSDK_OFFSET(0x1BAB14B0)
#define OAHPMFGEDNE_DJEBGKLHCJJ_OFFSET UNITYSDK_OFFSET(0x1BAB1440)
#define OAHPMFGEDNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAHPMFGEDNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OAHPMFGEDNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AA00)
#define OAHPMFGEDNE___INIT_OFFSET UNITYSDK_OFFSET(0x81A9A0)

inline static constexpr unsigned int OAHPMFGEDNE_TypeDefinitionIndex = 17452;

struct alignas(8) OAHPMFGEDNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAHPMFGEDNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OAHPMFGEDNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAHPMFGEDNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OAHPMFGEDNE DJEBGKLHCJJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAHPMFGEDNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_DJEBGKLHCJJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OAHPMFGEDNE DJEBGKLHCJJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OAHPMFGEDNE EIFONLCJOPG)
	{
		return ((::OAHPMFGEDNE(*)(::FlatBuffers::ByteBuffer*, ::OAHPMFGEDNE))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_DJEBGKLHCJJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GAKOINIIMKL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GAKOINIIMKL&))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHPMFGEDNE_GHKKNCCLPAN_OFFSET))(this);
	}
};
