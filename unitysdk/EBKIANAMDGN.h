#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DKHAAONDJDO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBKIANAMDGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBKIANAMDGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AE250)
#define EBKIANAMDGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBKIANAMDGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBKIANAMDGN_HNLNGBJFMKF_1_OFFSET UNITYSDK_OFFSET(0x1778D040)
#define EBKIANAMDGN_HNLNGBJFMKF_OFFSET UNITYSDK_OFFSET(0x1778CFD0)
#define EBKIANAMDGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AE290)
#define EBKIANAMDGN___INIT_OFFSET UNITYSDK_OFFSET(0x7AE230)

inline static constexpr unsigned int EBKIANAMDGN_TypeDefinitionIndex = 16213;

struct alignas(8) EBKIANAMDGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKIANAMDGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBKIANAMDGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EBKIANAMDGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBKIANAMDGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBKIANAMDGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EBKIANAMDGN HNLNGBJFMKF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBKIANAMDGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBKIANAMDGN_HNLNGBJFMKF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKIANAMDGN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DKHAAONDJDO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKHAAONDJDO&))((::PBYTE)hIl2Cpp + EBKIANAMDGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKIANAMDGN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EBKIANAMDGN HNLNGBJFMKF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBKIANAMDGN EIFONLCJOPG)
	{
		return ((::EBKIANAMDGN(*)(::FlatBuffers::ByteBuffer*, ::EBKIANAMDGN))((::PBYTE)hIl2Cpp + EBKIANAMDGN_HNLNGBJFMKF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
