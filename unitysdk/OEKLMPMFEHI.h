#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFNJAADPFKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEKLMPMFEHI_ADLLKMPJALJ_1_OFFSET UNITYSDK_OFFSET(0x1B339300)
#define OEKLMPMFEHI_ADLLKMPJALJ_OFFSET UNITYSDK_OFFSET(0x1B339290)
#define OEKLMPMFEHI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OEKLMPMFEHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C3D0)
#define OEKLMPMFEHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEKLMPMFEHI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEKLMPMFEHI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C3C0)
#define OEKLMPMFEHI___INIT_OFFSET UNITYSDK_OFFSET(0x80C3A0)

inline static constexpr unsigned int OEKLMPMFEHI_TypeDefinitionIndex = 10228;

struct alignas(8) OEKLMPMFEHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEKLMPMFEHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OEKLMPMFEHI ADLLKMPJALJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEKLMPMFEHI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_ADLLKMPJALJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OEKLMPMFEHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEKLMPMFEHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OEKLMPMFEHI ADLLKMPJALJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEKLMPMFEHI EIFONLCJOPG)
	{
		return ((::OEKLMPMFEHI(*)(::FlatBuffers::ByteBuffer*, ::OEKLMPMFEHI))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_ADLLKMPJALJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFNJAADPFKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFNJAADPFKK&))((::PBYTE)hIl2Cpp + OEKLMPMFEHI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
