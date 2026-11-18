#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPGOLEGJLKP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNOPOJKFEHK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JNOPOJKFEHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77AF20)
#define JNOPOJKFEHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNOPOJKFEHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JNOPOJKFEHK_NPMGFKLGIGE_1_OFFSET UNITYSDK_OFFSET(0x1611CD80)
#define JNOPOJKFEHK_NPMGFKLGIGE_OFFSET UNITYSDK_OFFSET(0x1611CCE0)
#define JNOPOJKFEHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77AF60)
#define JNOPOJKFEHK___INIT_OFFSET UNITYSDK_OFFSET(0x77AF00)

inline static constexpr unsigned int JNOPOJKFEHK_TypeDefinitionIndex = 16109;

struct alignas(8) JNOPOJKFEHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNOPOJKFEHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JNOPOJKFEHK NPMGFKLGIGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JNOPOJKFEHK EIFONLCJOPG)
	{
		return ((::JNOPOJKFEHK(*)(::FlatBuffers::ByteBuffer*, ::JNOPOJKFEHK))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_NPMGFKLGIGE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JNOPOJKFEHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNOPOJKFEHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JNOPOJKFEHK NPMGFKLGIGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNOPOJKFEHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_NPMGFKLGIGE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPGOLEGJLKP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPGOLEGJLKP&))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOPOJKFEHK_GHKKNCCLPAN_OFFSET))(this);
	}
};
