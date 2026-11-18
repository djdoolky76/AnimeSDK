#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDCBFKAPBEL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIOLPMJNFNF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PIOLPMJNFNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4F10)
#define PIOLPMJNFNF_DCBPNNCCIHE_1_OFFSET UNITYSDK_OFFSET(0x17FEA950)
#define PIOLPMJNFNF_DCBPNNCCIHE_OFFSET UNITYSDK_OFFSET(0x17FEA810)
#define PIOLPMJNFNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIOLPMJNFNF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PIOLPMJNFNF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4F50)
#define PIOLPMJNFNF___INIT_OFFSET UNITYSDK_OFFSET(0x7C4EF0)

inline static constexpr unsigned int PIOLPMJNFNF_TypeDefinitionIndex = 17608;

struct alignas(8) PIOLPMJNFNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIOLPMJNFNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PIOLPMJNFNF DCBPNNCCIHE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PIOLPMJNFNF EIFONLCJOPG)
	{
		return ((::PIOLPMJNFNF(*)(::FlatBuffers::ByteBuffer*, ::PIOLPMJNFNF))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_DCBPNNCCIHE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDCBFKAPBEL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDCBFKAPBEL&))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PIOLPMJNFNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIOLPMJNFNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PIOLPMJNFNF DCBPNNCCIHE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIOLPMJNFNF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_DCBPNNCCIHE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOLPMJNFNF_GHKKNCCLPAN_OFFSET))(this);
	}
};
