#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHEILAFDEFF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOJNPBEJNFP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JOJNPBEJNFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8D70)
#define JOJNPBEJNFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOJNPBEJNFP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JOJNPBEJNFP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8D50)
#define JOJNPBEJNFP_NMCBCKAPIMC_1_OFFSET UNITYSDK_OFFSET(0x1A505E80)
#define JOJNPBEJNFP_NMCBCKAPIMC_OFFSET UNITYSDK_OFFSET(0x1A505E10)
#define JOJNPBEJNFP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8D60)
#define JOJNPBEJNFP___INIT_OFFSET UNITYSDK_OFFSET(0x7F8D30)

inline static constexpr unsigned int JOJNPBEJNFP_TypeDefinitionIndex = 9603;

struct alignas(8) JOJNPBEJNFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOJNPBEJNFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JOJNPBEJNFP NMCBCKAPIMC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOJNPBEJNFP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_NMCBCKAPIMC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JOJNPBEJNFP NMCBCKAPIMC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JOJNPBEJNFP EIFONLCJOPG)
	{
		return ((::JOJNPBEJNFP(*)(::FlatBuffers::ByteBuffer*, ::JOJNPBEJNFP))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_NMCBCKAPIMC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHEILAFDEFF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHEILAFDEFF&, ::System::Int32&))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JOJNPBEJNFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOJNPBEJNFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHEILAFDEFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHEILAFDEFF&))((::PBYTE)hIl2Cpp + JOJNPBEJNFP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
