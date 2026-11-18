#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POCAEGGMEOL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPLGNEBDMKI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IPLGNEBDMKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758460)
#define IPLGNEBDMKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPLGNEBDMKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IPLGNEBDMKI_PNOBCBICNLM_1_OFFSET UNITYSDK_OFFSET(0x152F12D0)
#define IPLGNEBDMKI_PNOBCBICNLM_OFFSET UNITYSDK_OFFSET(0x152F1260)
#define IPLGNEBDMKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7584A0)
#define IPLGNEBDMKI___INIT_OFFSET UNITYSDK_OFFSET(0x758440)

inline static constexpr unsigned int IPLGNEBDMKI_TypeDefinitionIndex = 15849;

struct alignas(8) IPLGNEBDMKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLGNEBDMKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IPLGNEBDMKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPLGNEBDMKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POCAEGGMEOL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POCAEGGMEOL&))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IPLGNEBDMKI PNOBCBICNLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPLGNEBDMKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_PNOBCBICNLM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IPLGNEBDMKI PNOBCBICNLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IPLGNEBDMKI EIFONLCJOPG)
	{
		return ((::IPLGNEBDMKI(*)(::FlatBuffers::ByteBuffer*, ::IPLGNEBDMKI))((::PBYTE)hIl2Cpp + IPLGNEBDMKI_PNOBCBICNLM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
