#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/HollowChessboard/RangeMask.h"

class NGCNIGAAEPD;
namespace System { class Object; }

#define JENJOEAJELD_APGNKOKCOBO_OFFSET UNITYSDK_OFFSET(0x7E02D0)
#define JENJOEAJELD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7E0150)
#define JENJOEAJELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E00D0)
#define JENJOEAJELD_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7E01B0)
#define JENJOEAJELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7E0160)
#define JENJOEAJELD_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7E0340)
#define JENJOEAJELD_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7E0200)
#define JENJOEAJELD_MDPMLIGGGBJ_OFFSET UNITYSDK_OFFSET(0x7E0270)
#define JENJOEAJELD__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int JENJOEAJELD_TypeDefinitionIndex = 56849;

struct alignas(8) JENJOEAJELD
{
	::System::UInt32 BHNPOKKIDGB; // 0x10
	::System::Byte _padding0[0x4];
	::NGCNIGAAEPD* MKCFKGIJKBB; // 0x18

	::System::Void _ctor(::System::UInt32 OMCGGDOJMMA, ::NGCNIGAAEPD* CICAFCILELN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NGCNIGAAEPD*))((::PBYTE)hIl2Cpp + JENJOEAJELD__CTOR_OFFSET))(this, OMCGGDOJMMA, CICAFCILELN);
	}

	/*
	::System::Boolean Equals(::JENJOEAJELD LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JENJOEAJELD))((::PBYTE)hIl2Cpp + JENJOEAJELD_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JENJOEAJELD_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENJOEAJELD_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JENJOEAJELD_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JENJOEAJELD_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MDPMLIGGGBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENJOEAJELD_MDPMLIGGGBJ_OFFSET))(this);
	}

	::System::Void APGNKOKCOBO(::MoleMole::HollowChessboard::RangeMask LMHIIMGKIGM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RangeMask))((::PBYTE)hIl2Cpp + JENJOEAJELD_APGNKOKCOBO_OFFSET))(this, LMHIIMGKIGM);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENJOEAJELD_HLPHPBAODIF_OFFSET))(this);
	}
};
