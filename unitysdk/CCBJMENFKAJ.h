#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCBJMENFKAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1E10)
#define CCBJMENFKAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCBJMENFKAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCBJMENFKAJ_INGIFEOLAJM_1_OFFSET UNITYSDK_OFFSET(0x17A83AD0)
#define CCBJMENFKAJ_INGIFEOLAJM_OFFSET UNITYSDK_OFFSET(0x17A839D0)
#define CCBJMENFKAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1E00)
#define CCBJMENFKAJ___INIT_OFFSET UNITYSDK_OFFSET(0x7B1DE0)

inline static constexpr unsigned int CCBJMENFKAJ_TypeDefinitionIndex = 14283;

struct alignas(8) CCBJMENFKAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBJMENFKAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBJMENFKAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CCBJMENFKAJ INGIFEOLAJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCBJMENFKAJ EIFONLCJOPG)
	{
		return ((::CCBJMENFKAJ(*)(::FlatBuffers::ByteBuffer*, ::CCBJMENFKAJ))((::PBYTE)hIl2Cpp + CCBJMENFKAJ_INGIFEOLAJM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBJMENFKAJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBJMENFKAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CCBJMENFKAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCBJMENFKAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBJMENFKAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCBJMENFKAJ INGIFEOLAJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCBJMENFKAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBJMENFKAJ_INGIFEOLAJM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
