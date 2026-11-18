#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKABCDNMJDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4290)
#define FKABCDNMJDM_BKNNNACHIAH_1_OFFSET UNITYSDK_OFFSET(0x18B9AB80)
#define FKABCDNMJDM_BKNNNACHIAH_OFFSET UNITYSDK_OFFSET(0x18B9AB10)
#define FKABCDNMJDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKABCDNMJDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FKABCDNMJDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D42D0)
#define FKABCDNMJDM___INIT_OFFSET UNITYSDK_OFFSET(0x7D4270)

inline static constexpr unsigned int FKABCDNMJDM_TypeDefinitionIndex = 12148;

struct alignas(8) FKABCDNMJDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKABCDNMJDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKABCDNMJDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FKABCDNMJDM BKNNNACHIAH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKABCDNMJDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKABCDNMJDM_BKNNNACHIAH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FKABCDNMJDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKABCDNMJDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKABCDNMJDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FKABCDNMJDM BKNNNACHIAH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FKABCDNMJDM EIFONLCJOPG)
	{
		return ((::FKABCDNMJDM(*)(::FlatBuffers::ByteBuffer*, ::FKABCDNMJDM))((::PBYTE)hIl2Cpp + FKABCDNMJDM_BKNNNACHIAH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKABCDNMJDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKABCDNMJDM_GHKKNCCLPAN_OFFSET))(this);
	}
};
