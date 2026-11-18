#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEKPJANLOFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4F10)
#define IEKPJANLOFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IEKPJANLOFD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IEKPJANLOFD_OGNGHOFIMPI_1_OFFSET UNITYSDK_OFFSET(0x18BB83E0)
#define IEKPJANLOFD_OGNGHOFIMPI_OFFSET UNITYSDK_OFFSET(0x18BB8340)
#define IEKPJANLOFD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4F00)
#define IEKPJANLOFD___INIT_OFFSET UNITYSDK_OFFSET(0x7D4EE0)

inline static constexpr unsigned int IEKPJANLOFD_TypeDefinitionIndex = 13996;

struct alignas(8) IEKPJANLOFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKPJANLOFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEKPJANLOFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKPJANLOFD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IEKPJANLOFD OGNGHOFIMPI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IEKPJANLOFD EIFONLCJOPG)
	{
		return ((::IEKPJANLOFD(*)(::FlatBuffers::ByteBuffer*, ::IEKPJANLOFD))((::PBYTE)hIl2Cpp + IEKPJANLOFD_OGNGHOFIMPI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IEKPJANLOFD OGNGHOFIMPI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEKPJANLOFD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEKPJANLOFD_OGNGHOFIMPI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKPJANLOFD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IEKPJANLOFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEKPJANLOFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEKPJANLOFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
