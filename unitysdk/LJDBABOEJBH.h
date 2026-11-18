#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHKNEFOKIII.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJDBABOEJBH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LJDBABOEJBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810E80)
#define LJDBABOEJBH_EDOAIJIMIGB_1_OFFSET UNITYSDK_OFFSET(0x1B64F870)
#define LJDBABOEJBH_EDOAIJIMIGB_OFFSET UNITYSDK_OFFSET(0x1B64F810)
#define LJDBABOEJBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJDBABOEJBH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJDBABOEJBH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810EC0)
#define LJDBABOEJBH___INIT_OFFSET UNITYSDK_OFFSET(0x810E60)

inline static constexpr unsigned int LJDBABOEJBH_TypeDefinitionIndex = 11532;

struct alignas(8) LJDBABOEJBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDBABOEJBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJDBABOEJBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LJDBABOEJBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJDBABOEJBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJDBABOEJBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHKNEFOKIII& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHKNEFOKIII&))((::PBYTE)hIl2Cpp + LJDBABOEJBH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDBABOEJBH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDBABOEJBH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LJDBABOEJBH EDOAIJIMIGB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJDBABOEJBH EIFONLCJOPG)
	{
		return ((::LJDBABOEJBH(*)(::FlatBuffers::ByteBuffer*, ::LJDBABOEJBH))((::PBYTE)hIl2Cpp + LJDBABOEJBH_EDOAIJIMIGB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LJDBABOEJBH EDOAIJIMIGB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJDBABOEJBH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJDBABOEJBH_EDOAIJIMIGB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
