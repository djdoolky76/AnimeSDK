#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEPJBBDCLNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D810)
#define GEPJBBDCLNE_FAFEAGFLGBF_1_OFFSET UNITYSDK_OFFSET(0x1B4D1B40)
#define GEPJBBDCLNE_FAFEAGFLGBF_OFFSET UNITYSDK_OFFSET(0x1B4D1AD0)
#define GEPJBBDCLNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEPJBBDCLNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GEPJBBDCLNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D800)
#define GEPJBBDCLNE___INIT_OFFSET UNITYSDK_OFFSET(0x80D7E0)

inline static constexpr unsigned int GEPJBBDCLNE_TypeDefinitionIndex = 12687;

struct alignas(8) GEPJBBDCLNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPJBBDCLNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEPJBBDCLNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GEPJBBDCLNE FAFEAGFLGBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEPJBBDCLNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEPJBBDCLNE_FAFEAGFLGBF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPJBBDCLNE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GEPJBBDCLNE FAFEAGFLGBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GEPJBBDCLNE EIFONLCJOPG)
	{
		return ((::GEPJBBDCLNE(*)(::FlatBuffers::ByteBuffer*, ::GEPJBBDCLNE))((::PBYTE)hIl2Cpp + GEPJBBDCLNE_FAFEAGFLGBF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPJBBDCLNE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GEPJBBDCLNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEPJBBDCLNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEPJBBDCLNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
