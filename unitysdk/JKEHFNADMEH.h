#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHGLFJCDAAB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKEHFNADMEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKEHFNADMEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5760)
#define JKEHFNADMEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKEHFNADMEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKEHFNADMEH_PPHKLAFGEIC_1_OFFSET UNITYSDK_OFFSET(0x18BCD680)
#define JKEHFNADMEH_PPHKLAFGEIC_OFFSET UNITYSDK_OFFSET(0x18BCD5E0)
#define JKEHFNADMEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D57A0)
#define JKEHFNADMEH___INIT_OFFSET UNITYSDK_OFFSET(0x7D5740)

inline static constexpr unsigned int JKEHFNADMEH_TypeDefinitionIndex = 13125;

struct alignas(8) JKEHFNADMEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEHFNADMEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKEHFNADMEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEHFNADMEH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JKEHFNADMEH PPHKLAFGEIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKEHFNADMEH EIFONLCJOPG)
	{
		return ((::JKEHFNADMEH(*)(::FlatBuffers::ByteBuffer*, ::JKEHFNADMEH))((::PBYTE)hIl2Cpp + JKEHFNADMEH_PPHKLAFGEIC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JKEHFNADMEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKEHFNADMEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKEHFNADMEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEHFNADMEH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JKEHFNADMEH PPHKLAFGEIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKEHFNADMEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKEHFNADMEH_PPHKLAFGEIC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHGLFJCDAAB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHGLFJCDAAB&))((::PBYTE)hIl2Cpp + JKEHFNADMEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
