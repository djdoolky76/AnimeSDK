#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FKPLEJHMNLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPNCPGCHNEO_BCILLKOEDJP_1_OFFSET UNITYSDK_OFFSET(0x1953C500)
#define HPNCPGCHNEO_BCILLKOEDJP_OFFSET UNITYSDK_OFFSET(0x1953C360)
#define HPNCPGCHNEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPNCPGCHNEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3D00)
#define HPNCPGCHNEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPNCPGCHNEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPNCPGCHNEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3D50)
#define HPNCPGCHNEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3D40)
#define HPNCPGCHNEO___INIT_OFFSET UNITYSDK_OFFSET(0x7E3CE0)

inline static constexpr unsigned int HPNCPGCHNEO_TypeDefinitionIndex = 10508;

struct alignas(8) HPNCPGCHNEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPNCPGCHNEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HPNCPGCHNEO BCILLKOEDJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPNCPGCHNEO EIFONLCJOPG)
	{
		return ((::HPNCPGCHNEO(*)(::FlatBuffers::ByteBuffer*, ::HPNCPGCHNEO))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_BCILLKOEDJP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HPNCPGCHNEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPNCPGCHNEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FKPLEJHMNLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKPLEJHMNLM&))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HPNCPGCHNEO BCILLKOEDJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPNCPGCHNEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_BCILLKOEDJP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FKPLEJHMNLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKPLEJHMNLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPNCPGCHNEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
