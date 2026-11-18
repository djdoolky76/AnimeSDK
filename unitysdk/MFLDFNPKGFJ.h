#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NAFOIOFKONL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFLDFNPKGFJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MFLDFNPKGFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802300)
#define MFLDFNPKGFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFLDFNPKGFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFLDFNPKGFJ_HDLEGAMAEJO_1_OFFSET UNITYSDK_OFFSET(0x1AB09AB0)
#define MFLDFNPKGFJ_HDLEGAMAEJO_OFFSET UNITYSDK_OFFSET(0x1AB09A40)
#define MFLDFNPKGFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802340)
#define MFLDFNPKGFJ___INIT_OFFSET UNITYSDK_OFFSET(0x8022E0)

inline static constexpr unsigned int MFLDFNPKGFJ_TypeDefinitionIndex = 13906;

struct alignas(8) MFLDFNPKGFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MFLDFNPKGFJ HDLEGAMAEJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFLDFNPKGFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_HDLEGAMAEJO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MFLDFNPKGFJ HDLEGAMAEJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFLDFNPKGFJ EIFONLCJOPG)
	{
		return ((::MFLDFNPKGFJ(*)(::FlatBuffers::ByteBuffer*, ::MFLDFNPKGFJ))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_HDLEGAMAEJO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MFLDFNPKGFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFLDFNPKGFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NAFOIOFKONL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAFOIOFKONL&))((::PBYTE)hIl2Cpp + MFLDFNPKGFJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
