#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBDAANICOBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD090)
#define IBDAANICOBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBDAANICOBK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBDAANICOBK_HCDALKGDFPN_1_OFFSET UNITYSDK_OFFSET(0x1A5D3F00)
#define IBDAANICOBK_HCDALKGDFPN_OFFSET UNITYSDK_OFFSET(0x1A5D3E60)
#define IBDAANICOBK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD080)
#define IBDAANICOBK___INIT_OFFSET UNITYSDK_OFFSET(0x7FD060)

inline static constexpr unsigned int IBDAANICOBK_TypeDefinitionIndex = 10461;

struct alignas(8) IBDAANICOBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDAANICOBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBDAANICOBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDAANICOBK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IBDAANICOBK HCDALKGDFPN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBDAANICOBK EIFONLCJOPG)
	{
		return ((::IBDAANICOBK(*)(::FlatBuffers::ByteBuffer*, ::IBDAANICOBK))((::PBYTE)hIl2Cpp + IBDAANICOBK_HCDALKGDFPN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDAANICOBK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IBDAANICOBK HCDALKGDFPN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBDAANICOBK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBDAANICOBK_HCDALKGDFPN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IBDAANICOBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBDAANICOBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBDAANICOBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
