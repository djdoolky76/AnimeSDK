#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPGEFNNINOP_CGNGHJPGCDK_JOIECNCJONB_OFFSET UNITYSDK_OFFSET(0x1AFC72D0)
#define OPGEFNNINOP_CGNGHJPGCDK_KACIIOOLCOO_OFFSET UNITYSDK_OFFSET(0x1AFC7560)
#define OPGEFNNINOP_CGNGHJPGCDK_KNKBDCIGNDM_OFFSET UNITYSDK_OFFSET(0x1AFC6E30)
#define OPGEFNNINOP_CGNGHJPGCDK_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x1AFC6DE0)
#define OPGEFNNINOP_CGNGHJPGCDK_PAMECNMDBBP_OFFSET UNITYSDK_OFFSET(0x1AFC77A0)
#define OPGEFNNINOP_CGNGHJPGCDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC72C0)

inline static constexpr unsigned int OPGEFNNINOP_CGNGHJPGCDK_TypeDefinitionIndex = 56988;

class OPGEFNNINOP_CGNGHJPGCDK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DMGODLGKNLB; // 0x10
	::HOCDHMEPPEG AHDCGOFBGBM; // 0x18
	::System::UInt32 LNIPKHDKCMN; // 0x48
	::System::Int32 DIMMHNEHCDC; // 0x4C
	::System::Boolean KLEEAANBOPP; // 0x50
	::System::Byte _padding0[0x3];
	::System::UInt32 FBOJALDHDLF; // 0x54
	::System::Int32 CJKNLGBKPLC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP_CGNGHJPGCDK__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP_CGNGHJPGCDK_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void JOIECNCJONB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP_CGNGHJPGCDK_JOIECNCJONB_OFFSET))(this);
	}

	::System::Void KACIIOOLCOO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OPGEFNNINOP_CGNGHJPGCDK_KACIIOOLCOO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void PAMECNMDBBP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OPGEFNNINOP_CGNGHJPGCDK_PAMECNMDBBP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void KNKBDCIGNDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEFNNINOP_CGNGHJPGCDK_KNKBDCIGNDM_OFFSET))(this);
	}
};
