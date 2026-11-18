#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJAGALKIFHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PABHJBCNFCF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PABHJBCNFCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DAAA0)
#define PABHJBCNFCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PABHJBCNFCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PABHJBCNFCF_MHDFJJADHAP_1_OFFSET UNITYSDK_OFFSET(0x191391F0)
#define PABHJBCNFCF_MHDFJJADHAP_OFFSET UNITYSDK_OFFSET(0x19139180)
#define PABHJBCNFCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DAA90)
#define PABHJBCNFCF___INIT_OFFSET UNITYSDK_OFFSET(0x7DAA70)

inline static constexpr unsigned int PABHJBCNFCF_TypeDefinitionIndex = 16665;

struct alignas(8) PABHJBCNFCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PABHJBCNFCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PABHJBCNFCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PABHJBCNFCF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJAGALKIFHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJAGALKIFHA&))((::PBYTE)hIl2Cpp + PABHJBCNFCF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PABHJBCNFCF MHDFJJADHAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PABHJBCNFCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PABHJBCNFCF_MHDFJJADHAP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PABHJBCNFCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PABHJBCNFCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PABHJBCNFCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PABHJBCNFCF MHDFJJADHAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PABHJBCNFCF EIFONLCJOPG)
	{
		return ((::PABHJBCNFCF(*)(::FlatBuffers::ByteBuffer*, ::PABHJBCNFCF))((::PBYTE)hIl2Cpp + PABHJBCNFCF_MHDFJJADHAP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PABHJBCNFCF_GHKKNCCLPAN_OFFSET))(this);
	}
};
