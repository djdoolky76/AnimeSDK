#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OGFHLMLLADH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELGJCDKHJCM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ELGJCDKHJCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7230)
#define ELGJCDKHJCM_FHEKJHOKJAB_1_OFFSET UNITYSDK_OFFSET(0x1744F090)
#define ELGJCDKHJCM_FHEKJHOKJAB_OFFSET UNITYSDK_OFFSET(0x1744F020)
#define ELGJCDKHJCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELGJCDKHJCM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ELGJCDKHJCM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7220)
#define ELGJCDKHJCM___INIT_OFFSET UNITYSDK_OFFSET(0x7A7200)

inline static constexpr unsigned int ELGJCDKHJCM_TypeDefinitionIndex = 15534;

struct alignas(8) ELGJCDKHJCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELGJCDKHJCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ELGJCDKHJCM FHEKJHOKJAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELGJCDKHJCM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_FHEKJHOKJAB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OGFHLMLLADH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OGFHLMLLADH&))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ELGJCDKHJCM FHEKJHOKJAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ELGJCDKHJCM EIFONLCJOPG)
	{
		return ((::ELGJCDKHJCM(*)(::FlatBuffers::ByteBuffer*, ::ELGJCDKHJCM))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_FHEKJHOKJAB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ELGJCDKHJCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELGJCDKHJCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELGJCDKHJCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
