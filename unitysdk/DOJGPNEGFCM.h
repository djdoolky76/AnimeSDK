#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCKNJEIAIPH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOJGPNEGFCM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOJGPNEGFCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AE090)
#define DOJGPNEGFCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOJGPNEGFCM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOJGPNEGFCM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AE0D0)
#define DOJGPNEGFCM_PMOCMHJONDE_1_OFFSET UNITYSDK_OFFSET(0x17789080)
#define DOJGPNEGFCM_PMOCMHJONDE_OFFSET UNITYSDK_OFFSET(0x17789020)
#define DOJGPNEGFCM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AE080)
#define DOJGPNEGFCM___INIT_OFFSET UNITYSDK_OFFSET(0x7AE060)

inline static constexpr unsigned int DOJGPNEGFCM_TypeDefinitionIndex = 12625;

struct alignas(8) DOJGPNEGFCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJGPNEGFCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DOJGPNEGFCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOJGPNEGFCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCKNJEIAIPH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCKNJEIAIPH&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DOJGPNEGFCM PMOCMHJONDE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOJGPNEGFCM EIFONLCJOPG)
	{
		return ((::DOJGPNEGFCM(*)(::FlatBuffers::ByteBuffer*, ::DOJGPNEGFCM))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_PMOCMHJONDE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCKNJEIAIPH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCKNJEIAIPH&))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DOJGPNEGFCM PMOCMHJONDE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOJGPNEGFCM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOJGPNEGFCM_PMOCMHJONDE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
