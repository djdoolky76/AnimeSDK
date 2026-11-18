#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KIPEAJCKNAJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMBHCJHCEGF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMBHCJHCEGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x788C60)
#define DMBHCJHCEGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMBHCJHCEGF_GFPJPHFLKGF_1_OFFSET UNITYSDK_OFFSET(0x1661CBA0)
#define DMBHCJHCEGF_GFPJPHFLKGF_OFFSET UNITYSDK_OFFSET(0x1661CA60)
#define DMBHCJHCEGF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMBHCJHCEGF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x788CA0)
#define DMBHCJHCEGF___INIT_OFFSET UNITYSDK_OFFSET(0x788C40)

inline static constexpr unsigned int DMBHCJHCEGF_TypeDefinitionIndex = 16062;

struct alignas(8) DMBHCJHCEGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMBHCJHCEGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DMBHCJHCEGF GFPJPHFLKGF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMBHCJHCEGF EIFONLCJOPG)
	{
		return ((::DMBHCJHCEGF(*)(::FlatBuffers::ByteBuffer*, ::DMBHCJHCEGF))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_GFPJPHFLKGF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DMBHCJHCEGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMBHCJHCEGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KIPEAJCKNAJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIPEAJCKNAJ&))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DMBHCJHCEGF GFPJPHFLKGF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMBHCJHCEGF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMBHCJHCEGF_GFPJPHFLKGF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
