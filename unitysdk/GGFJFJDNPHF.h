#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KPNOAJONDEA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGFJFJDNPHF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGFJFJDNPHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7DC0)
#define GGFJFJDNPHF_DBMLIPDGKFB_1_OFFSET UNITYSDK_OFFSET(0x17468530)
#define GGFJFJDNPHF_DBMLIPDGKFB_OFFSET UNITYSDK_OFFSET(0x17468390)
#define GGFJFJDNPHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGFJFJDNPHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGFJFJDNPHF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7DB0)
#define GGFJFJDNPHF___INIT_OFFSET UNITYSDK_OFFSET(0x7A7D90)

inline static constexpr unsigned int GGFJFJDNPHF_TypeDefinitionIndex = 16589;

struct alignas(8) GGFJFJDNPHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGFJFJDNPHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GGFJFJDNPHF DBMLIPDGKFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGFJFJDNPHF EIFONLCJOPG)
	{
		return ((::GGFJFJDNPHF(*)(::FlatBuffers::ByteBuffer*, ::GGFJFJDNPHF))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_DBMLIPDGKFB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KPNOAJONDEA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPNOAJONDEA&))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GGFJFJDNPHF DBMLIPDGKFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGFJFJDNPHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_DBMLIPDGKFB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GGFJFJDNPHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGFJFJDNPHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGFJFJDNPHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
