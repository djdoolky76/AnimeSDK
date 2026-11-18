#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMKKOEINFKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMIPEJNMFNM_BCOOFNPMCOA_1_OFFSET UNITYSDK_OFFSET(0x1936FE70)
#define KMIPEJNMFNM_BCOOFNPMCOA_OFFSET UNITYSDK_OFFSET(0x1936FE20)
#define KMIPEJNMFNM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KMIPEJNMFNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define KMIPEJNMFNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMIPEJNMFNM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KMIPEJNMFNM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DFD90)
#define KMIPEJNMFNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KMIPEJNMFNM_TypeDefinitionIndex = 15329;

struct alignas(8) KMIPEJNMFNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMIPEJNMFNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KMIPEJNMFNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMIPEJNMFNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KMIPEJNMFNM BCOOFNPMCOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMIPEJNMFNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_BCOOFNPMCOA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMKKOEINFKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMKKOEINFKF&))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::DMKKOEINFKF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DMKKOEINFKF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KMIPEJNMFNM BCOOFNPMCOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KMIPEJNMFNM EIFONLCJOPG)
	{
		return ((::KMIPEJNMFNM(*)(::FlatBuffers::ByteBuffer*, ::KMIPEJNMFNM))((::PBYTE)hIl2Cpp + KMIPEJNMFNM_BCOOFNPMCOA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
