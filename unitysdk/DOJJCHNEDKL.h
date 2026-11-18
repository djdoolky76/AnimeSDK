#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPGBLEOAIEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOJJCHNEDKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOJJCHNEDKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762E10)
#define DOJJCHNEDKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOJJCHNEDKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOJJCHNEDKL_HCDOLICCLBH_1_OFFSET UNITYSDK_OFFSET(0x1575DA70)
#define DOJJCHNEDKL_HCDOLICCLBH_OFFSET UNITYSDK_OFFSET(0x1575DA00)
#define DOJJCHNEDKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762E00)
#define DOJJCHNEDKL___INIT_OFFSET UNITYSDK_OFFSET(0x762DE0)

inline static constexpr unsigned int DOJJCHNEDKL_TypeDefinitionIndex = 9576;

struct alignas(8) DOJJCHNEDKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJJCHNEDKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DOJJCHNEDKL HCDOLICCLBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOJJCHNEDKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_HCDOLICCLBH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPGBLEOAIEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPGBLEOAIEH&))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DOJJCHNEDKL HCDOLICCLBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOJJCHNEDKL EIFONLCJOPG)
	{
		return ((::DOJJCHNEDKL(*)(::FlatBuffers::ByteBuffer*, ::DOJJCHNEDKL))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_HCDOLICCLBH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DOJJCHNEDKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOJJCHNEDKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJJCHNEDKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
