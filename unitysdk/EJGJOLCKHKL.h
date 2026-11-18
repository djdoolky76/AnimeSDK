#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEMEAHPBCEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJGJOLCKHKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EJGJOLCKHKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D11C0)
#define EJGJOLCKHKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJGJOLCKHKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EJGJOLCKHKL_JHPGMCMJJOB_1_OFFSET UNITYSDK_OFFSET(0x187AE650)
#define EJGJOLCKHKL_JHPGMCMJJOB_OFFSET UNITYSDK_OFFSET(0x187AE5B0)
#define EJGJOLCKHKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D11B0)
#define EJGJOLCKHKL___INIT_OFFSET UNITYSDK_OFFSET(0x7D1190)

inline static constexpr unsigned int EJGJOLCKHKL_TypeDefinitionIndex = 16525;

struct alignas(8) EJGJOLCKHKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJGJOLCKHKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEMEAHPBCEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEMEAHPBCEN&))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EJGJOLCKHKL JHPGMCMJJOB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EJGJOLCKHKL EIFONLCJOPG)
	{
		return ((::EJGJOLCKHKL(*)(::FlatBuffers::ByteBuffer*, ::EJGJOLCKHKL))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_JHPGMCMJJOB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EJGJOLCKHKL JHPGMCMJJOB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJGJOLCKHKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_JHPGMCMJJOB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EJGJOLCKHKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJGJOLCKHKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJGJOLCKHKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
